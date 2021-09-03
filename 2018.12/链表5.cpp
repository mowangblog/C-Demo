# include <stdio.h>
# include <malloc.h>
# include <stdlib.h>

typedef struct Node
{
	int data;
	struct Node * pNext;
}NODE,*PNODE;

PNODE create_list();
void traverse_list(PNODE pHead);
int length_list(PNODE pHead);
bool is_empty(PNODE pHead);
bool insert_list(PNODE pHead,int pos,int val);
bool delete_list(PNODE pHead,int pos,int * val);
void sort_list(PNODE pHead);

int main()
{
	PNODE pHead=NULL;
	int val;
	pHead=create_list();
	insert_list(pHead,4,99);
	if(delete_list(pHead,5,&val))
	{
		printf("删除成功，val=%d\n",val);
	}
	else
	{
		printf("删除失败！");
	}
	sort_list(pHead);
	traverse_list(pHead);
	
	return 0;
} 

PNODE create_list()
{
	int len=5,val;
	PNODE pHead=(PNODE)malloc(sizeof(NODE));
	if(pHead==NULL)
	{
		printf("分配失败！");
		exit(-1); 
	}
	PNODE pTail=pHead;
	pTail->pNext=NULL;
	for(int i=0;i<len;++i)
	{
		PNODE pNew=(PNODE)malloc(sizeof(NODE));
		if(pNew==NULL)
		{
			printf("分配失败！");
			exit(-1);
		}
		printf("请输入第%d个节点的值：",i+1); 
		scanf("%d",&val);
		pNew->data=val;
		pTail->pNext=pNew;
		pNew->pNext=NULL;
		pTail=pNew; 
	}
	return pHead;
}

void traverse_list(PNODE pHead)
{
	PNODE p=pHead->pNext;
	while(p!=NULL)
	{
		printf("%5d",p->data);
		p=p->pNext;
	} 
	return;
}

bool is_empty(PNODE pHead)
{
	if(pHead->pNext==NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int length_list(PNODE pHead)
{
	PNODE p=pHead->pNext;
	int len=0;
	while(p!=NULL)
	{
		++len;
		p=p->pNext;
	}
	return len;
}

bool insert_list(PNODE pHead,int pos,int val)
{
	PNODE p=pHead;
	int i=0;
	while(p!=NULL&&i<pos-1)
	{
		p=p->pNext;
		i++;
	}
	if(i>pos-1||p==NULL)
	{
		return false;
	}
	PNODE pNew=(PNODE)malloc(sizeof(NODE));
	pNew->data=val;
	PNODE q=p->pNext;
	p->pNext=pNew;
	pNew->pNext=q; 
	
	return true;
}

bool delete_list(PNODE pHead,int pos,int * val)
{
	PNODE p=pHead;
	int i=0;
	while(p->pNext!=NULL&&i<pos-1)
	{
		p=p->pNext;
		++i;
	}
	if(i>pos-1||p->pNext==NULL)
	{
		return false;
	}
	* val=p->pNext->data;
	PNODE q=p->pNext;
	p->pNext=p->pNext->pNext;
	free(q);
	q=NULL;
	
	return true;
} 

void sort_list(PNODE pHead)
{
	PNODE p,q;
	int t;
	for(p=pHead->pNext;p!=NULL;p=p->pNext)
	{
		for(q=p->pNext;q!=NULL;q=q->pNext)
		{
			if(p->data>q->data)
			{
				t=p->data;
				p->data=q->data;
				q->data=t;
			}
		}
	}
}
