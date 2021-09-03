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
	int len=10,val;
	ARR pArr; 
	init_arr(&pArr,len);
	append_arr(&pArr,10);
	append_arr(&pArr,20);
	append_arr(&pArr,30);
	append_arr(&pArr,340);
	append_arr(&pArr,-10);
	insert_arr(&pArr,4,30);
	
	if(delete_arr(&pArr,1,&val))
	{
		printf("val=%d\n",val);
	} 
	else
	{
		printf("É¾³ýÊ§°Ü£¡"); 
	}
	sort_arr(&pArr);
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
		printf("No");
		exit(-1); 
	}
	else
	{
		pArr->cnt=0;
		pArr->len=len;
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

bool is_empty(PARR pArr)
{
	if(pArr->cnt==0)
	{
		return true;
	}
	else
	{
		return false;
	}
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
	for(i=pArr->cnt-1;i>=pos-1;--i)
	{
		pArr->pBase[i+1]=pArr->pBase[i];
	}
	pArr->pBase[pos-1]=val;
	(pArr->cnt)++;
	
	return true;
} 

void show_arr(PARR pArr)
{
	int i;
	for(i=0;i<pArr->cnt;++i)
	{
		printf("%d\n",pArr->pBase[i]);
	}
	return;
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
	* val=pArr->pBase[pos-1];
	for(i=pos;i<pArr->cnt;++i)
	{
		pArr->pBase[i-1]=pArr->pBase[i];
	}
	pArr->cnt--;
	
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
}
