#include<stdio.h>
char c1 = 'a'; /* �ŧi�r���ܼ�c1�ó]�Ȭ�'a' */
char c2 = '\a'; /* �T�a */
char c3 = '\''; /* ��޸� */
char c4 = '\b'; /* �˰h�� */

// %c���r���ܼƿ�J %d ������ܼƿ�J %f���B�I���ܼƿ�J %e����ǰO����J  %p����Ʀ�}��J 
int main(){
    printf("%c is a character\n",c1);
    printf("Alarm!%c\n",c2);
    printf("\'a\' = %ca%c;\n",c3,c3);
    //printf("My score is 100%c.",c4);
    
    double d = 1234.5678;
    printf("%.0f\n", d );  // ��ܤp��0��A�|�|�ˤ��J 
    printf("%d\n", (int)d ); //�u�ݾ�Ƴ����A�]�����G�|�O1234 
    printf("%e\n",d);
}
