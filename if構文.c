int main()
{
    int a,b,plus;
    
    printf("乗る人数を入力してください>>>");
    scanf("%d",&a);
    printf("追加で乗る人数を入力してください>>>");
    scanf("%d",&b);
    
    plus = a+b;
    
    if(a+b>100)
    {
        printf("イナバ物置は壊れてしまった。");
    }
    
    else
    {
        printf("イナバ物置に変化はみられない。");
    }
    return 0;
}