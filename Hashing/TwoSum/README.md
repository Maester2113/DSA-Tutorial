# Two sum (LeetCode 001)

---

## 🧩 Problem Summary
This might be the first question that you solve when you start with DSA but it needs some core fundamentals if you want an optimised solution. Let's start with the noobie solution.
1. Bruteforce : TC- O(n^2)
   - We iterate through every possible pair and if it matches to the target.
   - Uses two nested loops.
   - Not the most opitmised solution
```cpp
vector<int> twoSum(vector<int> &nums, int target){

    for(int i = 0; i< nums.size(); i++){
      for(int j = 1; j<nums.size(); j++){
        if(i==j) continue;
        else if(nums[i] + nums[j] == target)
          return {i,j};
      }    
    }
    return {};
}
```
2. Time optimised solution:
   - This approach uses unordered map to store each element of the vector nums.
   - The element acts as the key of the map whereas the index of that elements acts as the value.
   - This approach solves the question in TC= O(n)
```cpp
vector<int> twoSum(vector<int> &nums, int target){
    unordered_map<int,int> mp;
    vector<int> ans;
    for(int it = 0; it< nums.size(); it++){
        int rem = target - nums[it];
        if(mp.count(rem)){
            return {mp[rem],it};
        }
        mp[nums[it]] = it;
    }
    return {};

}
```
- we traverse through the entire vector.
- we select each element and then find if the difference of that element with the target (target - nums[i]) exists in the vector.
- If it exists, we return the two indices.
- If the differece does not exist, we add that element inside the map for future reference.
- This approach prevents from using the same element twice and thus eliminates the chance of duplicate indices in the solution.


## 🔍 Important Concepts 
- The catch in this question is that we use the index as the value of the map and the actual element as the key.
- Just keep in mind: Select one element, check if the difference exists in the map.
---

**Feel free to refer to the quick notes.**
- Unordered map → [Notes](DSA-Tutorial/Notes/Unordered_map.md)
- Vector → [Notes](DSA-Tutorial/Notes/Vectors.md)
