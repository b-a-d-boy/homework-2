#include <stdio.h>
// find the max value among 3 input numbers
int main() { // 修正了缺失的括号
    int num01, num02, num03; // 修正为使用逗号分隔变量
    printf("please input 3 integer numbers: "); // 添加了引号
    scanf("%d %d %d", &num01, &num02, &num03); // 添加了地址符`&`并修正格式
    int max = num01;
    if (max < num02) // 修正为小于号
        max = num02; // 修正为赋值运算符
    if (max < num03) // 修正为小于号
        max = num03; // 修正为赋值运算符
    printf("max in (%d, %d, %d) is %d\n", num01, num02, num03, max); // 修正为格式化输出，并去掉多余的`&`
    return 0; // 保持位置
}
