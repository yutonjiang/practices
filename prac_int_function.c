/*��²����{����Ƹ�:
      �w�������Ƭۥ[��30�A�ۭ���221�A�ըD�o��Ӿ�� 
      
*/ 

#include <stdio.h> 

int main(){

    int  a,b;
	
	for(a=1;a<=30;++a){
		for(b=1;b<=30;++b){
			if (a+b==30 && a*b==221){   //�p�G���Q�n���Ǭۤϵ��G�ۦP��a,b�i�H�h�]����a<=b,�]�i�H��a�q1���30/2=15,b�q30/2=15���30 
				printf("%d,%d\n",a,b);   
			}
		}
		
	} 

    return 0; 
} 

/*
    �g�k2 
	for(a=1;a<=30;++a){
        int b= 30-a;
		if(a*b==221){
		}
    }
*/ 
