using namespace std;
#include <iostream>

#include <stdlib.h>
void quick(int *arr, int left, int right)
{
    if (right-left<1)
    {
        return;
    }
    else
    {
        int end = right;
        int pivot = arr[left];
        int lb = left + 1;
        int ub = right;
        while (lb < ub)
        {

            while (arr[lb] <= pivot)
            {
                lb++;
            }
            while (arr[ub] > pivot)
            {
                ub--;
            }
            if (lb < ub)
            {
                int temp = arr[lb];
                arr[lb] = arr[ub];
                arr[ub] = temp;
            }
            if(ub<lb)
            {
                int temp = arr[ub];
                arr[ub] = pivot;
                pivot = temp;
            }
        }
        quick(arr, 0, ub - 1);
        quick(arr, ub + 1, end);
    }
}

int main()
{
    int arr[10], i;
    cout << "Enter the numbers(10)";
    for (int i = 0; i < 10; i++)
        cin >> arr[i];
    quick(arr, 0, 9);
    for (int i = 0; i < 10; i++)
        cout << arr[i];
    return 0;
}