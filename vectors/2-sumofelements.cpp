#include <iostream>
#include <vector>
using namespace std;
int main(){
    int size;
    cout<<"Enter size of vector: ";
    cin>>size;
    vector<int>v(size);
    cout<<"Enter vector elements: "<<endl;
    for(int i=0;i<size;i++){
        cin>>v[i];
    }
    int sum=0;
    cout<<"Sum of vector elements = ";
    for(int i=0;i<size;i++){
        sum+=v[i];
    }
    cout<<sum;
    return 0;
}
