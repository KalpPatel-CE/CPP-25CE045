// This program is prepared by 24CE043_Dev

#include<iostream>
using namespace std;

int main()
{
    int m, n;

    // Input size of first array
    cout << "Enter the size of 1st array: ";
    cin >> m;
    int *arr1 = new int[m]; // Dynamically allocate first array

    // Input elements for first array
    for(int i = 0; i < m; i++)
    {
        cout << "Enter element " << i+1 << ": ";
        cin >> arr1[i];
    }

    // Input size of second array
    cout << "Enter the size of 2nd array: ";
    cin >> n;
    int *arr2 = new int[n]; // Dynamically allocate second array

    // Input elements for second array
    for(int j = 0; j < n; j++)
    {
        cout << "Enter element " << j+1 << ": ";
        cin >> arr2[j];
    }

    // Allocate memory for the merged array
    int *merged = new int[m+n];

    int i = 0, j = 0, k = 0; // Indices for arr1, arr2, and merged array

    // Merge both arrays in sorted order
    while (i < m && j < n)
    {
        if(arr1[i] <= arr2[j])
        {
            merged[k++] = arr1[i++];
        }
        else
        {
            merged[k++] = arr2[j++];
        }
    }

    // Copy remaining elements of arr1 (if any)
    while(i < m){
        merged[k++] = arr1[i++];
    }

    // Copy remaining elements of arr2 (if any)
    while(j < n){
        merged[k++] = arr2[j++];
    }

    // Display the merged array
    cout << "\nMerged array is:\n ";
    for(int i = 0; i < m+n; i++){
        cout << merged[i] << " ";
    }
    cout << endl;

    cout << "\n24CE045_Kalp\n";

    // Free dynamically allocated memory
    delete[] arr1;
    delete[] arr2;
    delete[] merged;

    return 0;
}
