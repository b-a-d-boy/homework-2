#include <stdio.h>
// find the max value among 3 input numbers
int main() { // ������ȱʧ������
    int num01, num02, num03; // ����Ϊʹ�ö��ŷָ�����
    printf("please input 3 integer numbers: "); // ���������
    scanf("%d %d %d", &num01, &num02, &num03); // ����˵�ַ��`&`��������ʽ
    int max = num01;
    if (max < num02) // ����ΪС�ں�
        max = num02; // ����Ϊ��ֵ�����
    if (max < num03) // ����ΪС�ں�
        max = num03; // ����Ϊ��ֵ�����
    printf("max in (%d, %d, %d) is %d\n", num01, num02, num03, max); // ����Ϊ��ʽ���������ȥ�������`&`
    return 0; // ����λ��
}
