#include <stdio.h>

/* int main()
{
    const int a = 10;
    // 在C语言中，const修饰的a，本质是变量，但不能被修改，有常量属性
    a = 20;
    printf("%d\n", a);
    return 0;
} */


/* int main()
{
    const int n = 10;
    int arr[n] = {0};
    return 0;
} */

/* #define MAX 100
#define STR "abcdef"
int main()
{
    printf("%d\n", MAX);
    int a = MAX;
    printf("%d\n", a);
    printf("%s\n", STR);

    return 0;
} */

// 枚举常量
// 三原色
/*  enum Color
{
    RED,
    GREEN,
    BLUE
};
int main()
{
    int num = 10;
    enum Color c = RED;

    return 0;
} 
// 性别
enum Sex
{
    MALE,
    FEMALE,
    SECRET
};
int main()
{
    int num = 10;
    enum Sex c = FEMALE;

    return 0;
} */

// 字符串
// C语言中没有字符串类型
// int main()
// {
//     char arr1[] = "abcdef";
//     char arr2[] = {'a','b','c','d','e','f','\0'};
//     // printf("%s\n",arr1);
//     // printf("%s\n",arr2);

//     // 求一个字符串长度的函数，string length  头文件 string.h
//     printf("%d\n", strlen(arr1));
//     printf("%d\n", strlen(arr2));
//     return 0;
// }


// 在字符串中，\0是终止的意思
// √ \?在书写连续多个问号时使用，防止他们被解析成三字母词（现在已经不用了）
// √ \'用于表示字符常量
// √ \"用于表示一个字符串内部的双引号
// √ \\用于表示一个反斜杠，防止他被解释为一个转义序列符
//   \a警告字符，蜂鸣
//   \b退格符
//   \f进纸符
// √ \n换行
// √ \r回车
// √ \t水平制表符
//   \v垂直制表符
// √ \ddd ddd表示1~3个八进制的数字，如、130 X
// √ \xdd dd表示2个十六进制的数字，如、x30 0

// %d - 打印整型
// %c - 打印字符
// %s - 打印字符串
// %f - 打印float类型的数据
// %lf - 打印double类型的数据
// %zu - 打印sizeof的返回值


/* int main()
{
    // printf("abc\tdef");
    printf("%d\n", strlen("c:\test\628\test.c"));
    // 转义字符算一个字符
    // \62同“\ddd ddd表示1~3个八进制的数字”
    // 八进制数字为0~7
    return 0;
} */

/* int main()
{
    int input = 0;
    printf("加入比特\n");
    printf("要好好学习吗(1/0）?");
    scanf("%d", &input);

    if (input == 1)
    {
        printf("好offer\n");
    
    }
    else
    {
        printf("卖红薯\n");
    
    }

    return 0;

} */

int main()
{
    int line = 0;
    printf("加入比特\n");

    while (line<20)
    {
        printf("写代码:%d\n", line);
        line++;
    }
    if (line >= 20) 
    {
        printf("好offer\n");
    }
    else
    {
        printf("继续加油\n");
    }

    return 0;
} 