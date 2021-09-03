# include <stdio.h>
# include <malloc.h>
# include <stdlib.h>

typedef struct Node
{
	int data;
	struct Node * pNext;
}NODE,*PNODE;

PNODE create_list(void);
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
	
	//insert_list(pHead,2,2019);
	if(delete_list(pHead,3,&val))
	{
		printf("val=%d\n",val);
	}
	else
	{
		printf("·ÖÅäÊ§°Ü£¡");
	}
	sort_list(pHead);
	traverse_list(pHead);
	
	
	return 0;
} 

PNODE create_list(void)
{
	PNODE pHead=(PNODE)malloc(sizeof(NODE));
	if(pHead==NULL)
	{
		printf("NO");
		exit(-1);
	}
	int val,len=5;
	PNODE pTail=pHead;
	pTail->pNext=NULL;
	for(int i=0;i<len;++i)
	{
		PNODE pNew=(PNODE)malloc(sizeof(NODE));
		printf("ÇëÊäÈë£º"); 
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
		printf("%d\n",p->data);
		p=p->pNext;
	}
}

int length_list(PNODE pHead)
{
	PNODE p=pHead->pNext;
	int len;
	while(p!=NULL)
	{
		++len;
		p=p->pNext;
	}
	
	return len;
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

bool insert_list(PNODE pHead,int pos,int val)
{
	PNODE p=pHead;
	int i=0;
	while(NULL!=p->pNext&&i<pos-1)
	{
		++i;
		p=p->pNext;
	} 
	if(p->pNext==NULL||i>pos-1)
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
		++i;
		p=p->pNext;
	}
	if(p->pNext==NULL||i>pos-1)
	{
		return false;
	}
	* val=p->pNext->data;
	PNODE q=p->pNext;
	p->pNext=p->pNext->pNext;
	free(q);
	q==NULL;
	
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
