# include <stdio.h>
# include <malloc.h>
# include <stdlib.h>

typedef struct Arr
{
	int * pBase;
	int len;
	int cnt;
}ARR,*PARR;

void init_arr(PARR pArr,int len);
void show_arr(PARR pArr);
bool append_arr(PARR pArr,int val);
bool insert_arr(PARR pArr,int pos,int val);
bool delete_arr(PARR pArr,int pos,int * val);
bool is_empty(PARR pArr);
bool is_full(PARR pArr);
void sort_arr(PARR pArr);
void inversion_arr(PARR pArr);


int main()
{
	int val;
	ARR pArr;
	init_arr(&pArr,10);
	append_arr(&pArr,1);
	append_arr(&pArr,2);
	append_arr(&pArr,3);
	insert_arr(&pArr,4,100);
	if(delete_arr(&pArr,2,&val))
	{
		printf("ɾ���ɹ���val=%d\n",val); 
	}
	else
	{
		printf("ɾ��ʧ�ܣ�");
	}
	append_arr(&pArr,4);
	append_arr(&pArr,5);
	append_arr(&pArr,6);
	show_arr(&pArr);
	sort_arr(&pArr);
	printf("\n");
	show_arr(&pArr);
	inversion_arr(&pArr);
	printf("\n"); 
	show_arr(&pArr);
	
	return 0; 
}

void init_arr(PARR pArr,int len)
{
	pArr->pBase=(int *)malloc(sizeof(int)*len);
	if(pArr->pBase==NULL)
	{
		printf("����ʧ�ܣ�");
		exit(-1);	
	}
	else
	{
		pArr->cnt=0;
		pArr->len=len;
	}
	return;
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
	}
	return true;
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

void show_arr(PARR pArr)
{
	if(is_empty(pArr))
	{
		printf("�����飡");
		return;
	}
	int i;
	for(i=0;i<pArr->cnt;++i)
	{
		printf("%5d",pArr->pBase[i]); 
	}
	return;
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
	int  i;
	for(i=pArr->cnt;i>pos;--i)
	{
		pArr->pBase[i+1]=pArr->pBase[i];	
	}	
	pArr->pBase[pos-1]=val;
	(pArr->cnt)++;
	return true;	
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
	int i;
	*val= pArr->pBase[pos-1]; 
	for(i=pos;i<pArr->cnt;++i)
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
			if(pArr->pBase[i]<pArr->pBase[j])
			{
				t=pArr->pBase[i];
				pArr->pBase[i]=pArr->pBase[j];
				pArr->pBase[j]=t; 
			}			
			
		}
	}
	return ; 
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
