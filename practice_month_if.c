/*設計一個程式，可以判別輸入的月份是大月還是小月*/
// if版本 
#include<stdio.h>

main(){
	int n;
	printf("enter the month:");
	scanf("%d",&n);
	
	if   ( (n==1) || (n==3) || (n==5) || (n==7) || (n==8) || (n==10) || (n==12) ) 
	{	
		   printf("大月\n");
	}
	else if ( (n==2) || (n==4) || (n==6) || (n==9) || (n==11) ) 
	{
		   printf("小月\n"); 
    }
	else
	{
           printf("請輸入正確月份\n");
    }
	return 0;
	
	
	
} 
