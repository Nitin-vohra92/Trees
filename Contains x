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
bool b;

bool containsX(TreeNode<int>* root, int x)
{
  
  if(root->data==x)
    return true;
 
  for (int i=0;i < root->children.size();i++)
  {
      TreeNode<int> *temp=root->children[i];
      b=containsX(temp,x); 
     
      if(b==1)
      return true;
  }
  
  return false;
 
}
