// Following is the given TreeNode structure.
/**************
template <typename T>
class TreeNode {
public:
    T data;
    vector<TreeNode<T>*> children;
    
    TreeNode(T data)
    {
        this->data = data;
    }
    
    ~TreeNode()
    {
        for (int i = 0; i < children.size(); i++)
        {
            delete children[i];
        }
    }
    
};
***************/
int countOfNodes(TreeNode<int>* root)
{   
  int count=0;
  for (int i=0;i < root->children.size();i++)
  {
    TreeNode<int> *temp=root->children[i];
    int x=countOfNodes(temp);
    count+=x;
  }
  return count+1;
}
