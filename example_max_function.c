/*�禡�B��:�q�h�Ӿ�Ƥ��D�̤j�� 

�禡�̤j���n�B�O�i�H�ޥΤ@�ǽ������e�j���\��A�Ӥ��ݭn�A���s�غc�@���A
��main�I�s�禡�ɡA�|�N�@�Ǥ޼ƥ�J�禡�p��A�M���ƦA�^�ǼƭȨ�main�� 

*/ 

#include <stdio.h>

int max2(int,int);
int max3(int,int,int); //���Ƽg�bmain�j�骺�᭱�ɡA�n���ŧi 

int main(){
	
	int a,b,c;
	printf("enter three integers:",a,b,c);
	scanf("%d%d%d",&a,&b,&c);
	printf("the maxima integer is: %d",max3(a,b,c)); //�q���B�}�l�I�s��� �A�åB�̷Ӧ�m��ƭȥ�J�禡���޼Ƥ��p�� 
	return 0;
} 

int max3(int a,int b,int c){  // ��Ƥ����ܼƦW�٤��@�w�n�M�I�s�ɪ��W�٤@�� 
	return max2(max2(a,b),c); //�ѳ̤��}�l�I�s 
	
}

int max2(int a,int b){
	
	if (a>=b){
		return a;
	}
	
	else {
	return b;
    }
}
