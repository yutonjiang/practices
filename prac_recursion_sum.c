/*�禡���j:
   �Q�λ��j�L�X1~N 
   
   ���s���Ƭۥ[���W�ߡA�i�H�[��X
   
   sum 1 = 1
   sum 2 = 1+2 = sum1+2
   sum 3 = 1+2+3 = sum2+3
   
   �Ѧp�����A�i�H�o�����Fsum1�~���Osum n =sum(n-1)+n  
   
   ��:��禡�B�@��return�ɡA�N�N��Ө禡�������� 
*/ 

#include <stdio.h>

int adding(int n);

int main(){
	int n;
	printf("n=?\n",n);
	scanf("%d",&n);
	printf("%d\n",adding(n));
	return 0;
}

int adding(int n){
	if(n == 1){  
		return 1;           
	}
	return adding(n-1)+n;  // ��main�� n �i�Ө禡�H��A�|return�᭱��adding(n-1)+n�A�P�ɤS�]��adding(n-1)�A�~��V�e�I�s�A���� 1���� 
}
