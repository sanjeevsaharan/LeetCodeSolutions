class Solution {
public:
    /*
     * @param strs: a list of strings
     * @return: encodes a list of strings to a single string.
     */
    string GetParsedString(string &s)
    {
       for(int i = 0;i<s.size(); i++)
       {
           if(s[i] == ':')
           {
               s.insert(i, 1, ':');
           }
       }
       return s;
    }

    string encode(vector<string> &strs) {
        // write your code here
        string encode;
        string delimeter = ":;";
        for(string &s: strs)
        {
              encode = encode + GetParsedString(s);
              encode = encode+delimeter; 
        }
        return encode;
    }

    /*
     * @param str: A string
     * @return: dcodes a single string to a list of strings
     */
    vector<string> decode(string &str) {
        // write your code here
    size_t start;
    size_t end = 0;
    string delim = ":;";
    vector<string>out;
    while ((start = str.find_first_not_of(delim, end)) != std::string::npos)
    {
        end = str.find(delim, start);
        out.push_back(str.substr(start, end - start));
    }
    return out;

    }
};