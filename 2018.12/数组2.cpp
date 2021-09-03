# include <stdio.h>
# include <malloc.h>
# include <stdlib.h>

typedef struct Arr
{
	int *pBase;
	int len;
	int cnt;
}ARR,* PARR;

void init_arr(PARR pArr,int len);
void show_arr(PARR pArr);
bool is_empty(PARR pArr);
bool is_full(PARR pArr);
bool insert_arr(PARR pArr,int pos,int val); 
bool delete_arr(PARR pArr,int pos,int * val);
int get(PARR pArr);
bool append_arr(PARR pArr,int val);
void sort_arr(PARR pArr);
void inversion_arr(PARR pArr);

int main()
{
	ARR pArr ;
	int len;
	int val;
	printf("����������ĳ��ȣ�"); 
	scanf("%d",&len);
	init_arr(&pArr,len);
	
	show_arr(&pArr);
	append_arr(&pArr,1);
	append_arr(&pArr,2); 
	append_arr(&pArr,3);
	append_arr(&pArr,4);
	append_arr(&pArr,5);
	append_arr(&pArr,8);
	if(insert_arr(&pArr,5,99))
	{
		printf("����ɹ�\n"); 
	}
	else
	{
		printf("����ʧ��\n"); 
	}
	show_arr(&pArr);
	
	//if(delete_arr(&pArr,4,&val))
	//{
	//	printf("ɾ���ɹ� ������%d\n",val);
	//} 
	//else
	//{
	//	printf("ɾ��ʧ��\n"); 
//	}
	sort_arr(&pArr);
	printf("ɾ�� �����:\n");
	show_arr(&pArr);
	inversion_arr(&pArr);
	printf("���ú�\n"); 
	show_arr(&pArr);
}

void init_arr(PARR pArr,int len)
{
	pArr->pBase=(int *)malloc(sizeof(int)*len);
	if(pArr->pBase==NULL)
	{
		printf("no");
		exit(-1);
	}
	else
	{
		pArr->len=len;
		pArr->cnt=0;
	}
}

void show_arr(PARR pArr)
{
	if(is_empty(pArr))
	{
		printf("�����"); 
	}
	else
	{
		for(int i=0;i<pArr->cnt;++i)
		{
			printf("%10d",pArr->pBase[i]);
		}
		printf("\n");
	}
}

bool is_empty(PARR pArr)
{
	if(0==pArr->cnt)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}

bool is_full(PARR pArr)
{
	if(pArr->cnt==pArr->len)
	{
		return true;
	}
	else
	{
		return false;
	}
}


bool insert_arr(PARR pArr,int pos,int val)
{
	if(is_full(pArr))
	{
		return false;
	}
	if(pos<1||pos>pArr->cnt+1)
	{
		return false;
	}
	int i;
	for(i=pArr->cnt;i>=pos-1;--i)
	{
		pArr->pBase[i+1]=pArr->pBase[i];
	}
	pArr->pBase[pos-1]=val;
	(pArr->cnt)++;
	
	return true;
}

int get(PARR pArr)
{
	int i;
	for(i=0;i<pArr->len;++i)
	{
		scanf("%d",&pArr->pBase[i]);
		pArr->cnt++; 
	}
	return 1;
	
}

bool append_arr(PARR pArr,int val)
{
	if(is_full(pArr))
	{
		return false;
	}
	else
	{
		pArr->pBase[pArr->cnt]=val;
		(pArr->cnt)++;
		return true;
	}
	
}

bool delete_arr(PARR pArr,int pos,int * val)
{
	if(is_empty(pArr))
	{
		return false;
	}
	if(pos<1||pos>pArr->cnt)
	{
		return false;
	}
	*(val)=pArr->pBase[pos-1];
	for(int i=pos;i<pArr->cnt;++i)
	{
		pArr->pBase[i-1]=pArr->pBase[i];
	}
	(pArr->cnt)--;
	
	return true;
} 

void sort_arr(PARR pArr)
{
	int i,j,t;
	for(i=0;i<pArr->cnt;++i)
	{
		for(j=i+1;j<pArr->cnt;++j)
		{
			if(pArr->pBase[i]>pArr->pBase[j])
			{
				t=pArr->pBase[i];
				pArr->pBase[i]=pArr->pBase[j];
				pArr->pBase[j]=t;
			}
		}
	}
	
}

void inversion_arr(PARR pArr)
{
	int i=0;
	int j=pArr->cnt-1;
	int t;
	while(i<j)
	{
		t=pArr->pBase[i];
		pArr->pBase[i]=pArr->pBase[j];
		pArr->pBase[j]=t;
		++i;
		--j;		
	}	
	return;
} 
