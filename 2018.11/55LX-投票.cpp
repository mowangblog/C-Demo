/*********************************
	ͶƱ  
	
	�� for ѭ���� if ����ۼ�Ʊ�� 
	ƽ���� if ���ֱ����� 
	max�����жϻ�ʤ�ߡ�
	
    2018.11.22 
**********************************/

# include <stdio.h>

int max(int a,int b,int c)
{
	if(a>b&&a>c)
	{
		return 97;
	}
	else if(b>a&&b>c)
	{
		return 98;
	}
	else if(c>a&&c>b)
	{
		return 99;
	}
	else 
	{
		return 0;
	}
}

int main ()
{
	int i,number;
	int a=0,b=0,c=0;
	
	printf("������ͶƱ��������"); 
	scanf("%d",&number);
	
	int s[number];
	
	printf("������ͶƱ���(1-a;2-b;3-c):");
	for(i=0;i<number;++i)
	{
		scanf("%d",&s[i]);
	}
	
	for(i=0;i<number;++i)
	{
		if(1==s[i])
		{
			++a;
		}
		else if(2==s[i])
		{
			++b;
		}
		else
		{
			++c;
		}
	}
	printf("aͬѧƱ����%d,bͬѧƱ����%d��cͬѧƱ����%d \n",a,b,c);
	printf("\n"); 
	
	if(max(a,b,c)==0)
	{
		printf("  ƽƱ  ");
	}
	else
	{
		printf("��ʤ���ǣ�%cͬѧ",max(a,b,c));
	}
	
	return 0; 
} 
