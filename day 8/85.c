#include<stdio.h>
int main(){
    int a=20;
    int*p=&a;
    printf("a=%d\n",a);
    printf("8p=%d\n",*p);
    printf("*(&a)=%d\n",*(&a));
    printf("p=%p\n",p);
    printf("*(&p)=%p\n",*(&p));
}