class Solution
{

public:

    int myAtoi(string str)
    {
        int begin = 0;
        while (str[begin] == ' ' && begin < str.size()) {
            begin++;
        }
        str = str.substr(begin, str.size() - begin + 1);
        if ((str[0] != '-' && str[0] != '+') && !isdigit(str[0])) {
            return 0;
        }
        bool isNegative = str[0] == '-';
        begin = (isNegative || str[0] == '+' ? 1 : 0);
        while (str[begin] == '0' && begin < str.size()) {
            begin++;
        }
        int end = begin;
        while (isdigit(str[end]) && end < str.size()) {
            end++;
        }
        end--;
        long outputNumber = 0;
        long base = 1;
        for (int i = end; i >= begin; i--) {
            if (base > INT_MAX) {
                return (isNegative ? INT_MIN : INT_MAX);
            }
            outputNumber += base * (str[i] - 48);
            base *= 10;
        }
        if (isNegative) {
            outputNumber = -outputNumber;
        }
        if (outputNumber > INT_MAX) {
            return INT_MAX;
        } else if (outputNumber < INT_MIN) {
            return INT_MIN;
        }
        return outputNumber;
    }

};
