#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>
using namespace std;


class Solution_a {
public:
    int hammingWeight(uint32_t n) {
        int cnt = 0;

        while (n) {
            cnt++;
            n = (n & (n - 1));
        }

        return cnt;
    }
};

class Solution_b {
public:
    int hammingWeight(uint32_t n) {
        return __builtin_popcount(n);
    }
};