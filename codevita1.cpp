#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int n, left = 0, right, ironMan = 0, captianAmerica = 0, turn = 0;
    cin >> n;
    right = n - 1;
    int p[n];
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    while (left <= right)
    {
        if (turn == 0)
        {
            if (p[left] > p[right])
            {
                ironMan += p[left++];
                if (p[left-1] > 0)
                {
                    while (p[left] > 0 && left <= right)
                    {
                        ironMan += p[left++];
                    }
                }
            }
            else
            {
                ironMan += p[right--];
                if (p[right+1] > 0)
                {
                    while (p[right] > 0 && left <= right)
                    {
                        ironMan += p[right--];
                    }
                }
            }
            turn = 1;
        }
        else
        {
            if (p[left] > p[right])
            {
                captianAmerica += p[left++];
                if (p[left-1] > 0)
                {
                    while (p[left] > 0 && left <= right)
                    {
                        captianAmerica += p[left++];
                    }
                }
            }
            else
            {
                captianAmerica += p[right--];
                if (p[right+1] > 0)
                {
                    while (p[right] > 0 && left <= right)
                    {
                        captianAmerica += p[right--];
                    }
                }
            }
            turn = 0;
        }
    }
    cout << abs(ironMan - captianAmerica);
    return 0;
}