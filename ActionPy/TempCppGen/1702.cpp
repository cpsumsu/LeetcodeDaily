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
    string maximumBinaryString(string binary) {
        int idx = -1;
        for (int i = 0; i < binary.size(); ++i)
        {
            if (binary[i] == '0')
                if (idx == -1)
                {
                    idx = i;
                }
                else if (idx == i - 1)
                {
                    binary[idx++] = '1';
                }
                else
                {
                    binary[i] = '1';
                    binary[idx] = '1';
                    binary[++idx] = '0';
                }
        }
        return binary;
    }
};
int main()
{
   return 0;
}