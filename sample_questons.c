// �d�ҵ{�� 
#include<stdio.h>


int main(){
    /* example 1 �]�p�@�ӵ{���AŪ�J�@�Ӥp�g�r���A
     �N���ഫ���������j�g�r�� */
    char c;
         printf("Char? ");
         scanf("%c",&c);
         printf("Upper %c is ",c);
         printf("%c\n",c-'a'+'A'); // �h���p�g��Ƨ令�j�g��� 
    
    
    
    /* example 2 �]�p�@�ӵ{���AŪ�J�@�Ӫ��B�A��X
       �P�����B���ֵ̤w���ơC���]�w����
       50�B10�B5�M1���C*/
    int n;   
	   printf("Dollar? ");
       scanf("%d",&n);
       printf("$50=%d ",n/50);
       printf("$10=%d ",n%50/10);
       printf("$5=%d ",n%10/5);
       printf("$1=%d ",n%5); 
       return 0;


}
