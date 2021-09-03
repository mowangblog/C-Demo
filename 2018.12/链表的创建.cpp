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
bool insert_list(PNODE pHead,int pos,int val);
bool delete_list(PNODE pHead,int pos,int*pVal);
void sort_list(PNODE pHead);

int main()
{
	PNODE pHead=NULL;
	int val;
	
	pHead = create_list();
//	sort_list(pHead);
//	traverse_list(pHead);
	if(is_empty(pHead))
	{
		printf("链表为空！"); 
	}
	else 
	{
		printf("链表不为空！"); 
	}
	
//	printf("链表的长度为:%d",length_list(pHead));
	
//	insert_list(pHead,4,90);
	delete_list(pHead,6,&val);
	traverse_list(pHead);
	//delete_list(pHead);
	
	return 0;
} 
 
PNODE create_list(void)
{
	int len;
	int i;
	int val;
	PNODE pHead=(PNODE)malloc(sizeof(NODE));
	{
		if(pHead==NULL)
		{
			printf("分配失败，程序终止");
			exit(-1); 
		}
	} 
	PNODE Tail=pHead;
	Tail->pNext=NULL;
	
	printf("请输入要创建链表的长度：");
	scanf("%d",&len);
	
	for(i=0;i<len;++i)
	{
		printf("请输入第%d个节点的值：",i+1);
		scanf("%d",&val);
		PNODE pNew=(PNODE)malloc(sizeof(NODE));
		if(pNew==NULL)
		{
			printf("分配失败，程序终止");
			exit(-1); 
		}
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
	 
	while (NULL!=p)
	{
		printf(" %d",p->data);
		p=p->pNext;
	}
	printf("\n");
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
	PNODE p=pHead->pNext;
	int len=0;
	while(NULL!=p)
	{
		len++;
		p=p->pNext;
	}
	return len;
}

bool delete_list(PNODE pHead,int pos,int *pVal)
{
	int i=0;
	PNODE p=pHead; 
	while(NULL!=p->pNext&&i<pos-1)
	{
		p=p->pNext;
		++i;
	}
	if(i>pos-1||NULL==p->pNext)
	{
		return false;
	}
	PNODE q=p->pNext;
	p->pNext=p->pNext->pNext;
	free(q);
	q=NULL;
	return true;
}


bool insert_list(PNODE pHead,int pos,int val)
{
	int i=0;
	PNODE p=pHead; 
	while(NULL!=p&&i<pos-1)
	{
		p=p->pNext;
		++i;
	}
	if(i>pos-1||NULL==p)
	{
		return false;
	}
	PNODE pNew=(PNODE)malloc(sizeof(NODE));
	if(NULL==pNew)
	{
		printf("分配失败"); 
		exit(-1);
	}
	pNew->data=val;
	PNODE q=p->pNext; 
	p->pNext=pNew;
	pNew->pNext=q;
	
	return true;
}

void sort_list(PNODE pHead)
{
	int t;
	int len=length_list(pHead);
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
	
}

