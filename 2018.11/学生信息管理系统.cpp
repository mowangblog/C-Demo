# include <stdio.h>
# include <malloc.h>

void h(struct Student *,int);
void f(struct Student *,int);

struct Student
{
	int age;
	float score;
	char name[100];
};
	
int main()
{
	int len;
	struct Student *pArr;
	int i;
	
	printf("请输入学生的数量：");
	scanf("%d",&len);
	pArr = (struct Student * )malloc(len*sizeof(struct Student));
	
	f(pArr,len); 
	h(pArr,len);
	
	
	printf("\n \n");
	printf("按学生成绩排列\n"); 
		for(i=0;i<len;++i)
	{
		printf("第%d个学生的信息：\n",i+1);
		printf("age = ");
		printf("%d\n",pArr[i].age);
		
		printf("name = ");
		printf("%s\n",pArr[i].name);
		
		printf("score = ");
		printf("%f\n",pArr[i].score);
		
	}
	
	
	return 0;
 } 
  
void f(struct Student*p,int len)
	{
		int i;
		for(i=0;i<len;++i)
		{
			printf("请输入第%d个学生的信息\n",i+1);
			printf("age = ");
			scanf("%d",&p[i].age);
			
			printf("name = ");
			scanf("%s",p[i].name);
			
			printf("score = ");
			scanf("%f",&p[i].score);
			
		} 
	}
	
void h(struct Student * p,int len)
	{
		int i; 
		int j;
		struct Student t;
		for(i=0;i<len-1;++i)
		{
			for(j=0;j<len-1-i;++j)
			{
				if(p[j].score < p[j+1].score)
				{
					t = p[j];
					p[j] = p[j+1];
					p[j+1] = t;
				}
			}
			
		}
		
	}
	
