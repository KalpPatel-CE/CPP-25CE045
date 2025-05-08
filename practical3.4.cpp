#include <iostream>
using namespace std;

template <typename T>
void display(T* arr, int size) {
    cout << "Collection: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

template <typename T>
T findMax(T* arr, int size) {
    T max = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

template <typename T>
void reverse(T* arr, int size) {
    for (int i = 0; i < size / 2; ++i) {
        T temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

int main() {
    int intArray[] = {3, 7, 2, 9, 4};
    float floatArray[] = {2.5, 9.1, 4.3, 6.7};
    char charArray[] = {'a', 'z', 'm', 'k'};

    int intSize = sizeof(intArray) / sizeof(intArray[0]);
    int floatSize = sizeof(floatArray) / sizeof(floatArray[0]);
    int charSize = sizeof(charArray) / sizeof(charArray[0]);

    cout << "--- Integer Collection ---" << endl;
    display(intArray, intSize);
    cout << "Max: " << findMax(intArray, intSize) << endl;
    reverse(intArray, intSize);
    cout << "After Reversing: ";
    display(intArray, intSize);

    cout << "\n--- Float Collection ---" << endl;
    display(floatArray, floatSize);
    cout << "Max: " << findMax(floatArray, floatSize) << endl;
    reverse(floatArray, floatSize);
    cout << "After Reversing: ";
    display(floatArray, floatSize);

    cout << "\n--- Char Collection ---" << endl;
    display(charArray, charSize);
    cout << "Max: " << findMax(charArray, charSize) << endl;
    reverse(charArray, charSize);
    cout << "After Reversing: ";
    display(charArray, charSize);
    cout<<"24CE045_Kalp";
    return 0;
}
