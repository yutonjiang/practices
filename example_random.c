/*
   �禡�B��: �üƥͦ� 
   
   c�y�����������rand�Ӳ��ͶüơA�åB���ݭn��J�Ѽ�
   ��stdlib.h���� 
   rand()�禡�Ҳ��ͪ��üƷ|�O�T�w���A�ҥH�|�ݭnsrand()�禡 �ӧ��ܳo�ǩT�w���üƹF���H���ĪG
   �bsrand(x)��,x���üƺءA��üƺا��ܡA�N�|�o�줣�P���üƵ��G�A�üƺإi�H�ήɶ��A��cpu�`�����Ƶ������H�@�Ҥ@�˪��q
   �ӷ�@�üƺ� 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main(){
	srand(time(0)); //�A�����ϥήɶ���@�޼ơA��ɶ��������@�ˡA�üƤ]���|�@�� 
	int i;
	for(i=1;i<=5;i++){
		printf("%d\n",rand());
	}
	
	
    return 0;	
} 


