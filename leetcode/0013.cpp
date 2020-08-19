class Solution
{

public:

    int romanToInt(string s)
    {
        int result = 0;
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == 'I') {
                result++;
            } else if (s[i] == 'V') {
                if (i - 1 >= 0 && s[i - 1] == 'I') {
                    result += 4;
                    i--;
                } else {
                    result += 5;
                }
            } else if (s[i] == 'X') {
                if (i - 1 >= 0 && s[i - 1] == 'I') {
                    result += 9;
                    i--;
                } else {
                    result += 10;
                }
            } else if (s[i] == 'L') {
                if (i - 1 >= 0 && s[i - 1] == 'X') {
                    result += 40;
                    i--;
                } else {
                    result += 50;
                }
            } else if (s[i] == 'C') {
                if (i - 1 >= 0 && s[i - 1] == 'X') {
                    result += 90;
                    i--;
                } else {
                    result += 100;
                }
            } else if (s[i] == 'D') {
                if (i - 1 >= 0 && s[i - 1] == 'C') {
                    result += 400;
                    i--;
                } else {
                    result += 500;
                }
            } else if (s[i] == 'M') {
                if (i - 1 >= 0 && s[i - 1] == 'C') {
                    result += 900;
                    i--;
                } else {
                    result += 1000;
                }
            }
        }
        return result;
    }

};
