/*�]�p�@�ӤE�c��{��,��J1~9����ơA�|�b��������l���X�{�ӼƦr
�ѥ��ܥk�A�ѤW�ӤU*/ 
#include <stdio.h>

int main(){
	    
	while(1){
		int n,r,c;
		printf("�п�J�Ʀr:");
		scanf("%d",&n);
		
		int row = (n-1)/3;     /*�]�� �N�ƦC-1�H��  0 3 6��n��%3=0���Ĥ@�C 1 4 7��%3=1���ĤG�C 2 5 8��%3=2���ĤT�C  ���W�����Y*/
		int column = (n-1)%3;
	    printf("*******\n");
	    
/*�a�V*/for (r=0;r<3;r++){ 
	        printf("*");
/*��V*/	for(c=0;c<3;c++){ 
		       if(r == row && c == column)
			      printf("%d",n);
		       else
		          printf(" "); 
			      printf("*");
		    }
	        printf("\n*******\n");			
      }
			
   }
   return 0;
} 
