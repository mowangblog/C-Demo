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
bool is_empty(PNODE pHead);
int length_list(PNODE pHead); 
void sort_list(PNODE pHead);
bool insert_list(PNODE pHead,int pos,int val);
bool delete_list(PNODE pHead,int pos,int * pval);

int main()
{
	int val=0;
	PNODE pHead=NULL;
	pHead=create_list();
	//sort_list(pHead);
	//insert_list(pHead,3,100);
	//traverse_list(pHead);
	if(delete_list(pHead,5,&val))
	{
		printf("删除成功，删除的数是%d",val); 
	}
	else
	{
		printf("删除失败"); 
	}
	printf("\n");
	traverse_list(pHead);
	//printf("删除的是%d\n",val);
	//printf("%d",length_list(pHead));
	return 0;
}

PNODE create_list()
{
	int len,val;
	printf("请输入要创建链表的长度"); 
	scanf("%d",&len);
	PNODE pHead=(PNODE)malloc(sizeof(NODE));
	if(pHead==NULL)
		{
			printf("no");
			exit(-1);
		}		
	PNODE Tail=pHead;
	Tail->pNext=NULL;
	for(int i=0;i<len;++i)
	{
		PNODE pNew=(PNODE)malloc(sizeof(NODE));
		if(pNew==NULL)
		{
			printf("no");
			exit(-1);
		}
		scanf("%d",&val);
		pNew->data=val;
		Tail->pNext=pNew;
		pNew->pNext=NULL;
		Tail=pNew;
	}
	return pHead;
} 

void traverse_list(PNODE pHead)
{
	PNODE p=pHead->pNext;
	while(NULL!=p)
	{
		printf("%5d",p->data);
		p=p->pNext;	
	}
	return;
}

bool is_empty(PNODE pHead)
{
	if(NULL==pHead->pNext)
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
	int len=0;
	PNODE p=pHead->pNext;
	while(NULL!=p)
	{
		++len;
		p=p->pNext;
	}
	return len;
}

void sort_list(PNODE pHead)
{
	int t;
	PNODE p,q;
	for(p=pHead->pNext;NULL!=p;p=p->pNext)
	{
		for(q=p->pNext;NULL!=q;q=q->pNext)
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
	int i=0;
	PNODE p=pHead; 
	while(p!=NULL&&i<pos-1)
	{
		p=p->pNext;
		++i;
	}
	if(i>pos-1||p==NULL)
	{
		return false;
	}
	PNODE pNew=(PNODE)malloc(sizeof(NODE));
	if(pNew==NULL)
	{
		printf("no");
		exit(-1);
	}	
	pNew->data=val;
	PNODE q=p->pNext;
	p->pNext=pNew;
	pNew->pNext=q;
	
	return true;
}

bool delete_list(PNODE pHead,int pos,int * val)
{
	int i=0;
	PNODE p=pHead;
	while(p->pNext!=NULL&&i<pos-1)
	{
		p=p->pNext;
		++i; 
	}
	if(i>pos-1||p->pNext==NULL)
	{
		return false;
	}
	
	*val=p->pNext->data;
	PNODE q=p->pNext;
	p->pNext=p->pNext->pNext;
	free(q);
	q=NULL;
	
	return true;
}

