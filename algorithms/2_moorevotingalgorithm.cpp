#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>v={1,2,2,3,4,5};
    int freq=0,ans=0;
    for(int i=0;i<v.size();i++){
        if(freq==0){
            ans=v[i];
        }
        if(ans==v[i]){
            freq++;
        }
        else{
            freq--;
        }
    }
    cout<<"Majority element is = "<<ans;
    return 0;
}