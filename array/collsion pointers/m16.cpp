#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int threeSumClosest(vector<int> &nums, int target)
    {
        sort(nums.begin(), nums.end());
        int length = nums.size();
        int sum = 0;
        int best_match = nums[0] + nums[1] + nums[length - 1];
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
                sum = nums[i] + nums[j] + nums[k];
                if (abs(sum - target) < abs(best_match - target))
                {
                    best_match = sum;
                }
                if (sum > target)
                {
                    k--;
                }
                else if (sum < target)
                {
                    j++;
                }
                else
                {
                    return target;
                }
            }
        }
        return best_match;
    }
};
// 第一次自己独立想出算法！！！