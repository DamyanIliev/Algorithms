// SortingAlgorithms.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n-1; i++) {
        int min = i;
            for (int j = i + 1; j < n; j++) {
                if (arr[j] < arr[min]) {
                    min = j;
                }
            }
            if (min != i) {
                swap(arr[i], arr[min]);
            }
    }
}

void insertionSort(vector<int>& arr) {
    int n = arr.size();
    int j = 0;
    int key = 0;
    for (int i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void bubleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }


}

void merge(vector<int>& arr,int l, int m, int r) {
    int i = l; //starting index for left subarray
    int j = m + 1;// starting index for raight subarray
    int k = 0; //starting index for the temporary array
    int n = r - l + 1;
    vector<int> temp(n);

    while (i <= m && j <= r) {
        if (arr[i] <= arr[j]) {
            temp[k] = arr[i];  //arr[i] is samller than arr[j]
            i++;
            k++;
        }
        else {
            temp[k] = arr[j];
            j++;
            k++;
        }
    }
    while (i<=m)
    {
        temp[k] = arr[i];  // Coppying all elemnts from left subarray as it is.
        i++;
        k++;
    }
    while (j <= r)
    {
        temp[k] = arr[j];  // Coppying all elemnts from raight subarray as it is.
        j++;
        k++;
    }
    for (int s = 0; s < n; s++) {
        arr[l + s] = temp[s];
    }
}
void mergeSort(vector<int>& arr,int l, int r) {
    int n = arr.size();
        if (l < r) {
            int m = (l + r) / 2;
            mergeSort(arr, l, m);
            mergeSort(arr, m + 1, r);
            merge(arr, l, m, r);
        }

}

int Partition(vector<int>& arr,int s, int e) {
    int pivot = arr[e]; // select the last element
    int pindex = s;
    for (int i = s; i<= e - 1; i++) {
        if (arr[i] <= pivot) {
            swap(arr[i], arr[pindex]);
            pindex++;
        }
    }
    swap(arr[e], arr[pindex]);
    return pindex;
}
void quickSort(vector<int>& arr, int s, int e) {
    if (s < e) {
        int p = Partition(arr, s, e);
        quickSort(arr, s, p - 1);
        quickSort(arr, p + 1, e);
    }
}

int main() {
    int n;
    cout << "Enter the size of your sorted array: ";
    cin >> n;
    vector<int> arr(n);

    cout << "Enter your elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }


    //Time complexity O(n^2):
    selectionSort(arr);
    //insertionSort(arr);
    //bubleSort(arr);

    //Time complexity O(nlog(n))
    //mergeSort(arr, 0, n - 1); //Space complexity: O(n)
    //quickSort(arr,0,n-1); // Space complexity: O(log(n)) it is better then the mergeSort

    cout << "Rearranged Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}


