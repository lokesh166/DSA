// using hashing 


class Solution {
public:
    bool isAnagram(string s, string t) {
        
        int len1 = s.length(); int len2 = t.length();
        
        if(len1 != len2) return false;
        
        vector<int> ans(26, 0);
        
        for(int i=0; i<len1; i++) {
            ans[s[i] - 'a']++;
        }
        
        for(int i=0; i<len2; i++) {
            ans[t[i] - 'a']--;
        }
        
        for(int i=0; i<26; i++) {
            if(ans[i] != 0) return false;
        }
        
        return true;
    
    }
};




// using sorting


class Solution {
public:
    bool isAnagram(string s, string t) {
        int len1 = s.length(); int len2 = t.length();
        
        if(len1 != len2) return false;
        
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        
        for(int i=0; i<len1; i++) {
            if(s[i] != t[i]) return false;
        }
        
        return true;
    }
};
