class Solution
{

public:

    int removeDuplicates(vector<int> &nums)
    {
        int length = nums.size();
        for (int i = 1; i < length; i++) {
            if (nums[i - 1] == nums[i]) {
                nums.erase(nums.begin() + i);
                i--;
                length--;
            }
        }
        return length;
    }

};
