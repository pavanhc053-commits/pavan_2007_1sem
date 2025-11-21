#include <stdio.h>
int main()
{
    int a;
    printf("print number until:");
    scanf("%d", &a);
    int i = 1;
    do
    {
        printf("%d \n", i);
        i++;
    } while (i <= a);
}