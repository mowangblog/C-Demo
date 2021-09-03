# include <stdio.h>

int main(){
	char i;
	scanf("%c",&i);
	if(i<97){
		printf("%c",i+32);
	}else{
		printf("%c",i-32);
	}
	return 0;
} 
