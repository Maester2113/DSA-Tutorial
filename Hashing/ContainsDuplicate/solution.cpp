/*
====================================================
Problem   : Conatins Duplicate (LeetCode 217)
Topic     : Hashing / Unordered_set
Difficulty: Easy

Approach  : Unordered_set
Time      : O(1)
Space     : O(n)

Notes:
- Unordered set is only used to check if a particular item exists.
- Key is the value associated to the hash.
====================================================
*/

#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
    unordered_set <int> s;

    for (int it: nums){
        if(s.count(it)){
            return true;
        }
        else
            s.insert(it);
    }
    return false;
}

// Driver Code (For local testing only)
// NOTE: LeetCode does NOT require main()
int main() {
    vector <int> nums = {1,2,3,1}; 
    bool flag = containsDuplicate(nums);
    if(flag){
        cout<<"The array contains duplicates"<<endl;
    }
    else
        cout<<"The array does not contain duplicates"<<endl;
        
    return 0;

}
