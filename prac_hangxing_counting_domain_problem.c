/*���H�I�L���D:�b���H�I�L�����D���[�J�@�ӭp�ƾ��ӨD�o���G�A�Ҧp:

�D�X1-1000���e�T�p�ŦX���H�I�L���Ʀr 

*/

#include<stdio.h>>

int main(){
	
	int number,count=0;
	for ( number=1 ; number<=1000 && count <3 ; ++number ){ // count<3�O�]�����򪺼Ʀr�Ҥ��ݭn�A�ҥH���F�į��Y�p�d�� 
		
		if(number%3==2 && number%5==3 && number%7==2){   //�Ĥ@��if�b�p����ŦX���󪺼Ʀr�O�ĴX�� 
			++count;
			
			if(count<=3){      //�ĤG�� if ����F�n�C�X�ĴX�Ӷ��Ǫ��Ʀr 
		       printf("%d ",number);
		    }
		}
	}
	printf("\n");
	
	return 0;
} 
