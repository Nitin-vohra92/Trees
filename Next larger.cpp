// Following is the given Tree node structure
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

TreeNode<int>* nextLargerElement(TreeNode<int> *root, int n)
{   
 TreeNode<int> *ans=NULL;
 TreeNode<int>* temp1;
  
  if(root->data>n)
  {
    ans=root;
  }
  else
  {
    ans=NULL;
  }
 
 for (int i=0;i < root->children.size();i++)
  {
    TreeNode<int> *temp=root->children[i];
    temp1=nextLargerElement(temp,n);
    if(ans==NULL)
    {
      ans=temp1;
    }
    else if(temp1!=NULL&&temp1->data<ans->data)
    {
      ans=temp1;
    }
  }
  return ans;
}


