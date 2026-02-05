#include <iostream>
#include <vector>
#include<algorithm>
#include <numeric>
using namespace std;
int main(){
    vector<int>v={10,20,30,40,50,60};
    int sum=accumulate(v.begin(),v.end(),0);
    cout<<"Sum of vector elements: "<<sum<<endl;
    return 0;
}