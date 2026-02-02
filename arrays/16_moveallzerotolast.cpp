#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter size: ";
    cin >> size;

    int arr[size];
    cout << "Enter array elements: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int pos = 0; // position for next non-zero element

    // Move all non-zero elements to the front
    for (int i = 0; i < size; i++) {
        if (arr[i] != 0) {
            arr[pos] = arr[i];
            pos++;
        }
    }

    // Fill the remaining positions with 0
    for (int i = pos; i < size; i++) {
        arr[i] = 0;
    }

    cout << "Array with zeros at last: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
