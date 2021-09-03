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
bool is_empty(PNODE pHead); 
bool insert_list(PNODE pHead,int pos,int val);
bool delete_list(PNODE pHead,int  pos,int * val);
void sort_list(PNODE pHead);
int length_list(PNODE pHead);

int main()
{
	int val;
	PNODE pHead=NULL;
	pHead=create_list();
	sort_list(pHead); 
	insert_list(pHead,4,100);
	if(delete_list(pHead,2,&val))
	{
		printf("删除成功，val=%d\n",val);
	}
	else
	{
		printf("删除失败！");
	}
	traverse_list(pHead); 
	
	return 0;
}

PNODE create_list()
{
	int len,val;
	printf("请输入链表的长度：");
	scanf("%d",&len);
	PNODE pHead=(PNODE)malloc(sizeof(NODE));
	if(NULL==pHead)
	{
		printf("分配失败！");
		exit(-1);
	}
	PNODE pTail=pHead;
	pTail->pNext=NULL;
	for(int i=0;i<len;++i)
	{
		PNODE pNew=(PNODE)malloc(sizeof(NODE));
		if(NULL==pNew)
		{
			printf("分配失败！");
			exit(-1);
		}
		printf("输入第%d个节点的数据：",i+1);
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
		return false;
	}
	else
	{
		return true;
	}
} 

int length_list(PNODE pHead)
{
	int len=0;
	PNODE p=pHead->pNext;
	while(p!=NULL)
	{
		len++;
		p=p->pNext;
	}
	printf("长度为%d\n",len); 
	return len;
	
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
	return;
}

bool insert_list(PNODE pHead,int pos,int val)
{
	PNODE p=pHead;
	int i=0;
	while(p!=NULL&&i<pos-1)
	{
		p=p->pNext;
		++i;
	}
	if(NULL==p||i>pos-1)
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
