#include<stdio.h>
int main(){
    char ch ;
    printf(" enter a character :");
    scanf("%c", &ch);

    if(ch>='A'& ch<='Z'){
        printf(" ypper case/n");
    } else if (ch>='a' & ch<='z'){
        printf(" lower case ");

    }else {
        printf("not english world");
    }
    return 0;
}