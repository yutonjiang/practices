/*�]�p�@�ӵ{���A�i�H�P�O��J������O�j���٬O�p��*/
// switch���� 
#include<stdio.h>

main(){
	int n;
	printf("enter the month:");
	scanf("%d",&n);
	
	switch(n)
	{
		default : 
		   printf("�п�J���T���");
		   break;
		case 1 or 3 or 5 or 7 or 8 or 10 or 12 :
		   printf("�j��");
		   break;
		case 2 or 4 or 6 or 9 or 11 :
		   printf("�p��"); 
		   break;	
	}
	return 0;
	
	
	
} 
