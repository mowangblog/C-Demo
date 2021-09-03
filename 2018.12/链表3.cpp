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
bool insert_list(PNODE pHead,int pos,int val);
bool is_empty(PNODE pHead);
bool delete_list(PNODE pHead,int pos,int * val);
void sort_list(PNODE pHead);
int lenght_list(PNODE pHead);

int main()
{
	int val;
	PNODE pHead=NULL;
	pHead=create_list();
	insert_list(pHead,2,100);
	if(delete_list(pHead,3,&val))
	{
		printf("ɾ���ɹ���ɾ������%d\n",val); 
	}
	else
	{
		printf("ɾ��ʧ�ܣ�\n"); 
	} 
	traverse_list(pHead);
	sort_list(pHead);
	printf("\n");
	traverse_list(pHead);
	
	return 0;
} 

PNODE create_list()
{
	int len,val;
	printf("��������ĳ���");
	scanf("%d",&len);
	PNODE pHead=(PNODE)malloc(sizeof(NODE));
	if(pHead==NULL)
	{
		printf("����ʧ�ܣ�");
		exit(-1); 
	}
	PNODE pTail=pHead;
	pTail->pNext=NULL;
	for(int i=0;i<len;++i)
	{
		PNODE pNew=(PNODE)malloc(sizeof(NODE));
		if(pNew==NULL)
		{
			printf("����ʧ�ܣ�");
			exit(-1); 
		}
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
	while(NULL!=p)
	{
		printf("%10d",p->data);
		p=p->pNext;
	}
	return;
}

int lenght_list(PNODE pHead)
{
	int len=0;
	PNODE p=pHead->pNext;
	while(NULL!=p)
	{
		++len;
		p=p->pNext;
	} 
	printf("����Ϊ%d",len);
	return len;
}

bool insert_list(PNODE pHead,int pos,int val)
{
	int i=0;
	PNODE p=pHead->pNext;
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
	pNew->data=val;
	PNODE q=p->pNext;
	p->pNext=pNew;
	pNew->pNext=q;
	
	return true;
}

bool delete_list(PNODE pHead,int pos,int * val)
{
	int  i=0;
	PNODE p=pHead->pNext;
	while(p->pNext!=NULL&&i<pos-1) 
	{
		p=p->pNext;
		++i;
	}
	if(p->pNext==NULL||i>pos-1)
	{
		return false;
	}
	PNODE q=p->pNext;
	*val=p->pNext->data;
	p->pNext=p->pNext->pNext;
	free(q);
	q=NULL; 
	
	return true;
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
