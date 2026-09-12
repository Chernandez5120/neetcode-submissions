class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> adds;
        unordered_map<char, int> tadds;
        if(s.size() != t.size()) {
            return false;
        }
        for(int i = 0; i < s.size(); ++i){
                if (adds.find(s[i]) == adds.end()){
                    adds[s[i]] = 1;
                } else {
                    adds[s[i]] += 1;
                }
                if (tadds.find(t[i]) == tadds.end()) {
                    tadds[t[i]] = 1;
                } else {
                    tadds[t[i]] += 1;
                }
        }
        return tadds == adds;
    }
};
