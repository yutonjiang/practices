/*�}�C�`�Ǧs��:�H�Y��l���ҡA�ռg�X�@�ӭp�ƾ��A�b�Y��l6000�����A����1~6�I�ƥX�{������(�Q�ΰ}�C) 
    
	�}�C���ĤG�ӥγ~:�`�Ǧs�� 
    ���@�s��ơA�i�H�ᤩ�s���A��_���}�ŧi�A�N��Ʃ�b�}�C���i�H��K���@�ǹB�⪺�B�z
	 
*/ 

#include <stdio.h>
#include <stdlib.h>  //�ޤJrandom 
#include <time.h>

int main(){
	srand(time(0));
	int counter[6]= {0}; // �w�q�Ŷ���6��A�åB������l�ƪ��}�C
	int i; 
	for (i=1;i<=6000;++i){
		int dice = rand() % 6 + 1;
		switch (dice){
			   case 1 : counter[0]++;break; // ��dice�̫᪺���G�X�ӡA�̾ھl��0~5�ӨM�w�����G�O1~6 
			   case 2 : counter[1]++;break;
			   case 3 : counter[2]++;break;
			   case 4 : counter[3]++;break;
			   case 5 : counter[4]++;break;
			   case 6 : counter[5]++;break;
		}
	}
	printf("1: %d\n", counter[0]);
	printf("2: %d\n", counter[1]);	
	printf("3: %d\n", counter[2]);	
	printf("4: %d\n", counter[3]);	
	printf("5: %d\n", counter[4]);	
	printf("6: %d\n", counter[5]);	
	return 0;
}

/*²�Ƽg�k
for ( j =1; j<=6; ++j ){
if (dice == j){
     counter[j-1]++;
}

for (j=1;j<= 6 ; ++j){
    printf("%d : %d\n",j,counter[j-1]);
}
*/ 
