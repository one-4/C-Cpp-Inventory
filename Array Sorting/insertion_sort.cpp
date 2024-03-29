#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
  for (int i = 1; i < n-1; i++) {
    int key = arr[i];
    int j = i - 1;
    while (j >= 0 && arr[j] > key) {
        cout << i<<"   "<<j<<"       "<<endl;
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = key;
  }
}

void takeInput(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
}

void printArray(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
  int n;
  cout << "Enter the size of the array: ";
  cin >> n;
  int arr[n];
  cout << "Enter the elements of the array: ";
  takeInput(arr, n);
  insertionSort(arr, n);
  cout << "The sorted array is: ";
  printArray(arr, n);
  return 0;
}