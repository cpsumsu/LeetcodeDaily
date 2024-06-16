#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>
using namespace std;


class Solution_a {
public:
    int minimumDeletions(string word, int k) {
        vector<int> cnt(26, 0);
        for (auto ch : word)
            cnt[ch - 'a']++;
        sort(cnt.begin(), cnt.end());
        int ans = 0;
        for (int i = 0; i < 26; ++i)
        {
            int res = 0;
            for (int j = i; j < 26; ++j)
            {
                res += min(cnt[j], cnt[i] + k);
            }
            ans = max(ans, res);
        }
        return word.size() - ans;
    }
};
int main()
{
   return 0;
}