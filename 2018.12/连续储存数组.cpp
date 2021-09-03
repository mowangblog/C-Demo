# include <stdio.h>
# include <malloc.h>
# include <stdlib.h>

int i=0;
struct Arr
{
	int * pBase;
	int len;
	int cnt;	
}; 

void init_arr(struct Arr *,int );
bool append_arr(struct Arr *,int);
bool insert_arr(struct Arr *,int,int);
bool delete_arr(struct Arr *,int,int*);
int get();
bool is_empty(struct Arr *);
bool is_full(struct Arr *);
void sort_arr(struct Arr *);
void show_arr(struct Arr *);
void inversion_arr(struct Arr *);

int main () 
{	
	int len,val;
	struct Arr arr;
	
	printf("请输入数组的长度："); 
	scanf("%d",&len);
	init_arr(&arr,len);
	
	show_arr(&arr);
	if(append_arr(&arr,1))
	{
		printf("追加成功\n");
	}
	append_arr(&arr,2); 
	append_arr(&arr,3);
	append_arr(&arr,4);
	append_arr(&arr,5);
	append_arr(&arr,8);
	if(insert_arr(&arr,5,99))
	{
		printf("插入成功\n"); 
	}
	else
	{
		printf("插入失败\n"); 
	}
	show_arr(&arr);
	
	if(delete_arr(&arr,4,&val))
	{
		printf("删除成功 数字是%d\n",val);
	} 
	else
	{
		printf("删除失败\n"); 
	}
	sort_arr(&arr);
	printf("删除 排序后:\n");
	show_arr(&arr);
	inversion_arr(&arr);
	printf("倒置后：\n"); 
	show_arr(&arr);
	
	return 0;
}

void init_arr(struct Arr *arr,int length)
{
	arr->pBase=(int *)malloc(sizeof(int)*length);
	if(NULL==arr->pBase)
	{
		printf("分配失败\n");
		exit(-1);
	}
	else 
	{
		arr->len=length; 
		arr->cnt=0;
	} 
}

bool append_arr(struct Arr *arr,int val)
{
	if(is_full(arr))
	{
		return false;
	}   
	else 
	{
		arr->pBase[arr->cnt] = val;
		(arr->cnt)++;
		return true;
	}
}

bool is_empty(struct Arr *arr)
{
	if(0==arr->cnt)
	{
		return true;
	}
	else 
	{
		return false;
	}
}

bool is_full(struct Arr * arr)
{
	if(arr->len==arr->cnt)
	{
		return true;
	}
	else 
	{
		return false;
	}
	
}

void show_arr(struct Arr * arr)
{
	if(is_empty(arr))
	{
		printf("空数组\n"); 
	}
	else
	{
		 for(i = 0;i<arr->cnt;++i)
		 { 
		 	printf("%5d",(arr->pBase[i]));
		 }
		 printf("\n");
	}
}

bool insert_arr(struct Arr * arr,int pos,int val)
{
	if(is_full(arr))
	{
		return false;
	}
	if(pos<1||pos>arr->cnt+1)
	{
		return false;
	}
	for(i=arr->cnt-1;i>=pos-1;--i)
	{
		arr->pBase[i+1]=arr->pBase[i]; 
	}
	arr->pBase[pos-1]=val;
	(arr->cnt)++;
	
	return true;
}

bool delete_arr(struct Arr *arr,int pos,int *val)
{
	if(is_empty(arr))
	{
		return false;
	}
	if(pos<1||pos>arr->cnt)
		return false;
	*(val)=arr->pBase[pos-1];
	for(i=pos;i<arr->cnt;++i)
	{
		arr->pBase[i-1]=arr->pBase[i];
	}
	(arr->cnt)--;
	return true;
}

void sort_arr(struct Arr *arr)
{
	int i,j,t;
	for(i=0;i<arr->cnt;++i)
	{
		for(j=i+1;j<arr->cnt;++j)
		{
			if((arr->pBase[i])>(arr->pBase[j]))
			{
				t=arr->pBase[i];
				arr->pBase[i]=arr->pBase[j]; 
				arr->pBase[j]=t;
			}
		}
	}
}

void inversion_arr(struct Arr * arr)
{
	int i=0;
	int j=arr->cnt-1;
	int t;
	while(i<j)
	{
		t=arr->pBase[i];
		arr->pBase[i]=arr->pBase[j];
		arr->pBase[j]=t; 
		++i;
		--j; 
	}
	return;
}
