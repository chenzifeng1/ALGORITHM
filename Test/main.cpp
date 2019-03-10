#include <iostream>
#include <vector>
#include <algorithm>
#include <memory.h>

using namespace std;
//Definition for a binary tree node.
typedef struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {};

    TreeNode()
  {
    memset(this,0,sizeof(TreeNode));
    //或者是下面的格式
    //memset(&nNum,0,sizeof(Stu));
  }

}TN;

class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        if(root==NULL){
        vector<int> err(0);
        return err;
        }

        vector<TreeNode> stack1;
        vector<int> stack2;
        stack1.push_back(*root);
        while(stack1.size()!=0){
            TreeNode a=stack1.back();//从栈一中弹出
            stack1.pop_back();
            stack2.push_back(a.val);
            if(a.left!=NULL){
                stack1.push_back(*a.left);
            }
            if(a.right!=NULL){
                stack1.push_back(*a.right);
            }
        }
        vector<int> stack3;
        while(stack2.size()!=0){
            stack3.push_back(stack2.back());
            stack2.pop_back();
        }
        return stack3;



    }
};
void generateTree(TN *root){
    char c;
    cin>>c;
    if(c=='#'){
        root=NULL;
    }else {
        root = new TN();
        root->val=c-'0';
        generateTree(root->left);
        generateTree(root->right);
        cout<<"over"<<endl;

    }
}

int main(){
    TN *tree;
    generateTree(tree);
    Solution s =Solution();
    cout<<"begin:"<<endl;
    vector<int> str = s.postorderTraversal(tree);//这里有问题
    cout<<sizeof(str);
    for(vector<int>::iterator it =str.begin();it!=str.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}
