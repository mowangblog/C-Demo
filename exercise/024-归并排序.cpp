# include <stdio.h>

void merge(int r[],int s[],int x1,int x2,int x3)
{
	int i,j,k;
	i=x1;
	j=x2+1;
	k=x1;
	
	while((i<=x2)&&(j<=x3))
	{
		if(r[i]<=r[j])
		{
			s[k]=r[i];
			i++;
			k++;
		}
		else 
		{
			s[k]=r[j];
			j++; 
			k++; 
		} 
	}
	while(i<=x2)
	{
		s[k++]=r[i++];
	}
	while(j<=x3)
	{
		s[k++]=r[j++]; 
	}
}

void merge_sort(int r[],int s[],int m,int n)
{
	int p;
	int t[20];
	if(m==n)	
	{
		s[m]=r[m];
	}
	else 
	{
		p=(m+n)/2;
		merge_sort(r,t,m,p);
		/*递归调用merge_sort()函数将r[m]~r[p]归并成有序的t[m]~t[p] */
		merge_sort(r,t,p+1,n);
		/*递归调用merge_sort()函数将r[p+1]~r[n]归并成有序的t[P+1]~t[n] */
		merge(t,s,m,p,n) ;//调用函数将前两部分归并到s[m]~s[n] 
	}
}

int main()
{
	int i,a[11];
	
	for(i=1;i<=10;++i)
	{
		printf("请输入十个数据：");
		scanf("%d",&a[i]);
	}
	
	merge_sort(a,a,1,10);
	
	printf("排序后的顺序："); 
	for(i=1;i<=10;++i)
	{
		printf("%6d",a[i]);
	}
	return 0;
 } 
