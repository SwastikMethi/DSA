#include <iostream>
#include <vector>
using namespace std;
int most_consecutive_ones(vector<int>& nums){
    int count=0;
    int maximum=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==1){
            count ++;
            maximum = max(count,maximum);
        }
        else{
            count = 0;
        }
    }
    return maximum;
}

int main(){
    vector<int> nums = {1,1,1,1,1,1};
    cout<<most_consecutive_ones(nums)<<endl;
    return 0;
}
