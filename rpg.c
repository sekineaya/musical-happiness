#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    
    int intelligence = (rand()%20) + 1;
    int stamina      = (rand()%20-intelligence) + 1;
    int charisma     = (rand()%20-intelligence- stamina ) + 1;
    
    printf("%d",intelligence);
    printf("%d",stamina);
    printf("%d",charisma); 
    
    if(intelligence>stamina&intelligence>charisma)
    {
        printf("mage");
    }
     
    if(stamina>intelligence&stamina>charisma)
    {
        printf("knight");
    }
    
    if(charisma>stamina&charisma>intelligence)
    {
        printf("thief");
    }
    
    return 0;
}
