#include <stdio.h>

int main(){
	int n1;
	char c1;
	
	printf("Number=?");
	scanf("%d",&n1); // scanf提供一個用戶端input的管道， &是取址運算子
	fflush(stdin);  // 清除緩充 
	
	printf("character=?") ;
	scanf("%c",&c1);
	fflush(stdin);
	
	printf("Number=%d and Character=%c\n",n1,c1);
}
