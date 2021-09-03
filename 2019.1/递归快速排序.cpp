# include <stdio.h>

int FindPost(int * a,int low,int high)
{
	int val=a[low];
	while(low<high)
	{
		while(low<high&&a[high]>=val)
		{
			--high;
		}
		a[low]=a[high];
		while(low<high&&a[low]<=val)
		{
			++low;
		}
		a[high]=a[low];
	}
	
}

void QuickSort(int * a,int low,int high)
{
	int post;
	if(low<high)
	{
		post=FindPost(a,low,high);
		QuickSort(a,low,post-1);
		QuickSort(a,post+1,high); 
	}
}

int main()
{
	int a[10]={2,32,3,43,4,5,-124,3,23,76};
	int i;
	
	QuickSort(a,0,9);
	
	for(i=0;i<10;++i)
	{
		printf("%d ",a[i]);
	}
	
	return 0;
}
