// �g�X�@�ӵ{���A�C�X10*4���y���A�ç���w���y�쥴�W*�� �A�y�������� 
#include<stdio.h>


int main(){
	int a,b;
	printf("�п�J�y��:");
	scanf("%d",&b);
	
	for (a=1;a<=40;a++)  
	{
		    
		if (a!=b) 
            printf("%02d ",a); // �Ĥ@��0��ܤ�����ɸɤW0�A�ĤG�ӼƦr2��ܿ�X�r�Ū��̤j��� 
        else
		    printf("%02d* ",a);    	
		if (a%10==0)	          //���X��F10�i��ɴ���@�� 
			printf("\n");
    }
    return 0;
	
	 
	
	
}
