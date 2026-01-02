This is where the entire explanation of the contains duplicate question goes

# Contains Duplicate (LeetCode 217)

---

## 🧩 Problem Summary
There are multiple approaches to solve this question, we go from the brute-force technique to the most optimised.
1. Brute-Force techique
   - We compare each element to every other element in the vector.
   - Time Complexity can go upto O(n^2)
```cpp
bool containsDuplicate(vector<int>nums){
  for (int i = 0; i<nums.size(); i++){
        for(int j = i+1; j<nums.size(); j++){
            cout<<"comparing "<<nums[i]<<" and "<<nums[j]<<endl;
            if(nums[i]==nums[j]){
                return true;
            }
        }
    }
    return false;
}
```
2. Slightly Optimized code - using Sorting technique
   - Same elements come together after sorting.
   - Time Complexity = O(n logn)
```cpp
bool containsDuplicate(vector <int> &nums){
    sort(nums.begin(),nums.end());
    for (int i = 0; i<nums.size(); i+=2){
        if(nums[i]==nums[i+1]){
            return true;
        }
    }
    return false;
}
```
3. Most Optimized code - using Unordered_set
   - Elements in unordered sets only occur once.
   - Trade off of space complexity. TC=O(1) SC=O(n)

     *Refer to the solutions.cpp*
     - Contains Duplicate → [Code](solution.cpp)

---


## 🔍 Important Concepts - Unordered_set vs Unordered_map
- Unordered set are only used to check if a particular item exists. 
- Sets cannot contain duplicates.
- sets: hash(key) -> bucket -> key //(key is the value associated)
  <br>VS<br>
- Unordered maps are used to associate a value to every key it inserts.
- Unordered maps are used to count the frequency of each element/key.
- hash (key) -> bucket -> value(key) //(value of the key is associated to every key) 

---

**Feel free to refer to the Unordered map quick notes.**
- Unordered map → [Notes](DSA-Tutorial/Notes/Unordered_map.md)
