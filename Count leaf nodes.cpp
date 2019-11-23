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


int numLeafNodes(TreeNode<int>* root) 
{

  int count=0;
  int a=root->children.size();
  
  if(a==0)
    return 1;
  
  if(root==NULL)
   return 0;
  
  for(int i=0;i < root->children.size();i++)
  {
     TreeNode<int> *temp=root->children[i];
     int x=numLeafNodes(temp);
     count+=x;  
  }
  
  
  return count;
}

