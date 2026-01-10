#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs){
    unordered_map<string,vector<string>> mp;
    vector<vector<string>> ans;

    for(auto it: strs){
        string temp = it;
        sort(temp.begin(),temp.end());
        mp[temp].push_back(it);
    }

    for(auto it:mp){
        vector<string> temp = it.second;
        ans.push_back(temp);
    }
    return ans;
}

int main() {

    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};
    vector<vector<string>> temp = groupAnagrams(strs);
    for(auto it: temp){
        vector<string> temp = it;
        for(auto at: temp){
            cout<<at<<" ";
        }
        cout<<endl;
    }
    return 0;
}