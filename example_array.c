/*
    �}�C(array)�O�@�s�ۦP��ƫ��A���������X�A�]�O�@�ظ�ƫ��A
	�b�O���餤�A�}�C�|�ϥΤ@�q�s�򪺰O����Ŷ����x�s 
	 �Φ�:������ƫ��A �}�C�ܼƦW��[�����Ӽ�]={�U�Ӥ�������}  �q0�}�l�ư_
	 �}�C�i�H�ǥѪ�l�ƻy�k�ӨM�w�������ȡA���Q���w�������q�{��0
	 ex: A[3]:{0}  =  A[3]:{0,0,0}
	 �b����l�Ʈɰ}�C�������Ӽƥi�H�ٲ��A�۰ʴ�������l�Ƥ������Ӽ�
	 ex: A[]:{0,0,0,0}   ����[]���|�۰ʩw�q��4 
	 
	 �}�C���Ĥ@�ӥγ~: ���N�h���ܼƩw�q
	             
	 �m�� :�ΰ}�C�έp��l�I�ƥX�{������
	 ���]�Y�F6000���A�խp��1~6�X�{������ 

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



/*�D�}�C���k(�ϥζüƨ禡) 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(0));
    int coumt1= 0 ,count2= 0 ,count3= 0; //�Ҧ��p�ƾ��k�s 
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
