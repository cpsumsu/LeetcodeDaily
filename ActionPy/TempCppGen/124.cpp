#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>
using namespace std;
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */


class Solution_a {
public:
    int ans = INT_MIN;
    int dfs(TreeNode* root)
    {
        if (root == nullptr)
            return 0;
        int l = dfs(root->left);
        int r = dfs(root->right);
        ans = max(ans, l + r + root->val);
        return max(0, max(l, r) + root->val);
    }
    int maxPathSum(TreeNode* root) {
        dfs(root);
        return ans;
    }
};
int main()
{
   return 0;
}