#include<bits/stdc++.h>4
using namespace std;

vector<int> twoSum(vector<int> &nums, int target){
  unordered_map<int,int> mp; //unordered map to store each element of nums along with its index.
  for(int i=0; i<nums.size(); i++){
    int rem = target - nums[i]; 
    if(mp.count(rem)){
      return {mp[rem],i};
    }
    mp[nums[i]] = i;
  }
  return {};  
}

int main(){
  vector<int> nums = {2,7,11,15};
  int target = 9;
  vector<int> ans = twoSum(nums, target);
  cout<<ans[0]<<" "<<ans[1]<<endl;
  return 0;
}
