/* 用於測試各種程式*/
#include<stdio.h>

int main(void)
{
	int n1;
	scanf("%d",&n1);
	star(n1);
	return 0;
}

void star(int n)
{
	int i;
	for(i=0;i<n;i++)
	printf("*");
	return;
}



 
