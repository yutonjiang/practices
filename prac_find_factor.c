/*��X�����n�Ҧ������]��*/

#include<stdio.h>

/*��Ҥ覡: 1.��X1��n���Ҧ����
            2.�]�Ƥ@�w�n��㰣n(�l0)�A�ŦX���d�U 
*/

int main(){
	
	int n;
	printf("n=");
	scanf("%d",&n);
	
	int i;
	for(i=1;i<=n;i++){         //�C�X�Ҧ��n���ժ��� 
		
		if(n%i==0){            //�ŦX�ˬd���� 
			printf("%d ",i);
		}
		
	}
	printf("\n");
	return 0;
}
