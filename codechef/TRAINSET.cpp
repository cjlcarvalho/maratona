#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, result;
    string word;
    bool is_spam;
    map<string, pair<int, int>> words;
    
    while (cin >> t) {
        while (t--) {
            cin >> n;

            while (n--) {
                cin >> word >> is_spam;
                
                if (!words.count(word))
                    words[word] = {0, 0};
                
                if (is_spam)
                    words[word].first++;
                else
                    words[word].second++;
            }
            
            result = 0;
            for (auto w : words)
                result += max(w.second.first, w.second.second);

            cout << result << endl;
            words.clear();
        }
    }
    
    return 0;
}
