//Bir agactaki yaprak sayisini bulmak
struct node{
  int data;
  struct node *left;
  struct node *right;
}
typedef struct node node;

int leaf =0;

void findLeaf(node *root)
{
  if(root!=NULL)
  {
  if(root->left==NULL && root->right==NULL)
    leaf++;
  findLeaf(root->left);
  findLeaf(root->right);
  
  }
}

//Baska bir cozum
/*
int findLeaf(node *root)
{
  if(root==NULL)
    return 0;
  if(root->left==NULL && root->right==NULL)
    return 1;
  return findLeaf(root->left)+findLeaf(root->right);
}

*/
