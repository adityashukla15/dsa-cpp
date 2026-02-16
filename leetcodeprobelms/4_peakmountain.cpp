#include <iostream>
#include <vector>
using namespace std;

int peakMountain(vector<int>v){
    int st=1,end=v.size()-2;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(v[mid-1]<v[mid] && v[mid]>v[mid+1]){
            return mid;
        }
        else if(v[mid-1]<v[mid]){
            st=mid+1;
        }
        else {
            end=mid-1;
        }
    }
    return -1;
}

int main(){
    vector<int>v={2,3,8,6,5};
    cout<<"Peak element is present at index = "<<peakMountain(v);
    return 0;
}