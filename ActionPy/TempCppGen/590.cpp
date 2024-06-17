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

class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/



class Solution_a {
public:
    vector<int> postorder(Node* root) {
        if (!root) return {};
        vector<int> ans;
        stack<Node*> st;
        st.push(root);
        while(!st.empty())
        {
            int n = st.size();
            auto cur = st.top();
            st.pop();
            ans.push_back(cur->val);
            for (int i = 0; i < cur->children.size(); ++i)
                st.push(cur->children[i]);
        }
        reverse(ans.rbegin(), ans.rend());
        
        return ans;
    }
};
int main()
{
   return 0;
}