# Valid Anagrams (LeetCode 242)

---

## 🧩 Problem Summary
There are two approaches to solve this question and the approach depends on the use of external space.
1. Space Optimised approach
   - This approach uses a sorting mechanism.
   - This does not require the use of any external space but takes TC = O(n logn).
   - Just sort both the strings and compare. As simple as it sounds.
```cpp
bool isAnagram(string s, string t){
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t)
        return true;
    else    
        return false;
}
```
2. Time optimised approach
   - Uses unordered map to store the character and its frequency.
   - Typical unordered map question, that stores both the key(character) and the value(frequency) as a pair.
   - This requires the use of external space of O(n) but on the other hand offers a time utilised solution with TC = O(n).
```cpp
    bool isAnagram(string s, string t){
        unordered_map<char,int> mp;

        for(char ch : s){
            mp[ch]++;
        }

        for(char ch : t){
            mp[ch]--;
        }

        for(auto &i : mp){
            if(i.second == 0)
                continue;
            else 
                return false;
        }   
        return true;
    }
```



## 🔍 Important Concepts 
- The solution depends on what the interviewer demands. If they demand a space utilised code, go for the first solution. If the interviewer wants a space utilised solution, just implement the map bro.
---

**Feel free to refer to the quick notes.**
- Unordered map → [Notes](DSA-Tutorial/Notes/Unordered_map.md)
- Strings → [Notes](DSA-Tutorial/Notes/String.md)
