#include <iostream>
using namespace std;

template <typename T>
//реверс і оберення
void reverseArray(T arr[], int start, int end) {
    while (start < end) {
        T temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

template <typename T>
//вивід масиву,приймаж розмір і сам масив
void printArray(T arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}
//заповнює його
void fillArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        arr[i] = i + 1;
}


int main() {
    const int size = 8;
    int arr[size];

    fillArray(arr, size);

    cout << "Original array: ";
    printArray(arr, size);

    //перевернення 
    reverseArray(arr, 0, size - 1);

    //перевернутий вивід
    cout << "\nReversed array: ";
    printArray(arr, size);

    return 0;
}
