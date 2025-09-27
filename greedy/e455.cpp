#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int findContentChildren(vector<int> &g, vector<int> &s)
    {
        int count = 0;
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int g_size = g.size();
        int s_size = s.size();
        int i = 0;
        int j = 0;
        while (i < g_size && j < s_size)
        {
            if (g[i] <= s[j])
            {
                i++;
                count++;
            }
            j++;
        }
        return count;
    }
};