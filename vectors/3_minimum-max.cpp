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
   int mx=v[0],mn=v[0];
   for(int x:v){
    mx=max(mx,x);
    mn=min(mn,x);
   }
   cout<<"Maximum element ="<<mx<<endl;
   cout<<"Minimum element ="<<mn<<endl;
    return 0;
}
