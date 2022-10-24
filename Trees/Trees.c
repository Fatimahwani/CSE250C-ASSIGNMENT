#include <stdio.h>
#include <stdlib.h>
struct Node{
	int data;
	struct Node*left;
	struct Node*right;
};
struct Node*root=NULL,*temp=NULL;
int main()
{
	int ch;
	while(1)
	{
		printf("1 for create 3 for exit");
		scanf("%d",&ch);
		if(ch==1)
		 create();
		if(ch==3)
		break;
	}
}
int create(){
	int n,i;struct Node *temp;
	printf("Enter the number of Nodes you want to create ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		int element;
		temp=(struct Node*)malloc(sizeof(struct Node));
		printf("Enter element");
		scanf("%d",&temp->data);
		temp->left=NULL;temp->right=NULL;
		if(root==NULL)
		{root=temp;
		}
		else{
		struct Node*trav;
		trav=root;
		while(1)
		{
			if(temp->data<trav->data)
			{
				if(trav->left==NULL)
				{
				trav->left=temp;
				break;
			    }
				else{
				
				trav=trav->left;
				}
			}
			if (temp->data>trav->data)
			{
				if(trav->right==NULL)
					{
					trav->right=temp;
					break;
					}
				else{
				
					trav=trav->right;
					}
			}
			else 
			printf("Duplicate keys not allowed");
		}
		}
	}
}


