#include <iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter size of Array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter Array elements: "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int left=0,right=size-1;
    while(left<=right){
        if(arr[left]<0){
            left++;
        }
        else if(arr[right]>=0){
            right--;
        }
        else{
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
        
    }
    return 0;
}