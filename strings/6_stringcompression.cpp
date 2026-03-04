#include <iostream>
#include <vector>
#include <string>
using namespace std;

int compress(vector<char>& chars){
    int n = chars.size();
    int idx = 0;

    for(int i = 0; i < n; i++){
        char ch = chars[i];
        int count = 0;

        while(i < n && chars[i] == ch){
            count++;
            i++;
        }

        if(count == 1){
            chars[idx++] = ch;
        } else {
            chars[idx++] = ch;
            string str = to_string(count);
            for(char dig : str){
                chars[idx++] = dig;
            }
        }
        i--;
    }

    chars.resize(idx);
    return idx;
}

int main() {

    int n;
    cout << "Enter number of characters: ";
    cin >> n;

    vector<char> chars(n);

    cout << "Enter characters: ";
    for(int i = 0; i < n; i++){
        cin >> chars[i];
    }

    int newLength = compress(chars);

    cout << "Compressed characters: ";
    for(char c : chars){
        cout << c << " ";
    }

    cout << "\nNew Length: " << newLength << endl;

    return 0;
}