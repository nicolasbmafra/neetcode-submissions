class Solution {
public:
    bool isAnagram(string s, string t) {
        int letrasS[26] = {0};
        int letrasT[26] = {0};
        if(s.length() != t.length()){return false;}
        for(int index = 0; index < s.length(); index++){
            letrasS[(s[index])-'a']++;
            letrasT[(t[index])-'a']++;
        }
        for(int index = 0; index < 26; index++) {
            if(letrasS[index] != letrasT[index]) {
                return false;
            }
        }
        return true;
    }
};