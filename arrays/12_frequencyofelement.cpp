#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter size: ";
    cin >> size;

    int arr[size];
    cout << "Enter array elements:\n";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < size; i++) {
        if(arr[i] == -1) 
            continue;

        int count = 1;   // ✅ reset + start from 1

        for(int j = i + 1; j < size; j++) {
            if(arr[i] == arr[j]) {
                count++;
                arr[j] = -1;   // mark duplicate
            }
        }

        cout << arr[i] << " -> " << count << endl;
    }

    return 0;
}
