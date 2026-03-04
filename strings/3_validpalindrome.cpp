#include <iostream>
#include <string>
using namespace std;

bool isAlphaNumeric(char ch){
    if( (ch >= '0' && ch <= '9') || 
        (tolower(ch) >= 'a' && tolower(ch) <= 'z') ){
        return true;
    }
    return false;
}

bool isPalindrome(string s){
    int st = 0;
    int end = s.size() - 1;

    while(st < end){
        if(!isAlphaNumeric(s[st])){
            st++;
            continue;
        }
        else if(!isAlphaNumeric(s[end])){
            end--;
            continue;
        }

        if(tolower(s[st]) != tolower(s[end])){
            return false;
        }

        st++;
        end--;
    }
    return true;
}

int main(){
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    if(isPalindrome(str)){
        cout << "Palindrome" << endl;
    }
    else{
        cout << "Not a Palindrome" << endl;
    }

    return 0;
}