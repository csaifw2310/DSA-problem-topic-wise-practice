#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int partition(vector<int>& arr, int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i < j)
    {
        while (i <= high - 1 && arr[i] <= pivot)
            i++;

        while (j >= low + 1 && arr[j] > pivot)
            j--;

        if (i < j)
            swap(arr[i], arr[j]);
    }

    swap(arr[low], arr[j]);

    return j;
}

void quickSort(vector<int>& arr, int low, int high)
{
    if (low >= high)
        return;

    int pIndex = partition(arr, low, high);

    quickSort(arr, low, pIndex - 1);
    quickSort(arr, pIndex + 1, high);
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    quickSort(arr, 0, n - 1);

    cout << "Sorted array: ";

    for (int x : arr)
        cout << x << " ";
}