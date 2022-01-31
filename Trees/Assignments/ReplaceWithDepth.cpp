/************************************************************

    Following is the structure for the TreeNode class

    template <typename T>
    class TreeNode {
     public:
        T data;
        vector<TreeNode<T>*> children;

        TreeNode(T data) {
            this->data = data;
        }

        ~TreeNode() {
            for (int i = 0; i < children.size(); i++) {
                delete children[i];
            }
        }
    };

************************************************************/
void good(TreeNode<int>* root,int depth){
    root->data=depth;
    for(int i=0;i<root->children.size();i++){
        good(root->children[i],depth+1);
    }
}

void replaceWithDepthValue(TreeNode<int>* root) {
    // Write your code here
    good(root,0);
    
}