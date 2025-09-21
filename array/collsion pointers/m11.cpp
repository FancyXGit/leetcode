#include <vector>
using namespace std;

class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        auto left = height.begin();
        auto right = height.end() - 1;
        int max_amount = 0;
        int amount = 0;
        while (left != right)
        {
            if (*left > *right)
            {
                amount = (size_t)(right - left) * (*right);
                right--;
            }
            else
            {
                amount = (size_t)(right - left) * (*left);
                left++;
            }

            if (amount > max_amount)
            {
                max_amount = amount;
            }
        }
        return max_amount;
    }
};