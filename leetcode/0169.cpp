class Solution
{

public:

    int majorityElement(vector<int> &nums)
    {
        map<int, int> occ;
        for (int num : nums) {
            if (!occ.count(num)) {
                occ[num] = 1;
            } else {
                occ[num]++;
            }
        }
        for (pair<int, int> items : occ) {
            if (items.second > nums.size() / 2) {
                return items.first;
            }
        }
        return nums[0];
    }

};
