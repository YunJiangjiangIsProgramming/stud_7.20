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
        // ������ڵ�Ϊ�գ�ֱ�ӷ��ؿ�
        if (root == nullptr) return nullptr;

        // �������ӽڵ�
        TreeNode* tmp = root->left;

        // �ݹ�ؾ��������������������ӽڵ�
        root->left = mirrorTree(root->right);

        // �ݹ�ؾ���ԭ���������������������ӽڵ�
        root->right = mirrorTree(tmp);

        // ���ؾ����ĸ��ڵ�
        return root;
    }
};
int main()
{

	return 0;
}