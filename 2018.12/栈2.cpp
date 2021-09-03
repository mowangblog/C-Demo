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
	int val;
	STACK S;
	init_stack(&S);
	push_stack(&S,1);
	push_stack(&S,2);
	push_stack(&S,3);
	push_stack(&S,10);
	if(pop_stack(&S,&val))
	{
		printf("出栈成功，val=%d\n",val);
	}
	else
	{
		printf("出栈失败"); 
	}
	clear_stack(&S);
	traverse_stack(&S);
	
	return 0;
}

void init_stack(PSTACK pS)
{
	pS->pTop=(PNODE)malloc(sizeof(NODE));
	if(pS->pTop==NULL)
	{
		printf("分配失败");
		exit(-1); 
	}
	else
	{
		pS->pBottom=pS->pTop;
		pS->pTop->pNext=NULL;
	}
}

void push_stack(PSTACK pS,int val)
{
	PNODE pNew=(PNODE)malloc(sizeof(NODE));
	
	pNew->data=val;
	pNew->pNext=pS->pTop;
	pS->pTop=pNew;
	
	return;
}

void traverse_stack(PSTACK pS)
{
	PNODE p=pS->pTop;
	while(p!=pS->pBottom)
	{
		printf("%d\n",p->data);
		p=p->pNext;
	}
	return;
	
}

bool pop_stack(PSTACK pS,int * val)
{
	if(is_empty(pS))
	{
		return false;
	}
	else
	{
		PNODE p=pS->pTop;
		*val=p->data;
		pS->pTop=p->pNext;
		free(p);
		p=NULL;
		
		return true;
	}
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

void clear_stack(PSTACK pS)
{
	if(is_empty(pS))
	{
		return;
	}
	else
	{
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
	return;
}
