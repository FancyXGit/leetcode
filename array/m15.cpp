#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int length = nums.size();
        vector<vector<int>> res;
        for (int i = 0; i < length; i++)
        {
            if (i != 0 && nums[i - 1] == nums[i])
            {
                continue;
            }
            int j = i + 1;
            int k = length - 1;
            while (j < k)
            {
                if ((j != i + 1 && nums[j] == nums[j - 1]))
                {
                    j++;
                    continue;
                }
                if ((k != length - 1 && nums[k] == nums[k + 1]))
                {
                    k--;
                    continue;
                }
                int sum = nums[i] + nums[j] + nums[k];
                if (sum > 0)
                {
                    k--;
                }
                else if (sum < 0)
                {
                    j++;
                }
                else
                {
                    vector<int> res_elem = {nums[i], nums[j], nums[k]};
                    res.push_back(res_elem);
                    j++;
                }
            }
        }
        return res;
    }
};