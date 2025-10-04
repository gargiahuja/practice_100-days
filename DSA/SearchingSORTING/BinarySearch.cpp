#include <iostream>
using namespace std;
int binary(int arr[], int tosearch, int start, int end)
{
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] == tosearch)
        {
            return mid;
        }
        if (arr[mid] > tosearch)
        {
            binary(arr, tosearch, start, mid - 1);
        }
        if (arr[mid] < tosearch)
        {
            binary(arr, tosearch, mid + 1, end);
        }
        return -1;
    }
    
}
int main()
{
    int n;
    cout << "enter the number of elements you want to add in the array\n";
    cin >> n;
    int arr[n];
    cout << "Start entering the elements in the array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int tosearch;
    cout << "enter the element you want to search\n";
    cin >> tosearch;
    cout << binary(arr, tosearch, 0, n - 1);
    return 0;
}