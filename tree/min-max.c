//bir agactaki minimum ve maksimum degerleri bulmak
struct node{
int data;
struct node *left;
struct node *right;
}
typedef struct node node;

int min(node *root){
  while(root->left!=NULL)
    root=root->left;
  return root->data;
}
int max(node *root)
{
  while(root->right!=NULL)
    root=root->right;
   return root->data;
}


