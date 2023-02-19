/*函式運用:從多個整數中求最大值 

函式最大的好處是可以引用一些複雜或龐大的功能，而不需要再重新建構一次，
當main呼叫函式時，會將一些引數丟入函式計算，然後函數再回傳數值到main中 

*/ 

#include <stdio.h>

int max2(int,int);
int max3(int,int,int); //當函數寫在main迴圈的後面時，要先宣告 

int main(){
	
	int a,b,c;
	printf("enter three integers:",a,b,c);
	scanf("%d%d%d",&a,&b,&c);
	printf("the maxima integer is: %d",max3(a,b,c)); //從此處開始呼叫函數 ，並且依照位置把數值丟入函式的引數中計算 
	return 0;
} 

int max3(int a,int b,int c){  // 函數內的變數名稱不一定要和呼叫時的名稱一樣 
	return max2(max2(a,b),c); //由最內開始呼叫 
	
}

int max2(int a,int b){
	
	if (a>=b){
		return a;
	}
	
	else {
	return b;
    }
}
