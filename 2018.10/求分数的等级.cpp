# include <stdio.h>
# include <stdlib.h>
 
int main(void)
{
	float score;
	
	printf("��������ĳɼ���");
	scanf("%f",&score);
	
	if (score>100)
	    printf("��Ҫ���Σ�������ɧ��\n");
	    
	else if(score>=90&&score<=100)
		printf("���㣡!\n");
		
	else if(score>=75&&score<90)
		printf("���ã�\n");
		 
	else if(score>=60&&score<75)	 
		printf(" ����\n");
		
	else if(score>=0&&score<60)
	    printf("������!\n");
	
	else
	    printf("��������������ĳ���!");    

    system("pause")	;
    
	return 0;
}
