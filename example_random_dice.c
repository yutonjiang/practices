/*  �Y��l�m��(�ϥΨ禡) : �м�������������l�����G 


    �]�p���:�N�Ҧ��Ʀr�H���������v�ഫ��1~6�A�o�ˤ��ީ��ֳ��i�H�M�w�@���I�� 
    ���]���̫�@�ӼƦr�ܤj�A���O�@�w�O�Q6�㰣�A�ҥH�᭱���Ʀr(4,5,6)�X�{�����v�i��|�� 
	�e�����Ʀr(1,2,3,)�֥X�{�@���A �������綠���A���L�b�˥����e�j�����p�U�v�T�ܤp 
*/ 

#include <stdio.h>
#include <stdlib.h>
int main(){
	srand(time(0));
	int i;
	for(i=1;i<=5;i++){
		
		int dice =rand() % 6 + 1 ;//�N��쪺�ư��H7�ҳѪ��l�Ʒ|���_����0�`����5�A�A+1��N�O1~6 
		printf("%d\n",dice);
	} 
	return 0;
} 

/*�i�H�ϥ�do-while�Ӳ���1~6�A���O�ѩ�˥��ƤӤj(1~�ܤj����)
�ҥH�B��ɶ��i��|�ܤ[�A�ä����̨θѨM��� 
      do{
			dice=rand();
		} 
		while ( dice<1||dice>6 )
		printf("%d\n",dice);
	    }
*/
