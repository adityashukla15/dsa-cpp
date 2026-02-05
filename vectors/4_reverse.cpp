#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
  int size;
  cout<<"Enter size: ";
  cin>>size;
  vector<int>v(size);
  cout<<"Enter vector elements: "<<endl;
  for(int i=0;i<size;i++){
    cin>>v[i];
  }
  
  reverse(v.begin(),v.end());
  for(int x:v){
    cout<<"Reversed  vector:  "<<" "<<v[x];
    
  }
  return 0;
}