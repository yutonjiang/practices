//  �E�E���k��
#include <stdio.h>


int main(){
    int N = 1;
	
	printf("��J���k������:");
	scanf("%d",&N);
	
	for (int a=1;a<=N;a++) // �a�V��X 
	{
		    printf("\n");
		    
		for (int b=1;b<=N;b++) // ��V��X 
            
			printf("%d*%d=%d\t",a,b,a*b);
           
    }
    return 0;
		
	 
} 
/*�]�i�H�g���@��for���j��
int c
for(c=1;c<=72;++c){
   int i =(c-1)/9+2  ( 2,2,2,...)
   int j =(c-1)%9+1  ( 1,2,3,...)
   printf("%d*%d=%d\n",i,j,i*j);
}
*/ 
