#include <stdio.h>

int main()
{
    int diff;
    char large;//大文字
    char small;//小文字
    
    printf("アルファベットの小文字を入力してください>>>");
    scanf("%c",&small);
    diff='A'-'a';
    //printf("%d", diff);
    large = small + diff;
    
    printf("小文字は%c 大文字は%c\n",small,large);
   
    return 0;
}