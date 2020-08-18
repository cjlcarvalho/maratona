class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        int totalSize = nums1.size() + nums2.size();
        int count = 0;
        int indexNums1 = 0;
        int indexNums2 = 0;
        vector<int> nums;
        while (count <= totalSize / 2) {
            if (indexNums1 < nums1.size() && indexNums2 < nums2.size()) {
                if (nums1[indexNums1] <= nums2[indexNums2]) {
                    nums.push_back(nums1[indexNums1]);
                    indexNums1++;
                } else {
                    nums.push_back(nums2[indexNums2]);
                    indexNums2++;
                }
            } else if (indexNums1 < nums1.size()) {
                nums.push_back(nums1[indexNums1]);
                indexNums1++;
            } else {
                nums.push_back(nums2[indexNums2]);
                indexNums2++;
            }
            count++;
        }
        if (totalSize % 2 == 0) {
            return double(nums[nums.size() - 1] + nums[nums.size() - 2]) / 2;
        }
        return nums[nums.size() - 1];
    }
};
