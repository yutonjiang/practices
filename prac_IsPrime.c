/*��ƧP�_�m��
    ���:
	��Ƴq�`���b2 ~ (n-1)�����A�]���u�n���϶����Ʀr���L�k�㰣�A�N�O��� 
*/
#include<stdio.h>

int main(){
	
	int n;
	
	printf("number=");
	scanf("%d",&n);
	
	int count =0; 
	int i;
	for(i=2 ; i<n ; ++i){
		if (n % i==0){
			++count; //�]�i�H�@�}�l�Ncount�]��1�A���]�Ʈ��ܬ�0�A�A��ѫ᭱���P�_���B�z 
		 
		}
		
	}
	
	if(count==0){ //count�᭱��==0�i�H�ٲ��A�p�Gcount�����u��0��1�����G�N�i�H��@�޿�B��ϥ� 
	    printf(" yes\n");
    }
	else{
	    printf(" no\n");
    }
	return 0;
} 
