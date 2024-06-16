#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>
using namespace std;


class Solution_a {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int p = x, s = 0;
        while(p > 0)
        {
            int i = p % 10;
            s += i;
            p /= 10;
        }
        return x % s == 0 ? s : -1 ;
    }
};