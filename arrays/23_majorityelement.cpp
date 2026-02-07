#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v = {1,2,2,2,5,6,2};
    int n = v.size();

    for(int val : v){
        int freq = 0;
        for(int el : v){
            if(el == val){
                freq++;
            }
        }
        if(freq > n/2){
            cout << "Majority Element: " << val << endl;
            break;
        }
    }
    return 0;
}
