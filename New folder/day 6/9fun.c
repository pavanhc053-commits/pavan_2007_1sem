#include<stdio.h>
int add (int num1,int num2);
int main(){
    int res1=add(4,5);
    int res2=(10,20);
    int res3=add(30,40);
    int res4=add(50,90);
    printf("res1:%d\n",res1);
    printf("res2:%d\n",res2);
    printf("res3:%d\n",res3);
    printf("res4:%d\n",res4);

}
int add (int num1,int num2){
    return num1+num2;
}
