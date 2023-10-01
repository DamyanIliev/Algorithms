#include <iostream>
#include <vector>
using namespace std;


void linearSearch(vector<int>& arr, int find) {
	int n = arr.size();
	int temp = -1;
	for (int i = 0; i < n; i++) {
		if (find == arr[i]) {
			cout << endl << find << " is at " << i +1 << "position in your array";
			temp++;
		}
	}
	if (temp == -1) {
		cout << "In your array there is no elemet " << find << ".";
	}
}
void merge(vector<int>& arr, int l, int m, int r) {
	int i=l;
	int j=m+1;
	int k = 0;
	int n = r - l + 1;
	vector<int> temp(n);

	while (i <= m && j <= r) {
		if (arr[i] <= arr[j]) {
			temp[k] = arr[i];
			i++;
			k++;
		}
		else {
			temp[k] = arr[j];
			j++;
			k++;
		}
	}
	while (i<=m) {
		temp[k] = arr[i];
		i++;
		k++;
	}
	while (j<=r){
		temp[k] = arr[j];
		j++;
		k++;
	}
	for (int s = 0; s < n; s++) {
		arr[l + s] = temp[s];
	}
}
  

void mergeSort(vector<int>& arr, int l, int r) {
	int n = arr.size();
	int m;
	if (l < r) {
		m = (l + r) / 2;
		mergeSort(arr, l, m);
		mergeSort(arr, m + 1, r);
		merge(arr, l, m, r);
	}
}

void binarySearch(vector<int>& arr, int l, int r, int find) {
	int n = arr.size();
	while (l <= r) {
		int m = l + (r - l) / 2;
		if (arr[m]==find) {
			cout << "Your element is at position " << m + 1 << endl;
			return;
		}
		else if (arr[m]>find) {
			r = m - 1;
		}
		else {
			l = m + 1;
		}

	}
	cout << "Element not found.";
}

int main()
{
	int n, k=1, find;
	cout << "Enter the size of your array: ";
	cin >> n;
	vector<int> arr;
	for (int i = 0; i < n; i++) {
		int element;
		cout << "Enter your " << k << " element: ";
		cin >> element;
		arr.push_back(element);
		k++;
	}
	cout << "This is your array: ";
	for (int i = 0; i < n; i++) {
		cout <<" "<< arr[i];
	}
	/*cout << endl << "Which elemet did you want to find? ";
	cin >> find;
	linearSearch(arr, find);*/

	mergeSort(arr, 0, n-1);
	cout <<endl<< "Rearranged Array: ";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl << "Which elemet did you want to find? ";
	cin >> find;
	binarySearch(arr, 0, n-1, find);

	return 0;
}
