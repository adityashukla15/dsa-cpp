#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int>v={1,2,2,3,4,5};
    int cnt;
    cnt=count(v.begin(),v.end(),2);
    cout<<"Count is : "<<cnt;
    return 0;
}