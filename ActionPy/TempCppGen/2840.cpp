#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <functional>
#include <limits.h>
#include <unordered_set>
#include <map>
#include <bitset>
#include <queue>
#include <stack>
#include <set>
#include <string.h>
#include <numeric>
#include <cassert>
#include <cmath>
#include <cstdint>
using namespace std;


class Solution_a {
public:
    bool checkStrings(string s1, string s2) {
        vector<int64_t> cnt(26, 0), alpha(26, 0);

        for (int i = 0; i < s1.size(); i++) {
            cnt[s1[i] - 'a']++;
            cnt[s2[i] - 'a']--;
            alpha[s1[i] - 'a'] += i;
            alpha[s2[i] - 'a'] += i;
        }      

        for (int i = 0; i < 26; i++) 
            if (cnt[i] || alpha[i] % 2)     // if cnt[i] != 0, then the alphabet between two strings are not the same
                return false;               // `alpha[i] % 2` checks whether the summation of index is even or not
        return true;
    }
};
int main()
{
   return 0;
}