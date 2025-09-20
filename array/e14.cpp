#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string longest_prefix = strs[0];
        for (int i = 1; i < strs.size(); i++)
        {
            longest_prefix = findCommonPrefix(longest_prefix, strs[i]);
        }
        return longest_prefix;
    }

    string findCommonPrefix(const string &str1, const string &str2)
    {
        int size = min(str1.length(), str2.length());
        int index = 0;
        while (index < size && str1[index] == str2[index])
        {
            index++;
        }
        return str1.substr(0, index);
    }
};