class Solution
{

public:

    long findGreaterBase(long x)
    {
        long base = 1;
        x /= 10;
        while (x > 0) {
            x /= 10;
            base *= 10;
        }
        return base;
    }

    long reverse(int x)
    {
        long lX = long(x);
        bool isNegative = lX < 0;
        if (isNegative) {
            lX = -lX;
        }
        if (lX < INT_MIN || lX > INT_MAX) {
            return 0;
        }
        long base = findGreaterBase(lX);
        long reversedX = 0;
        while (lX > 0) {
            long comp = (lX % 10) * base;
            reversedX += comp;
            if (reversedX > INT_MAX) {
                return 0;
            }
            base /= 10;
            lX /= 10;
        }
        return (isNegative ? -reversedX : reversedX);
    }

};
