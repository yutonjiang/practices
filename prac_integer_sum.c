#include<stdio.h>

/* �C�X�q1��n������`�M */ 


int main(){
	
    int n;
	printf("n=");
	scanf("%d",&n);
	
	int sum=1;
	
	int i;                  //�]�C����ȧe���W�A�i�H�ΥN�ƩM�j��ӳ]�w 
	
	for(i=2;i<=n;i++){
		sum = sum +i;
		
	}
	printf("%d\n",sum);
	return 0;	
} 
