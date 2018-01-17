//bir agacin kokunden yapraklara olan yolu yazdiran kod
struct node{
	int data;
	struct  node *left;
	struct node *right;
}
typedef struct node node;

int path[100];

void printPathleaf(node *root, int path[], int Len)
{
	if (root==NULL)
		return;
	path[Len]=root->data;
	Len++;

	if (root->left==NULL && root->right==NULL)
	{
		printarray(path,Len);

	}

	printPathleaf(root->left,path,Len);
	printPathleaf(root->right,path,Len);

}

void printarray(int path[],int Len)
{
	int i;
	for (i = 0; i <Len ; i++)
	{
		printf("%d ",path[i]);
	}
	printf("\n");
}
