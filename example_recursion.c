/*�禡���j
   
   ���j(recursion)�������O�� A �I�s B,B �I�s c ,�@����̫�@�Ө��(���]�OC)
   �M�� C �A��^�ǭȵ� B , B��^�ǭȵ�A ,�̫᧹���{�����ʧ@�A���@�Ӱj��@�ˡA
   ����j����ק�u�A�L�{�X�G���b�ݤ��������p�U�����A�]�]���|�L�a�i��U�h�ҥH�n�]��
   �������A�קK���w�q�欰�����͡C 
    
    
    �m��:�Q�Ψ禡���j�ӦL�X1~3�M3~1 
*/ 


#include <stdio.h>

void countTo3(int i);


int main(){
	
	countTo3(1);  //��main�}�l�I�s�禡 
	return 0;
}

void countTo3(int i ){  //void�O���Υ�return���A���O�@�˷|�^��(�S���ƭ�) 
	if (i<=3){
	    printf("%d\n",i);	
		countTo3(i+1);   //��i�Ӫ��ƲŦXif condition�A�|�I�s�U�@�Ӱj��A�b�I�s��L�j��ɡA�Y�^�ǩ|�������A�N���|�~�����U�����ʧ@ 
	}
}


/*�n�� 1 2 3�ܦ� 3 2 1����ذ��k:
   1.��禡��i+1�令i-1�A��J���ȧ令3 �Aif�אּ>=1 
   2.��printf�M�禡�����I�s�����A�ˡA�p���@�Ӧb���������j���e���|printf�A�N�|�q�̫᪺i=3�禡�^�Ǧ^�ӡA�ܦ�3 2 1 
*/
