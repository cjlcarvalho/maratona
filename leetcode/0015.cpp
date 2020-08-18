class Solution
{

public:

    vector<vector<int>> threeSum(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        set< vector<int> > setOutput;
        for (int i = 0; i < nums.size(); i++) {
            map<int, int> m;
            for (int j = i + 1; j < nums.size(); j++) {
                if (m.count(-nums[i] - nums[j])) {
                    vector<int> v({nums[i], nums[m[-nums[i] - nums[j]]], nums[j]});
                    setOutput.insert(v);
                } else {
                    m[nums[j]] = j;
                }
            }
        }
        vector<vector<int>> output;
        output.assign(setOutput.begin(), setOutput.end());
        return output;
    }

};
