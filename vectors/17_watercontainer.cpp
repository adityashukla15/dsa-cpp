#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int>v={3,4,8,9,6,7};
    int maxwater=0,width,height,area;
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            height=min(v[i],v[j]);
            width=j-i;
            area=height*width;
            maxwater=max(maxwater,area);
        }
    }
    cout<<"Maximum area is : "<<maxwater;
    return 0;
}