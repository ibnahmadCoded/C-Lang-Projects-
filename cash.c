#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float change; 
    
    do
    {
      change = get_float("Change owed: ");  
    }
    
    while (change < 0 || change == 0);
    
    int changed = round(change * 100);
    
    int count = 0;
    
    if (changed / 25 > 0)
    {
        count += (changed - (changed % 25)) / 25;
        changed = changed % 25;
    }
    
    if (changed / 10 > 0)
    {
        count += (changed - (changed % 10)) / 10; 
        changed = changed % 10;
    }
    
    if (changed / 5 > 0)
    {
        count += (changed - (changed % 5)) / 5; 
        changed = changed % 5;
    }
    
    if (changed > 0)
    {
        count += changed;
        changed = changed - changed;
    }
    
    printf("I have %i coin(s)\n", count);

}
