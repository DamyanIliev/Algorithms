// Array_Опит.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

              
                 //TASK 1
//Write a C++ program to find the largest element of a given array of integers.
       
//int main()
//{
//    int max = 0;
//    int arr[5] = { 4, 12, 5, 8, 3 };
//    int n = sizeof(arr) / sizeof(arr[0]);
//    for (int i=0; i < n; i++) {
//        if (arr[i] > max) {
//            max = arr[i];
//        }
//        
//    }
//    cout << "==========" << max << "==========";
//    
//}


            // TASK 2
// Write a C++ program to find the largest three elements in an array.

//int main(){
//
//    int arr[6] = { 2,8,5,4,2,9 };
//    int n = sizeof(arr) / sizeof(arr[0]);
//    int max = 0 ,second = 0, third = 0;
//        for (int i = 0; i < n; i++) {
//            if (arr[i] > max) {
//                max = arr[i];
//            }
//            else if (arr[i] > second) {
//                second = arr[i];
//            }
//            else if (arr[i]>third) {
//                third = arr[i];
//            }
//
//    }
//        cout << max << " " << second << " " << third;
//
//}
    
                   // TASK3
//Write a C++ program to find the second largest element in an array of integers.

//void findSecondElement(int n, int arr[]) {
//    int first = 0;
//    int second = 0;
//
//    for (int i = 0; i < n; i++) {
//        if (arr[i] > first) {
//            second = first; 
//            first = arr[i]; 
//        }
//    }
//
//    std::cout << "The second largest element is: " << second << std::endl;
//}
//
//int main() {
//    int arr[8] = { 2, 9, 6, 5, 8, 1, 14, 7 };
//    int n = sizeof(arr) / sizeof(arr[0]);
//
//    findSecondElement(n, arr);
//
//    return 0;
//}


                   // TASK 4
//Write a C++ program to find the k largest elements in a given array of integers.

////descending bubble sort.
//void bubbleSort(vector<int>& arr) {
//    int n = arr.size();
//    int i, j;
//    bool swapped;
//    for (i = 0; i < n - 1; i++) {
//        swapped = false;
//        for (j = 0; j < n - i - 1; j++) {
//            if (arr[j] < arr[j + 1]) {
//                swap(arr[j], arr[j + 1]);
//                    swapped = true;
//            }
//        }
//        if (swapped == false) {
//            break;
//        }
//    }
//}
//
//
//int main() {
//    int n;
//    cout << "Please enter the size of array. ->";
//    cin >> n;
//    vector<int> arr(n);
//    cout << "Please enter " << n << " elements for the array. ->";
//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//    }
//    int k;
//    cout << "Witch largest elements do you want it must be less then "<< n<< " :";
//    cin >> k;
//    if (k < n) {
//        bubbleSort(arr);
//        cout << "The " << k << " largest elemet is:";
//        cout << arr[k - 1];
//    }
//    else {
//        cout << "Your array is too small.";
//        return 0;
//    }    
// }


               // TASK 5
//Write a C++ program to find the second smallest elements in a given array of integers.

//void bubbleSort2(vector<int>& arr) {
//    int n = arr.size() ;
//    int i,j;
//    bool swapped;
//    for (i = 0; i < n-1; i++) {
//        swapped = false;
//        for (j = 0; j < n - i - 1; j++) {
//            if (arr[j] > arr[j + 1]) {
//                swap(arr[j], arr[j + 1]);
//                swapped = true;
//            } 
//        }
//
//        if (swapped == false) {
//            break;
//        }
//    }
//}
//
//
//int main() {
//    int n;
//    cout << "Enter the size of your array: ";
//    cin >> n;
//    vector<int> arr(n);
//    cout << "Enter your array: ";
//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//    }
//    bubbleSort2(arr);
//    if (n >= 2) {
//        cout << "The second smallest number in your array is: " << arr[1];
//    }
//    else {
//        cout << "There are not enough elements in the array to find the second smallest.";
//    }
//    return 0;
//}

                        //TASK 6
//Write a C++ program to find all elements in an array of integers that have at least two significant elements.

//void printAllElements(vector<int>& arr) {
//    int n = arr.size();
//    int k=1;
//        for (int i = 0; i < n; i++) {
//            cout << "Your " << k << " element is: " << arr[i] << endl;
//            k++;
//        }
//}
//
//
//int main() {
//    int n;
//    cout << "Enter the size of your array: ";
//    cin >> n;
//    if (n > 2) {
//        vector<int>arr(n);
//        cout << "Enter your elements:";
//        for (int i = 0; i < n; i++) {
//            cin >> arr[i];
//        }
//        printAllElements(arr);
//    }
//    else {
//        cout << "Your array is to small.";
//            return 0;
//    }
//}

                    // TASK7
//Write a C++ program to find the most frequent element in an array of integers.

//void bublleSort(vector<int>& arr) {
//    int n = arr.size();
//    bool swapped;
//    for (int i = 0; i < n - 1; i++) {
//        swapped = false;
//        for (int j = 0; j < n - i - 1; j++) {
//            if (arr[j] > arr[j + 1]) {
//                swap(arr[j], arr[j + 1]);
//                swapped = true;
//            }
//        }
//        if (!swapped) {
//            break;
//        }
//    }
//}
//
//void mostFrequentElement(vector<int>& arr) {
//    int n = arr.size();
//    int curentFrequency = 1;
//    int maxFrequency = 1;
//    int mostFrequent = arr[0];
//    for (int i = 1; i < n; i++) {
//        if (arr[i] == arr[i - 1]) {
//            curentFrequency++;
//        }
//        else {
//            curentFrequency = 1;
//        }
//        if (curentFrequency > maxFrequency) {
//            maxFrequency = curentFrequency;
//            mostFrequent = arr[i];
//        }
//    }
//    cout << "The most frequent elemt is: " << mostFrequent << endl;
//}
//
//
//int main() {
//    int n;
//    cout << "Enter the size of your array: ";
//    cin >> n; 
//    if (n > 2) {
//        cout << "Enter the elements of your array: ";
//        vector<int> arr(n);
//        for (int i = 0; i < n; i++) {
//            cin >> arr[i];
//        }
//        bublleSort(arr);
//        mostFrequentElement(arr);
//    }
//    else {
//        cout << "Array size is to small.";
//    }
//    return 0;
//}

 
                    // TASK 8
//Write a C++ program to find the next more powerful element of every element of a given array of integers.
//Ignore those elements that have no greater element.

//void merge(vector<int>& arr, int l, int m, int r) {
//    int n1 = m - l + 1;
//    int n2 = r - m;
//
//    vector<int> L(n1);
//    vector<int> R(n2);
//
//    for (int i = 0; i < n1; i++) {
//        L[i] = arr[l + i];
//    }
//    for (int i = 0; i < n2; i++) {
//        R[i] = arr[m + 1 + i];
//    }
//
//    int i = 0, j = 0, k = l;
//
//    while (i < n1 && j < n2) {
//        if (L[i] <= R[j]) {
//            arr[k] = L[i];
//            i++;
//        }
//        else {
//            arr[k] = R[j];
//            j++;
//        }
//        k++;
//    }
//
//    while (i < n1) {
//        arr[k] = L[i];
//        i++;
//        k++;
//    }
//
//    while (j < n2) {
//        arr[k] = R[j];
//        j++;
//        k++;
//    }
//}
//
//void mergeSort(vector<int>& arr, int l, int r) {
//    if (l < r) {
//        int m = l + (r - l) / 2;
//        mergeSort(arr, l, m);
//        mergeSort(arr, m + 1, r);
//        merge(arr, l, m, r);
//    }
//}
//
//int main() {
//    int n;
//    cout << "Enter the size of your array: ";
//    cin >> n;
//    if (n >= 3) {
//        cout << "Enter the elements of your array: ";
//        vector<int> arr(n);
//        for (int i = 0; i < n; i++) {
//            cin >> arr[i];
//        }
//        mergeSort(arr, 0, n - 1);
//        cout << "Sorted array: ";
//        for (int i = 0; i < n-1; i++) {
//            cout << arr[i] << " is less then -> "<< arr[i+1] << endl;
//        }
//        cout << endl;
//    }
//    else {
//        cout << "Your array is too small." << endl;
//    }
//    return 0;
//}

                 //TASK 9
//Write a C++ program to sort a given unsorted array of integers, in wave form.
//Note: An array is in wave form when array[0] >= array[1] <= array[2] >= array[3] <= array[4] >= . . . .

//void selectionSort(vector<int>& arr) {
//        int n = arr.size();
//        for (int i = 0; i < n - 1; i++) {
//            int min = i;
//            for (int j = i+1; j < n; j++) {
//                if (arr[j] < arr[min]) {
//                    min = j;
//                }
//            }if (min != i) {
//                int temp = arr[min];
//                arr[min] = arr[i];
//                arr[i] = temp;
//            }
//        }
//    }
//void sortinWaveForm(vector<int>& arr) {
//    int n = arr.size();
//    for (int i = 0; i < n - 1; i+=2) {
//        if (arr[i] < arr[i + 1]) {
//            swap(arr[i], arr[i + 1]);
//        }
//    }
//}
//
//int main() {
//    int n;
//    int k = 1;
//    cout << "Enter the size of your array: ";
//    cin >> n;
//    if (n > 2) {
//        vector<int>arr(n);
//        for (int i = 0; i < n; i++) {
//            cout << "Enter your " << k << " element: ";
//            cin >> arr[i];
//            k++;
//        }
//        selectionSort(arr);
//        sortinWaveForm(arr);
//
//        for (int i = 0; i < n; i++) {
//            cout << arr[i] << " ";
//        }
//    }
//    else {
//        cout << "Your array is to small.";
//    }
//}





                       //TASK 10 
//Using selectionSort for sortin an array

//void selectionSort(vector<int>& arr) {
//    int n = arr.size();
//    for (int i = 0; i < n - 1; i++) {
//        int min = i;
//        for (int j = i + 1; j < n; j++) {
//            if (arr[j] < arr[min]) {
//                min = j;
//            }
//        }if (min != i) {
//            int temp = arr[min];
//            arr[min] = arr[i];
//            arr[i] = temp;
//        }
//    }
//}
//
//int main() {
//    int n; 
//    cout << "Enter the sie of your array: ";
//    cin >> n;
//    if (n > 2) {
//        vector<int> arr(n);
//        cout << "Enter your elements: ";
//        for (int i = 0; i < n; i++) {
//            cin >> arr[i];
//        }
//        selectionSort(arr);
//        for (int i = 0; i < n; i++) {
//            cout << arr[i] << " ";
//        }
//    }
//    else {
//        cout << "Your array is too samll.";
//    }
//}


            //TASK 11
//Write a C++ program to find the smallest element missing from a sorted array. 

//void selectionSort(vector<int>& arr) {
//    int n = arr.size();
//    for (int i = 0; i < n - 1; i++) {
//        int min = i;
//        for (int j = i + 1; j < n; j++) {
//            if (arr[j] < arr[min]) {
//                min = j;
//            }
//        }if (min != i) {
//            swap(arr[i], arr[min]);
//        }
//    }
//
//}
//
//void smalestMissing(vector<int>& arr) {
//    int n = arr.size();
//    int m = 0;
//    for (int i = 0; i < n; i++) {
//        if (arr[i] > m) {
//            cout << "Smalest missing element is: " << m;
//            return;
//        }
//        m++;
//    }
//    cout << "No missing elements found." << endl;
//}
//
//int main() {
//    int n;
//    int k = 1;
//    int m = 0;
//    int missing;
//
//    cout << "Eter the size of your array: ";
//    cin >> n;
//
//    vector<int>arr(n);
//
//    for (int i = 0; i < n; i++) {
//        cout << "Enter the " << k << " elemnt: ";
//        cin >> arr[i];
//        k++;
//    }
//    selectionSort(arr);
//    smalestMissing(arr);
//
//}

                    //TASK 12
//Write a C++ program to update every array element by multiplication of the 
// next and previous values of a given array of integers.

//void multiplayNandP(vector<int>& arr) {
//    int n = arr.size();
//    for (int i = 1; i < n - 1; i++) {
//        arr[i] = arr[i - 1] * arr[i + 1];
//    }
//}
//
//int main() {
//    int n;
//    int k = 1;
//    cout << "Enter the size of your array: ";
//    cin >> n;
//    vector<int> arr(n);
//
//    for (int i = 0; i < n; i++) {
//        cout << "Enter your " << k << " elemnt: ";
//        cin >> arr[i];
//        k++;
//    }
//    multiplayNandP(arr);
//    for (int i = 0; i < n; i++) {
//        cout << arr[i] << " ";
//    }
//    return 0;
//}

                      //TASK13
//Write a C++ program to separate even and odd numbers in an array of integers.
//Put all even numbers first, and then odd numbers.

//void separateEven(vector<int>& arr) {
//    int n = arr.size();
//    int m;
//    int i = 0;
//    while (i < n) {
//        if (arr[i] % 2 == 0) {
//           
//            cout<< arr[i] <<" ";
//        }
//        i++;
//    }
//}
//
//void separateOdd(vector<int>& arr) {
//    int n = arr.size();
//    int i = 0;
//    while (i < n) {
//        if (arr[i] % 2 == 1) {
//            cout<< arr[i] << " ";
//        }
//        i++;
//    }
//}
//
//int main() {
//    int n;
//    int k=1;
//    cout << "Enter the size of your array: ";
//    cin >> n;
//    vector<int>arr(n);
//    for (int i = 0; i < n; i++){
//        cout << "Enter your " << k << " elemt: ";
//        cin >> arr[i];
//        k++;
//    }
//    cout << "Even numbers are: ";
//    separateEven(arr);
//    cout << endl;
//    cout << "Odd numbers are: ";
//    separateOdd(arr);
//}

                      //TASK14
//Write a C++ program to separate 0s and 1s from a given array of values 0 and 1.

//void separateZeroes(vector<int>& arr) {
//        int n = arr.size();
//        int m;
//        int i = 0;
//        while (i < n) {
//            if (arr[i] % 2 == 0) {
//               
//                cout<< arr[i] <<" ";
//            }
//            i++;
//        }
//    }
//    
//    void separateOnes(vector<int>& arr) {
//        int n = arr.size();
//        int i = 0;
//        while (i < n) {
//            if (arr[i] % 2 == 1) {
//                cout<< arr[i] << " ";
//            }
//            i++;
//        }
//    }
//    
//    int main() {
//        int n;
//        int x;
//        int k=1;
//        cout << "Enter the size of your array: ";
//        cin >> n;
//        vector<int>arr(n);
//        for (int i = 0; i < n; i++){
//            cout << "Enter your " << k << " elemt: ";
//            cin >> x;
//            if (x==1 || x==0) {
//                arr[i] = x;
//            }
//            else {
//                cout << "Your elements must be 0 or 1. ";
//            }
//            k++;
//        }
//        cout << "Zeroes: ";
//        separateZeroes(arr);
//        cout << endl;
//        cout << "Ones: ";
//        separateOnes(arr);
//    }

                      //TASK15
//Write a C++ program to rearrange a given sorted array of positive integers .
//Note: In final array, first element should be maximum value, second minimum value, 
//third second maximum value, fourth second minimum value, fifth third maximum and so on.

//void rearrangeSortedArray(vector<int>& arr) {
//    int n = arr.size();
//    vector<int> result(n);
//    int left = 0, right = n - 1;
//    bool flag = true;
//
//    for (int i = 0; i < n; i++) {
//        if (flag) {
//            result[i] = arr[right];
//            right--;
//        }
//        else {
//            result[i] = arr[left];
//            left++;
//        }
//        flag = !flag;
//    }
//
//    // Copy the rearranged elements back to the original array
//    for (int i = 0; i < n; i++) {
//        arr[i] = result[i];
//    }
//}
//
//int main() {
//    int n;
//    cout << "Enter the size of your sorted array: ";
//    cin >> n;
//    vector<int> arr(n);
//
//    cout << "Enter the elements of your sorted array: ";
//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//    }
//
//    rearrangeSortedArray(arr);
//
//    cout << "Rearranged Array: ";
//    for (int i = 0; i < n; i++) {
//        cout << arr[i] << " ";
//    }
//
//    return 0;
//}