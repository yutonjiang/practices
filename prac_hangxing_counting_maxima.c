/*���H�I�L:�̤j�Ȱ��D
       �b�@�Ӧ������d�򤺡A��X���H�T�|�l�G�A���H���|�l�T
�A���H�C�|�l�G�A�ӥB�b�d�򤺳̤j���Ʀr 
*/ 
#include<stdio.h>

int main(){
	
	int max;
	
	printf("max=");
	scanf("%d",&max);
	
	int number=max;
	
	while( number>0 && !( number%3==2 && number%5==3 && number%7==2)){ //���A�˪��覡�A�Ѥj���Ʃ��e�ơA���F�קK���J�L�a�j��A�n�]�w>0�ɰ��� 
	        --number;
	     }
	
	if (number>0){   //���F�T�O���Xwhile�ɬO�]�᭱�ܦ�false(��ܧ��Ʀr)�A�ҥH�z�ﱼ�e���ܦ�false���i�� 
		printf("%d\n",number);
	   } 
	   
     return 0;	
}

/*for �g�k

int answer = 0;
int number;
for( number = max ; number>=1 && answer == 0 ; --number){
       if( number%3==2 && number%5==3 && number%7==2){
	       answer = number;
	   }

}
       if (answer != 0){
	       printf("%d\n",answer);
	   }

*/ 
