/**********************************************************

	Following is the Binary Tree Node class structure

	template <typename T>
	class BinaryTreeNode {
    	public: 
    	T data;
    	BinaryTreeNode<T> *left;
    	BinaryTreeNode<T> *right;

    	BinaryTreeNode(T data) {
        	this->data = data;
        	left = NULL;
        	right = NULL;
    	}
	};

***********************************************************/

int getLCA(BinaryTreeNode<int>* root , int val1 , int val2){
    // Write your code here
    if(root == NULL){
        return -1;
    }
    
    if(root -> data == val1 && root -> data == val2){
        return root -> data;
    }
    
    else if(root -> data > val1 && root -> data > val2){
        return getLCA(root -> left, val1, val2);
    }
    
    else if(root -> data < val1 && root -> data < val2){
        return getLCA(root -> right, val1, val2);
    }
    
    else{
        int left = getLCA(root -> left, val1, val2);
        int right = getLCA(root -> right, val1, val2);
        
        if(left == NULL && right == NULL){
            return -1;
        }
        else if(left == NULL && right != NULL){
            return right;
        }
        else if(left != NULL && right == NULL){
            return left;
        }
        else{
            return root -> data;
        }
    }
}