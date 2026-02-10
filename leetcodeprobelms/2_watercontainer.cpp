#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>v={3,4,5,6,8,7};
    int maxWater=0;
    int lp=0,rp=v.size()-1;
    while(lp<rp){
        int w=rp-lp;
        int height=min(v[lp],v[rp]);
        int area=w*height;
        maxWater=max(maxWater,area);
        v[lp]<v[rp]?lp++ :rp--;
    }
    cout<<"Maximum water area is: "<<maxWater;
    return 0;

}