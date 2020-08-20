class Solution
{

public:

    int bs(vector<int> &nums, int b, int e, int v, int max)
    {
        if (e < b) {
            return 0;
        } else if (b == max) {
            return max;
        }
        int m = b + (e - b) / 2;
        if (nums[m] == v) {
            return m;
        } else if (m - 1 >= 0 && nums[m - 1] < v && nums[m] > v) {
            return m;
        } else if (m + 1 == max && nums[m] < v) {
            return m + 1;
        } else if (nums[m] < v) {
            return bs(nums, m + 1, e, v, max);
        } else {
            return bs(nums, b, m - 1, v, max);
        }
    }

    int searchInsert(vector<int> &nums, int target)
    {
        return bs(nums, 0, nums.size() - 1, target, nums.size());
    }

};
