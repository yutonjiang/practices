/*���while�y�k�A�i�H�ϥ�do-while�g�k 
do
{
    expressions
}
while(operations); */

//�m�� : ��do-while�y�k��X�Y��N���Ҧ����]�� 
#include<stdio.h>

main(){
		
		int  i,n;
		
		printf("number?");
		scanf("%d",&n);
		
		i=1;
		do
		{
			if (n%i==0)
			   printf("%d\n",i);
			i++;
		}
		while(i<=n);
} 
