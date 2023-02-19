#include<stdio.h>

/* 列出從1到n的整數總和 */ 


int main(){
	
    int n;
	printf("n=");
	scanf("%d",&n);
	
	int sum=1;
	
	int i;                  //因每次賦值呈遞增，可以用代數和迴圈來設定 
	
	for(i=2;i<=n;i++){
		sum = sum +i;
		
	}
	printf("%d\n",sum);
	return 0;	
} 
