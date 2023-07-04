#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int isVPS(char *s) {

    int len = strlen(s);
    int stack[MAX_LENGTH] = {0};  
    int top = -1;  

    for (int i = 0; i < len; i++) {
        if (s[i] == '(') {  
            stack[++top] = '(';
        } else if (s[i] == ')') {  
            if (top >= 0 && stack[top] == '(') { 
                top--;
            } else { 
                return 0; 
            }
        }
    }

    if (top == -1) { 
        return 1; 
    } else {
        return 0;  
    }
}

int main() {
    int T;
    char s[MAX_LENGTH];

    scanf("%d", &T);  // 테스트 데이터의 수

    for (int i = 0; i < T; i++) {
        scanf("%s", s);  // 괄호 문자열 입력
        int result = isVPS(s);
        if (result) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}