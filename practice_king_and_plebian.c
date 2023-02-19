/* 設計一個程式，國王一天給小平民1元，第二天給2元
，第三天給3元，試計算到第N天小平民一共拿到多少錢*/
#include<stdio.h>

int main()
{
	int n=0;
	int m=1;
	int i=0;
	printf("輸入天數(第n天):");
	scanf("%d",&n);
	

	for( m=1;m<=n;m++)
	{
		
		i += m;
	
	}
	printf("小平民一共得到了%d元",i);
	return 0;
	
	
	
} 
