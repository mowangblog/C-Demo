# include <stdio.h>
# include <malloc.h>
# include <stdlib.h>

typedef struct Node
{
	int data;
	struct Node * pNext;
}NODE,*PNODE;

typedef struct Stack
{
	PNODE pTop;
	PNODE pBottom; 
}STACK,*PSTACK;

void init_stack(PSTACK pS);
void traverse_stack(PSTACK pS);
void push_stack(PSTACK pS,int val);
bool is_empty(PSTACK pS);
bool pop_stack(PSTACK pS,int * val);
void clear_stack(PSTACK pS);


int main()
{
	STACK pS;
	int val;
	init_stack(&pS);
	push_stack(&pS,10);
	push_stack(&pS,20);
	push_stack(&pS,60);
	if(pop_stack(&pS,&val))
	{
		printf("val=%d\n",val);
	}
	else
	{
		printf("³öÕ»Ê§°Ü£¡"); 
	}
	clear_stack(&pS);
	traverse_stack(&pS);
	
	
	return 0;
} 

void init_stack(PSTACK pS)
{
	pS->pTop=(PNODE)malloc(sizeof(NODE));
	if(pS->pTop==NULL)
	{
		exit(-1); 
	}
	else
	{
		pS->pBottom=pS->pTop;
		pS->pTop->pNext=NULL; 
	}
}

void traverse_stack(PSTACK pS)
{
	PNODE p=pS->pTop;
	while(p!=pS->pBottom)
	{
		printf("%d\n",p->data);
		p=p->pNext;
	} 
} 

void push_stack(PSTACK pS,int val)
{
	PNODE pNew=(PNODE)malloc(sizeof(NODE));
	
	pNew->data=val;
	pNew->pNext=pS->pTop;
	pS->pTop=pNew;
} 
 
bool is_empty(PSTACK pS)
{
	if(pS->pBottom==pS->pTop)
	{
		return true;
	}
	else
	{
		return false;
	}
} 

bool pop_stack(PSTACK pS,int * val)
{
	if(is_empty(pS))
	{
		return false;
	}
	* val=pS->pTop->data;
	
	PNODE p=pS->pTop;
	pS->pTop=pS->pTop->pNext;
	free(p);
	p=NULL;
	
	return true;
	
}

void clear_stack(PSTACK pS)
{
	if(is_empty(pS))
	{
		return;
	}
	PNODE p=pS->pTop;
	PNODE q=NULL;
	while(p!=pS->pBottom)
	{
		q=p->pNext;
		free(p);
		p=q;
	}
	pS->pTop=pS->pBottom;
}
