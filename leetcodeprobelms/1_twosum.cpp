#include <iostream>
#include <vector>
using namespace std;
int main(){
    int target;
    cout<<"Enter target element: ";
    cin>>target;
    vector<int>v={2,7,11,15};
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();i++){
            if(v[i]+v[j]==target){
                cout<<"Index for two sum "<<i<<" "<<j;
            }
        }
    }
    return 0;
}