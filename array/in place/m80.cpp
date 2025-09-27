#include <vector>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        bool is_meet_twice = false;
        int count = 1;
        int length = nums.size();
        for (int i = 1; i < length; i++)
        {
            if (nums[i] == nums[i - 1])
            {
                if (!is_meet_twice)
                {
                    nums[count] = nums[i];
                    count++;
                    is_meet_twice = true;
                }
                else
                {
                    continue;
                }
            }
            else
            {
                if (is_meet_twice)
                {
                    is_meet_twice = false;
                }
                nums[count] = nums[i];
                count++;
            }
        }
        return count;
    }
};