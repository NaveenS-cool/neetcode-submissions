class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.length() != t.length())
            return false;

        map<char,int> table1;
        map<char,int> table2;

        for(char c : s)
        {
            if(!table1.count(c))
                table1.insert({c,1});
            else
                table1[c] ++;
        }

        for(char c : t)
        {
            if(!table2.count(c))
                table2.insert({c,1});
            else
                table2[c] ++;
        }

        for(char c : s)
        {
            if(table1[c]!=table2[c])
                return false;
        }

        return true;
    }
};
