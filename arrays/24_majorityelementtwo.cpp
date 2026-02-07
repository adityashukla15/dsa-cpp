#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> nums = {1,2,2,2,2,5,7};

    sort(nums.begin(), nums.end());

    int n = nums.size();
    int freq = 1;

    for(int i = 1; i < n; i++){
        if(nums[i] == nums[i-1]){
            freq++;
        } else {
            freq = 1;
        }

        if(freq > n/2){
            cout << "Majority Element: " << nums[i] << endl;
            return 0;
        }
    }

    cout << "No Majority Element" << endl;
    return 0;
}
