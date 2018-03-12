class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = INT_MAX;
        if (strs.size() <= 0) {
            return "";
        }
        if (strs.size() == 1) {
            return strs[0];
        }
              for (int i = 0; i < strs.size(); i ++) {
            n = strs[i].length() < n ? strs[i].length() : n ;
        }
        for (int i = 0; i < n; i ++) 
        [
            for (int j = 1; j < strs.size(); j ++) {
                if (strs[j][i] != strs[j - 1][i]) {
                    return strs[0].substr(0, i);
                }
            }
        }
    
        return strs[0].substr(0, n);
    }
};
