/* �ʶǰꤤ�C�~����12�ӯZ�A�@�Z��50�ӤH
�ѩ�֤l�ƨC�~�C�Z���|���1�H�A���]�ǥͤT�~�ҷ|�Ǯɲ��~
�խp��N�~��Ǯդ@�@���h�־ǥ�*/

#include<stdio.h>

int main(){
	
	      int N,sum=0;
	      
	      printf("�п�J�~��:");
	      scanf("%d",&N);
	      
	      for(int c =1;c<=3;c++)
		  {
	    	  sum+= 12*(50 -(N-c));
			  	
		  }
	      printf("%d�~��@�@��%d��ǥ�",N,sum);
	      return 0;
} 
