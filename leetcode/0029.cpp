class Solution
{

public:

    long divide(int dividend, int divisor)
    {
        long lDividend = long(dividend);
        long lDivisor = long(divisor);
        long count = 0;
        bool isNegative = false;
        if ((lDividend < 0 && lDivisor >= 0) || (lDividend >= 0 && lDivisor < 0)) {
            isNegative = true;
        } else {
            isNegative = false;
        }
        if (lDividend < 0) {
            lDividend = -lDividend;
        }
        if (lDivisor < 0) {
            lDivisor = -lDivisor;
        }
        while (lDividend >= lDivisor) {
            lDividend -= lDivisor;
            count++;
        }
        if (count > INT_MAX) {
            count = INT_MAX;
        }
        if (isNegative) {
            count = -count;
        }
        return count;
    }

};
