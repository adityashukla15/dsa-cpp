#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v1 = {10, 20, 30, 40, 50};
    vector<int> v2;

    for(int i = 0; i < v1.size(); i++){
        v2.push_back(v1[i]);
    }

    cout << "Copied array: ";
    for(int x : v2){
        cout << x << " ";
    }

    return 0;
}
