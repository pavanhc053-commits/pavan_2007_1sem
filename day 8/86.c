#include<stdio.h>
int main(){
    int a=10;
    int*ptr = &a;
    int **ptr2 = &ptr;
    int ***ptr3 = &ptr2;
    printf("value of s using ptr2:%d",**ptr2);
}