#include <stdio.h>

int main()
{
    int a,b;
    
    printf("乗る人数を入力してください>>>");
    scanf("%d",&a);
    printf("乗るスピードは何キロですか？>>>");
    scanf("%d",&b);
    
    
    if(a>100)
    {
        printf("イナバ物置は壊れてしまった。");
    }
    
    else if(b>=300)
    {
        printf("イナバ物置はへこんでしまった。");  
    }

    
    else
    {
        printf("イナバ物置に変化はみられない。");
    }
    return 0;
}