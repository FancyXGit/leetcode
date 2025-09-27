#include <vector>
using namespace std;

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int count = 0;
        int length = nums.size();
        for (int i = 0; i < length; i++)
        {
            if (nums[i] == 0)
            {
                continue;
            }
            else
            {
                nums[count] = nums[i];
                count++;
            }
        }
        for (int i = count; i < length; i++)
        {
            nums[i] = 0;
        }
    }
};