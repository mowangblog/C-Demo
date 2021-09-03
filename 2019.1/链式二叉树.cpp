# include <stdio.h>
# include <malloc.h> 

typedef struct BTNode
{
	char data;
	struct BTNode * pLchild;
	struct BTNode * pRchild;
}BTNODE,*PBTNODE;


PBTNODE create_BTree();
void PreTraverse(PBTNODE PT);
void InTraverse(PBTNODE PT);
void PostTraverse(PBTNODE PT);

int main()
{
	PBTNODE PT=create_BTree();
	
	PreTraverse(PT);
	InTraverse(PT);
	PostTraverse(PT);
	
	return 0;
} 
 
void PreTraverse(PBTNODE PT)
{
	if(NULL!=PT)
	{
		printf("%c ",PT->data);
		if(NULL!=PT->pLchild)
		{
			PreTraverse(PT->pLchild);
		}
		if(NULL!=PT->pRchild)
		{
			PreTraverse(PT->pRchild);
		}
	}
	printf("\n");
}
 
PBTNODE create_BTree()
{
	PBTNODE pA=(PBTNODE)malloc(sizeof(BTNODE));
	PBTNODE pB=(PBTNODE)malloc(sizeof(BTNODE));
	PBTNODE pC=(PBTNODE)malloc(sizeof(BTNODE));
	PBTNODE pD=(PBTNODE)malloc(sizeof(BTNODE));
	PBTNODE pE=(PBTNODE)malloc(sizeof(BTNODE));
	
	pA->data='A';
	pB->data='B';
	pC->data='C';
	pD->data='D';	
	pE->data='E';
	
	pA->pLchild=pB;
	pA->pRchild=pC;
	pB->pLchild=pB->pRchild=NULL;
	pC->pLchild=pD;
	pC->pRchild=NULL;
	pD->pLchild=NULL;
	pD->pRchild=pE;
	pE->pLchild=pE->pRchild=NULL; 
	
	return pA;
}

void InTraverse(PBTNODE PT)
{
	if(NULL!=PT)
	{
		if(NULL!=PT->pLchild)
		{
			PreTraverse(PT->pLchild);
		}
		printf("%c ",PT->data);
		if(NULL!=PT->pRchild)
		{
			PreTraverse(PT->pRchild);
		}
	}
}

void PostTraverse(PBTNODE PT)
{
	if(NULL!=PT)
	{
		if(NULL!=PT->pLchild)
		{
			PreTraverse(PT->pLchild);
		}
		if(NULL!=PT->pRchild)
		{
			PreTraverse(PT->pRchild);
		}
		printf("%c ",PT->data);
	}
}
