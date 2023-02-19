//設計一個程式，輸入N以後計算N!的值

#include<stdio.h>

int main(){
	
	int N,b=1; // b給予初值才能在for迴圈中運作 
	
	printf("請輸入數字:");
	scanf("%d",&N);
	
	for (int i=N;i>0;i--)
	{
		b *= i;    // 由 N 開始降冪相乘 
	}
	printf("%d!=%d",N,b);
	
	
} 
