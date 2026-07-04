class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        map<array<int,26>,vector<string>> string_map;

        for(string word : strs)
        {
            array<int,26> alpha_count = {0};

            for(char c : word)
                alpha_count[c - 'a']++;

            if(!string_map.count(alpha_count))
                string_map.insert({alpha_count,{word}});

            else
                string_map[alpha_count].push_back(word);

        }

        vector<vector<string>> groups;

        for(auto arr : string_map)
        {
            groups.push_back(arr.second);
        } 

        return groups;
        
    }
};
