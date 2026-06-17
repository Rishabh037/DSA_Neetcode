class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // sorting method

        unordered_map <string ,vector<string>> res;
        for(const auto &s : strs){
            string sorts = s;
            sort(sorts.begin(),sorts.end());
            res[sorts].push_back(s);
        }

        vector<vector<string>> result;
        for(auto& pair : res){
            result.push_back(pair.second);
        }

        return result;
    }
};
