#include<stdio.h>
#include<math.h>
main()
{
    int n;
    printf("Please input the number : ");
    scanf_s("%d", &n);
    if (n% 2 == 0)
    {
        printf("n是一个偶数");
    }
    else
    {
        printf("n是个奇数");
    }
}