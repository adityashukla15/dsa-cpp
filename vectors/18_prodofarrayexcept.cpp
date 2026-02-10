#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>nums={1,2,3,4};
    int n=nums.size();
    int prod=1;
    vector<int>ans(n,1);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j){
                 prod=prod*nums[j];
            }
            ans[i]=prod;
        }
       
    }
    for(int i = 0; i < n; i++){
        cout << ans[i] << " ";
    }
    return 0;
}