/*�]�p�@�ӵ{���A�i�H�P�O��J������O�j���٬O�p��*/
// if���� 
#include<stdio.h>

main(){
	int n;
	printf("enter the month:");
	scanf("%d",&n);
	
	if   ( (n==1) || (n==3) || (n==5) || (n==7) || (n==8) || (n==10) || (n==12) ) 
	{	
		   printf("�j��\n");
	}
	else if ( (n==2) || (n==4) || (n==6) || (n==9) || (n==11) ) 
	{
		   printf("�p��\n"); 
    }
	else
	{
           printf("�п�J���T���\n");
    }
	return 0;
	
	
	
} 
