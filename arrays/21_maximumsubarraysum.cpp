#include <iostream>
using namespace std;
int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int currSum=0;
    int mx=arr[0];
    for(int st=0;st<size;st++){
        for(int end=st;end<size;end++){
            currSum+=end;
            mx=max(currSum,mx);
        }
    }
    cout<<"Maximum sub array sum is: "<<mx;
    return 0;
}