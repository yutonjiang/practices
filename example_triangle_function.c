/*�禡�B��: �Q�Ψ禡ø�s�Ÿ��T���� 
         
   �Q�Ψ禡�⤾�����\��Ӹ`���main�H�~�A�i�H��t�Ϊ��F�ѹB�@�L�{      
   �����W�]���e�� 
         
*/
void print_stars(int i);
void print_triangle(int n);

#include<stdio.h> 

int main(){
	int n;
	printf("n=?\n",n);
	scanf("%d",&n);
	print_triangle(n);
	return 0;
}

void print_triangle(int n){
	
	int i;
	for(i=1;i<=n;++i){
		print_stars(i); //�I�s�禡 
		printf("\n");
	}
}

void print_stars(int i){ //���Ƥ��ݭn�^�ǭȮɦA�}�Y�ϥ�void�A�P�ɤ]�i�H�٥hreturn 
	int j;
	for(j=1;j<=i;++j){
		printf("*");
	}
	
}
