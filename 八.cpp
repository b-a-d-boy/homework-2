#include <stdio.h>
int main() {
    int number,sum = 0,count = 0;//sum�洢�ܺ͡�count��¼���������������
    printf("��������������������0����:\n");
    while (1) 
	{
        scanf("%d", &number);
        if (number == 0) 
            break; // ����0ʱ��������
        sum += number; // �����ܺ�
        count++; // ����
    }
    if (count > 0) 
	{
        float average = (float)sum / count; // ����ƽ��ֵ
        printf("Sum is: %d, Aver is: %.1f\n", sum, average); // ����ܺͺ�ƽ��ֵ������1λС��
    }
	else 
        printf("û�������κ����֡�\n");
    return 0;
}
