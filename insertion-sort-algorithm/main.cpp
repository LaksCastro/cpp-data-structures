#include <iostream>

using namespace std;

void printArray(int *array) {
  int length = sizeof(array);

  for (int i = 0; i < length; i++) {
    cout << "Element " << i << ": ";
    cout << *(array + i) << endl;
  }
}

void insertionSort(int *array) {
  int length = sizeof(array);

  for (int i = 0; i < length; i++) {
    for (int j = 0; j < length; j++) {
      if (*(array + i) < *(array + j)) {
        int temp = *(array + i);
        *(array + i) = *(array + j);
        *(array + j) = temp;
      }
    }
  }
}

int main() {
  int array[] = {5, 12, 4, 2, 89, 23, 47, 12, 56};

  cout << "Raw Array: " << endl;

  printArray(array);

  cout << "Starting the sort with Insertion Sort Algorithm" << endl;

  insertionSort(array);

  cout << "Done, the sorted array is: " << endl;

  printArray(array);

  return 0;
}
