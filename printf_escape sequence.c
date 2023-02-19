#include<stdio.h>
char c1 = 'a'; /* 宣告字元變數c1並設值為'a' */
char c2 = '\a'; /* 響鈴 */
char c3 = '\''; /* 單引號 */
char c4 = '\b'; /* 倒退鍵 */

// %c為字元變數輸入 %d 為整數變數輸入 %f為浮點數變數輸入 %e為科學記號輸入  %p為資料位址輸入 
int main(){
    printf("%c is a character\n",c1);
    printf("Alarm!%c\n",c2);
    printf("\'a\' = %ca%c;\n",c3,c3);
    //printf("My score is 100%c.",c4);
    
    double d = 1234.5678;
    printf("%.0f\n", d );  // 顯示小數0位，會四捨五入 
    printf("%d\n", (int)d ); //只看整數部分，因此結果會是1234 
    printf("%e\n",d);
}
