/*
    陣列(array)是一群相同資料型態的元素集合，也是一種資料型態
	在記憶體中，陣列會使用一段連續的記憶體空間來儲存 
	 形式:元素資料型態 陣列變數名稱[元素個數]={各個元素的值}  從0開始數起
	 陣列可以藉由初始化語法來決定元素的值，未被指定的元素默認為0
	 ex: A[3]:{0}  =  A[3]:{0,0,0}
	 在有初始化時陣列的元素個數可以省略，自動替換成初始化元素的個數
	 ex: A[]:{0,0,0,0}   此時[]內會自動定義為4 
	 
	 陣列的第一個用途: 取代多個變數定義
	             
	 練習 :用陣列統計骰子點數出現的次數
	 假設擲了6000次，試計算1~6出現的次數 

*/

#include <stdio.h>

int main(){
	srand(time(0));
	int count[6]={0};
	int i;
	for(i=1;i<=6000;++i){
		int dice =rand() %6 + 1;
		switch(dice){
			case 1: count[0]++;break;
			case 2: count[1]++;break;
			case 3:	count[2]++;break;
			case 4: count[3]++;break;
			case 5: count[4]++;break;
			case 6: count[5]++;break;
		}
	}
	printf("1:%d\n",count[0]);
    printf("2:%d\n",count[1]);
    printf("3:%d\n",count[2]);
    printf("4:%d\n",count[3]);
    printf("5:%d\n",count[4]);
    printf("6:%d\n",count[5]);
	return 0;
}



/*非陣列做法(使用亂數函式) 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(0));
    int coumt1= 0 ,count2= 0 ,count3= 0; //所有計數器歸零 
    int count4= 0 ,count5= 0 ,count6= 0;
    int i;
      for(i=1;i<=6000;i++){
         int dice = rand() % 6 +1;
         switch (dice){
            case 1 : count1++;break;
            case 2 : count2++;break;
            case 3 : count3++;break;
            case 4 : count4++;break;
            case 5 : count5++;break;
            case 6 : count6++;break;
        }
    }
    printf("1:%d\n",count1);
    printf("2:%d\n",count2);
    printf("3:%d\n",count3);
    printf("4:%d\n",count4);
    printf("5:%d\n",count5);
    printf("6:%d\n",count6);
}
*/ 
