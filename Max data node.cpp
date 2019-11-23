// Following is the given Tree node structure.
/**************
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
***************/

TreeNode<int>* maxDataNode(TreeNode<int>* root)
{ 
   TreeNode<int> *max=root;
   for (int i=0;i < root->children.size();i++)
  {
     TreeNode<int> *temp=root->children[i];
     TreeNode<int> *x=maxDataNode(temp);
     
     if(max->data<x->data)
   {
    max=x;
   }
     
 }
  return max;
}






