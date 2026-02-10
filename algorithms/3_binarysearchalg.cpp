#include <iostream>
#include <vector>
using namespace std;
 

int binarySearch(vector<int>v,int target){
    int st=0,end=v.size()-1;
    while(st<=end){
    //    int mid=(st+end)/2;//this will become big int so code will not run in competitve coding
    int mid=st+(end-st)/2;//more optimize approach
        if(target>v[mid]){
            st=mid+1;
        }
        else if(target<v[mid]){
            end=mid-1;
        }
        else{
            return mid;
        }
    }
    return -1;
}
int main(){
    int target=6;
    vector<int>v={1,2,3,4,5,6,7};
    cout<<"Element was found at index = "<<binarySearch(v,target)<<endl;
    return 0;
}