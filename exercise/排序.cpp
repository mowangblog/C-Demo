# include <stdio.h>

int main(){
	int a[10];
	int t;
	for(int i=0;i<10;++i){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<10;++i){
		for(int j=i+1;j<10;++j){
			if(a[i]>a[j]){
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			} 
		}
	} 
	
	for(int i=0;i<10;++i){
		printf("%5d",a[i]);
	}
	
	
	return 0;
}
