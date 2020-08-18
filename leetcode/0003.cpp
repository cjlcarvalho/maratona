class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int longestLength = 0;
        for (int beginIndex = 0; beginIndex < s.size(); beginIndex++) {
            string substring({s[beginIndex]});
            int endIndex = beginIndex + 1;
            while (endIndex < s.size() && substring.find(s[endIndex]) == -1) {
                substring.push_back(s[endIndex++]);
            }
            if (substring.size() > longestLength) {
                longestLength = substring.size();
            }
        }
        return longestLength;
    }

};
