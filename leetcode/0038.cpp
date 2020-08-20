class Solution
{

public:

    string countAndSay(int n)
    {
        string result = "1";
        n--;
        while (n--) {
            string temp;
            char curr = '\0';
            int count = 0;
            for (char c : result) {
                if (!curr) {
                    curr = c;
                    count = 1;
                } else if (c == curr) {
                    count++;
                } else {
                    temp.push_back(char(count + 48));
                    temp.push_back(curr);
                    count = 1;
                    curr = c;
                }
            }
            if (curr) {
                temp.push_back(char(count + 48));
                temp.push_back(curr);
            }
            result = temp;
        }
        return result;
    }

};
