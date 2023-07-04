#include <stdio.h>

int main(){

    int stack[100000];
    int top = -1;
    int K, num;

    scanf("%d", &K);

    for(int i=0; i<K; i++){
        scanf("%d", &num);

        if(num==0){
            top--;
        }else{
            stack[++top] = num;
        }
    }

    int sum = 0;

    for(int i=0; i<=top; i++){
        sum += stack[i];
    }

    printf("%d",sum);

return 0;
}