/*�@�ئB�N�O��3�ؤf��(1,2,3)�A�@���R3�y�A�p�G3�y�f���ۦP���5��
��y�f���ۦP���3���A�Эp��̫᪺�`�����O�h�� (1->$10 2->$10 3->$12)
�H�ƦC(a,b,c)��ܦU�ؤf�����ƶq*/

#include<stdio.h>

main(){
	
	int a,b,c;
	printf("���ѷQ�R�ƻ�f���O?");
	scanf("%d %d %d",&a,&b,&c);
	
	int m =10*a+10*b+12*c;
	if ( (a==2) || (b==2) || (c==2) )
	{
	
	   m = m-3;
	   printf("�@�@ %d ��",m);
    }
	else if ( (a==3) || (b==3) || (c==3) ) 
	{
	
	   m = m-5;
	   printf("�@�@ %d ��",m);
    }
    else  
	{
	      printf("�@�@ %d ��",m);
    }
	return 0;
	
	
	
} 
