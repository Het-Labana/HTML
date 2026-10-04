#include <stdio.h>
int main(){
    char ch;
    printf("Enter your num:");
    scanf("%c",&ch);
    int temp = (int)ch;
    if (temp>=65 && temp<=90){
        printf("capital");
    }else if(temp>=97 && temp<=122){
        printf("small");
    }
}
    