#include <iostream>
#include <vector>
using namespace std;

int rotatedBinarySearch(vector<int>v,int target){
    int st=0,end=v.size()-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(v[mid]==target){
            return mid;
        }
        if(v[st]<=v[mid]){
            if(v[st]<=target && target<=v[mid]){
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        } 
        else{
            if(v[mid]<=target && target<=v[end]){
                st=mid+1;
            }
            else{
                end=mid-1;
            }
        }
    }
}
int main(){
    vector<int>v={3,4,5,6,8,7,9,2};
    int target=6;
    cout<<"Element is found at index = "<<rotatedBinarySearch(v,target);
    return 0;
}