#include <stdio.h>

/* int main()
{
    int age = 20;
    double price = 66.6;
    return 0;
} */

/* int main()
{
    short age = 20;
    int high = 180;
    float weight = 88.5;

    return 0;
} */

// 当全局变量（{}外部）与局部变量（{}内部）相同（二者可相同）时，局部优先
// 写一个代码，计算两个整数的和

int main()
{
    int num1 = 0;
    int num2 = 0;
    scanf("%d %d", &num1, &num2);
    int sum = num1 + num2;
    printf("%d\n", sum);
    return 0;

}