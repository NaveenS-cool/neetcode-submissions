class Solution {
public:

    string encode(vector<string>& strs) {

        string encoded_str = "";

        for(string s : strs)
        {
           encoded_str = encoded_str + to_string(s.length()) + "#" + s; 
        }

        return encoded_str;
    }

    vector<string> decode(string s) {

        string number="";
        vector<string> decoded_list;

        for(int i=0;i<s.length();)
        {
            if(s.at(i) != '#')
            {
                number = number + s.at(i);
                i++;
                continue;
            } 

            int num = stoi(number);
            decoded_list.push_back(s.substr(i+1,num));

            number = "";

            i = i+num+1;
        }

        return decoded_list;

    }
};
