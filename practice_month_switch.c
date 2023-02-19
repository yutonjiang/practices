/*設計一個程式，可以判別輸入的月份是大月還是小月*/
// switch版本 
#include<stdio.h>

main(){
	int n;
	printf("enter the month:");
	scanf("%d",&n);
	
	switch(n)
	{
		default : 
		   printf("請輸入正確月份");
		   break;
		case 1 or 3 or 5 or 7 or 8 or 10 or 12 :
		   printf("大月");
		   break;
		case 2 or 4 or 6 or 9 or 11 :
		   printf("小月"); 
		   break;	
	}
	return 0;
	
	
	
} 
