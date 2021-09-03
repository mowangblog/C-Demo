# include <stdio.h>
# include <stdlib.h>
 
int main(void)
{
	float score;
	
	printf("请输入你的成绩；");
	scanf("%f",&score);
	
	if (score>100)
	    printf("不要做梦！！！！骚年\n");
	    
	else if(score>=90&&score<=100)
		printf("优秀！!\n");
		
	else if(score>=75&&score<90)
		printf("良好！\n");
		 
	else if(score>=60&&score<75)	 
		printf(" 及格！\n");
		
	else if(score>=0&&score<60)
	    printf("不及格！!\n");
	
	else
	    printf("请勿输入你下面的长度!");    

    system("pause")	;
    
	return 0;
}
