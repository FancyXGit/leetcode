#include <vector>
using namespace std;

class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int length = nums.size();
        int count0 = 0;
        int count2 = 0;
        for (int i = 0; i < length; i++)
        {
            if (nums[i] == 0)
            {
                nums[count0] = 0;
                count0++;
            }
            else if (nums[i] == 2)
            {
                count2++;
            }
            else
            {
                continue;
            }
        }
        for (int i = 0; i < count2; i++)
        {
            nums[length - i - 1] = 2;
        }
        for (int i = count0; i < length - count2; i++)
        {
            nums[i] = 1;
        }
    }
};