#include <iostream>
#include <vector>
using namespace std;

void reverseString(vector<char>& s) {
    int st = 0, end = s.size() - 1;
    while (st < end) {
        swap(s[st++], s[end--]);
    }
}

int main() {
    vector<char> s = {'A', 'd', 'i', 't', 'y', 'a'};

    cout << "Original vector: ";
    for (char x : s) {
        cout << x;
    }

    reverseString(s);

    cout << "\nReversed vector: ";
    for (char x : s) {
        cout << x;
    }

    return 0;
}