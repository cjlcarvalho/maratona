class Solution
{

public:

    long findGreatestBase(int x)
    {
        long base = 1;
        x /= 10;
        while (x > 0) {
            x /= 10;
            base *= 10;
        }
        return base;
    }

    bool isPalindrome(int x)
    {
        if (x < 0) {
            return false;
        }
        long greatestBase = findGreatestBase(x);
        long lowestBase = 1;
        long low;
        long high;
        while (greatestBase > lowestBase) {
            low = (x % (lowestBase * 10));
            if (lowestBase >= 10) {
                low = (low - (x % lowestBase)) / lowestBase;
            }
            high = (x % (greatestBase * 10)) / greatestBase;
            if (low != high) {
                return false;
            }
            lowestBase *= 10;
            greatestBase /= 10;
        }
        return true;
    }

};
