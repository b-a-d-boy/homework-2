#include <stdio.h>
int main() {
    int number,sum = 0,count = 0;//sum存储总和。count记录输入的整数数量。
    printf("请输入任意整数，输入0结束:\n");
    while (1) 
	{
        scanf("%d", &number);
        if (number == 0) 
            break; // 输入0时结束输入
        sum += number; // 计算总和
        count++; // 计数
    }
    if (count > 0) 
	{
        float average = (float)sum / count; // 计算平均值
        printf("Sum is: %d, Aver is: %.1f\n", sum, average); // 输出总和和平均值，保留1位小数
    }
	else 
        printf("没有输入任何数字。\n");
    return 0;
}
