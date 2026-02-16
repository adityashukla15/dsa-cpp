#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>v,int target){
     int st=0;int end=v.size()-1;
     while(st<=end){
        int mid=st+(end-st)/2;
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
   vector<int>v={1,2,3,4,5,6};
   int target;
   cout<<"Enter target element: "<<endl;
   cin>>target;
   cout<<"Element found at index = "<<binarySearch(v,target);
   return 0;
}