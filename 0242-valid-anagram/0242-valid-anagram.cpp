class Solution {
public:
    bool isAnagram(string s, string t) {
        int a=s.length(),b=t.length();
        if(a!=b) return false;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return (s==t);
    }
};