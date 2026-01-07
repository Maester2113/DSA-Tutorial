// Unordered map approach: TC = O(n), SC = O(n)

#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t){
    unordered_map <char, int> freq;
    for (char ch:s){
        freq[ch]++;
    }

    for(char ch:t){
        freq[ch]--;
    }

    for(auto &it:freq){
        if(it.second<0 || it.second>0)
        return false;
    }
    return true;
}
int main() {

    string s,t;
    cout<<"Enter the first string"<<endl;
    getline(cin,s);
    cout<<"Enter the second string"<<endl;
    getline(cin,t);

    bool flag = isAnagram(s,t);
    if (flag)
        cout<<"The strings are Anagrams"<<endl;
    else
        cout<<"The strings are not Anagram"<<endl;
    return 0;
}



// Space optimized solution using sorting mechanism: TC: O(n logn) SC: no external space required.
#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t){
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t)
        return true;
    else    
        return false;
}


int main() {

    string s,t;
    cout<<"Enter first string"<<endl;
    getline(cin,s);
    cout<<"Enter second string"<<endl;
    getline(cin,t);
    
    bool flag = isAnagram(s,t);
    if(flag)
        cout<<"ANAGRAM"<<endl;
    else 
        cout<<"NOT ANAGRAM"<<endl;

    return 0;
}
