//
//  main.cpp
//  QuickSort
//
//  Created by Zareek Galvan on 9/3/15.
//  Copyright (c) 2015 Trisquel Labs. All rights reserved.
//

#include <iostream>

using namespace std;

//=======================================================================================================================
void QuickSort(int arr[], int left, int right)
{
    int i = left, j = right;
    int tmp;
    int pivot = arr[(left + right) / 2];
    
    while (i <= j)
    {
        while (arr[i] < pivot)
            i++;
        while (arr[j] > pivot)
            j--;
        if (i <= j) {
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
            i++;
            j--;
        }
    }
    
    if (left < j)
    {
        QuickSort(arr, left, j);
    }
    if (i < right)
    {
        QuickSort(arr, i, right);
    }
}

//=======================================================================================================================
int main()
{
    int arr[] = {5,7,10,9,2,3,4,8};
    QuickSort(arr, 0, 7);
    for (int i = 0; i<8; i++)
    {
        cout << arr[i] <<" ";
    }
    cout << endl;
}