// getche() . getch()��� 
#include<stdio.h>
#include<conio.h>

/* �Mscanf �ۤ� ,getch�i�H���ݭn��enter�N�ߧYŪ��
    getche����ܥX���G, getch�|��ܵ��G*/


int main(void){
	char c1,c2,c3,c4;
	printf("password=?\n");
	c1=getch();
	c2=getch();
	c3=getch();
	c4=getch();
	printf("your password is : %c%c%c%c",c1,c2,c3,c4);
	return 0;
}
