//�]�p�@�ӵ{���A��JN�H��p��N!����

#include<stdio.h>

int main(){
	
	int N,b=1; // b������Ȥ~��bfor�j�餤�B�@ 
	
	printf("�п�J�Ʀr:");
	scanf("%d",&N);
	
	for (int i=N;i>0;i--)
	{
		b *= i;    // �� N �}�l�����ۭ� 
	}
	printf("%d!=%d",N,b);
	
	
} 
