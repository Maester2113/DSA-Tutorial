#include <bits/stdc++.h>
using namespace std;

vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int,int> freq;
    vector<int> ans;

    for(auto it:nums){
        freq[it]++;
    }

    vector<pair<int,int>> temp (freq.begin(), freq.end());

    // sort(temp.begin(), temp.end(), [](auto &a, auto &b) {
    //     return a.second > b.second;   
    // });

    // for(int i=0; i<k; i++){
    //     ans.push_back(temp[i].first);
    // }
    // return ans;


    vector<vector<int>> n (nums.size()+1);

    for(auto it: freq){
        n[it.second].push_back(it.first);
    }

    for(int i = nums.size()-1; i>=0 ; i--){
        if(n[i].size()==0) continue;
        else{
            while(n[i].size()!=0 && k!=0){
                ans.push_back(n[i].back());
                n[i].pop_back();
                k--;
            }
        }
    }
    return ans;
}

int main() {

    vector<int> nums = {1,1,1,2,2,3};
    int k = 2;
    
    vector<int> ans = topKFrequent(nums, k);
    for(auto it: ans){
        cout<<it<<" ";
    }
    return 0;
}



