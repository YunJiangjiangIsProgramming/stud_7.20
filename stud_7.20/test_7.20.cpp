#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>

using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
    
};
class Solution1 {
public:
    TreeNode* mirrorTree(TreeNode* root) {
        // 如果根节点为空，直接返回空
        if (root == nullptr) return nullptr;

        // 保存左子节点
        TreeNode* tmp = root->left;

        // 递归地镜像右子树，并更新左子节点
        root->left = mirrorTree(root->right);

        // 递归地镜像原来的左子树，并更新右子节点
        root->right = mirrorTree(tmp);

        // 返回镜像后的根节点
        return root;
    }
};
int main()
{

	return 0;
}