#include <stdio.h>

int main(){
	int n1;
	char c1;
	
	printf("Number=?");
	scanf("%d",&n1); // scanf���Ѥ@�ӥΤ��input���޹D�A &�O���}�B��l
	fflush(stdin);  // �M���w�R 
	
	printf("character=?") ;
	scanf("%c",&c1);
	fflush(stdin);
	
	printf("Number=%d and Character=%c\n",n1,c1);
}
