/*���H�I�L���D(���w�d��):

�զb�@�w�d�򤺧�X���H�T�|�l�G�A���H���|�l�T
�A���H�C�|�l�G���Ҧ��Ʀr
*/
#include<stdio.h>

int main(){
	
	int min,max;
	printf("max=");
	scanf("%d",&max);
	printf("min=");
	scanf("%d",&min);
	
	int number;
	for(number=min;number<=max;++number){ //�Ѥp�ƨ�j 
		if( number%3==2 && number%5==3 && number%7==2 ){
			printf("%d ",number);
		}
	}
	
	printf("\n");
	return 0;
	
} 
