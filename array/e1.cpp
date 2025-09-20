#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        for (auto it1 = nums.begin(); it1 != nums.end(); it1++)
        {
            for (auto it2 = it1 + 1; it2 != nums.end(); it2++)
            {
                if (*it1 + *it2 == target)
                {
                    int index1 = (int)(it1 - nums.begin());
                    int index2 = (int)(it2 - nums.begin());
                    return {index1, index2};
                }
            }
        }
        return {};
    }
};