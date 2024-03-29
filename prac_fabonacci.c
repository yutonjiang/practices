/*
   函式遞迴: 求上樓梯的方法數
   假設一次只走一階或兩階樓梯，試求走到第n階時一共有幾種走法(利用函式遞迴) 


   例: 走到第1層有 1   =1種走法
           第2層有 1,1 / 2  =2種走法
		   第3層有 1,1,1 / 1,2 /2,1  =3種走法
		   第4層有 1,1,1,1 / 1,1,2 / 2,1,1 / 1,2,1 / 2,2  =5種走法等等 
		   
	解法 :此種規律是費式數列 -> a(1) =1 a(2) =2 a(3) = a(2)+a(1)  a(4) = a(3)+a(4) ... 
*/ 
int a(int);

#include <stdio.h>

int main(){
	int n;
	printf("n=");
	scanf("%d",&n);
	printf("%d\n",a(n));
	return 0;
}

int a(int n){
	if(n<=2){
		return 2;
	}
	return a(n-1)+a(n-2);
}
