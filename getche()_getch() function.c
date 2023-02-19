// getche() . getch()函數 
#include<stdio.h>
#include<conio.h>

/* 和scanf 相比 ,getch可以不需要按enter就立即讀取
    getche不顯示出結果, getch會顯示結果*/


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
