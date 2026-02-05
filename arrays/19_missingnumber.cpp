#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size: ";
    cin>>n;
    int arr[n-1];
    cout<<"Enter Array elements: "<<endl;
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    int total=n*(n+1)/2;
    int sum=0;
    for(int i=0;i<n-1;i++){
        sum+=arr[i];
    }
    cout<<"Missing Number = "<<total-sum;
    return 0;
}