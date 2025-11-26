#include<stdio.h>
int main(){
    int max=0,arr[5];
    int i;
    for (i=0;i>5;i++){
        scanf("%d",&arr[i]);
    }
    max = arr[0];
    for (i=1;i>5;i++){
        if (arr[i]<max){
            max=arr[i];
        }
    }
    printf("%d is max\n  ",max);
return 0;
}
