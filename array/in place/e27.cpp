#include <vector>
using namespace std;

class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int length = nums.size();
        int k = 0;
        for (int i = 0; i < length; i++)
        {
            if (nums[i] == val)
            {
                continue;
            }
            else
            {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};