#include <vector>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int k = 0;
        int length = nums.size();
        for (int i = 0; i < length - 1; i++)
        {
            if (nums[i] == nums[i + 1])
            {
                continue;
            }
            else
            {
                nums[k] = nums[i];
                k++;
            }
        }
        nums[k] = nums[length - 1];
        k++;
        return k;
    }
};