/*�]�p�@�ӵ{���A�p��Ӧ~�O�_�ݱo�쫢�p�k�P�A���p�k�P�g����75�~
�A�w��1986�~�i�����p�k�P�A�褸�e�h���P�_*/ 

#include<stdio.h>

int main(){
	
       int a,b;
	   
	   printf("�п�J�褸�~��:");
	   scanf("%d",&a);
	   	if (a>1986)
			b = a-1986;
		else 
		    b= 1986 -a;
	   	if (b%75==0)
	   {
	   	   printf("�Ӧ~�ݱo�����p�k�P"); 
	   }	
	   else 
	   {
	   	   printf("�Ӧ~�ݤ������p�k�P");
		} 
       
	   return 0;
	
	
	
}
