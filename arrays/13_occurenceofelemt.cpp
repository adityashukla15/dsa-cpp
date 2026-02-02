#include <iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter size: ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int count=0;
    int target;
    cout<<"Enter element to find occurence: ";
    cin>>target;
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            count+=1;
        }
    }
    cout<<"No of occurence of the number "<<target<<"is "<<count<<endl;
    return 0;
}