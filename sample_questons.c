// 範例程式 
#include<stdio.h>


int main(){
    /* example 1 設計一個程式，讀入一個小寫字母，
     將其轉換成對應的大寫字母 */
    char c;
         printf("Char? ");
         scanf("%c",&c);
         printf("Upper %c is ",c);
         printf("%c\n",c-'a'+'A'); // 去掉小寫資料改成大寫資料 
    
    
    
    /* example 2 設計一個程式，讀入一個金額，找出
       同等金額的最少硬幣數。假設硬幣有
       50、10、5和1元。*/
    int n;   
	   printf("Dollar? ");
       scanf("%d",&n);
       printf("$50=%d ",n/50);
       printf("$10=%d ",n%50/10);
       printf("$5=%d ",n%10/5);
       printf("$1=%d ",n%5); 
       return 0;


}
