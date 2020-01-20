#include <stdio.h>
#include <cs50.h>

int main (void)
{
    long int card_number = get_long("Card Number: ");
    
    int count = 0;
    
    long int control_card = card_number;
    
    long int luhn_card = card_number;
    
    while (card_number != 0){
        
        count++;
        
        card_number = card_number / 10;
            
    }    
    
    if (count == 15)
    {
        for (int i = 0; i < 13; i++)
        {
            control_card = control_card / 10;
            
        }
        
        if (control_card == 34 || control_card == 37)
        {
            //check the card using luhn's algorithm
            //multiply every other number by two starting with second to the last
            //find the numbers to be added!
            int a1 = (luhn_card % 1000000000000000) / 100000000000000;
            //Sum the digits of the multiplies together!
            int m1 = (((((luhn_card % 100000000000000) / 10000000000000) * 2) % 100) / 10) + (((((luhn_card % 100000000000000) / 10000000000000) * 2) % 10) / 1);
            int a2 = (luhn_card % 10000000000000) / 1000000000000;
            int m2 = (((((luhn_card % 1000000000000) / 100000000000) * 2) % 100) / 10) + (((((luhn_card % 1000000000000) / 100000000000) * 2) % 10) / 1); 
            int a3 = (luhn_card % 100000000000) / 10000000000;
            int m3 = (((((luhn_card % 10000000000) / 1000000000) * 2) % 100) / 10) + (((((luhn_card % 10000000000) / 1000000000) * 2) % 10) / 1);
            int a4 = (luhn_card % 1000000000) / 100000000;
            int m4 = (((((luhn_card % 100000000) / 10000000) * 2) % 100) / 10) + (((((luhn_card % 100000000) / 10000000) * 2) % 10) / 1);
            int a5 = (luhn_card % 10000000) / 1000000;
            int m5 = (((((luhn_card % 1000000) / 100000) * 2) % 100) / 10) + (((((luhn_card % 1000000) / 100000) * 2) % 10) / 1);
            int a6 = (luhn_card % 100000) / 10000;
            int m6 = (((((luhn_card % 10000) / 1000) * 2) % 100) / 10) + (((((luhn_card % 10000) / 1000) * 2) % 10) / 1);
            int a7 = (luhn_card % 1000) / 100;
            int m7 = (((((luhn_card % 100) / 10) * 2) % 100) / 10) + (((((luhn_card % 100) / 10) * 2) % 10) / 1);
            int a8 = (luhn_card % 10) / 1;
            
            //Find the sum of everything
            int result = a1 + m1 + a2 + m2 + a3 + m3 + a4 + m4 + a5 + m5 + a6 + m6 + a7 + m7 + a8;
            
            //check card's validity, i.e if result of sums ends with 0!
            if ((result % 10) == 0) 
            {
                printf("AMEX\n");
            }
            else
            {
                printf("INVALID\n");
            }
        }
        
        else
        {
            printf("INVALID\n");
        }
        
    }
    
    else if (count == 16)
    {
        for (int i = 0; i < 14; i++)
        {
            control_card = control_card / 10;  
        }
        
        long int visa_number = control_card / 10;
        
        int m1 =  (((((luhn_card % 10000000000000000) / 1000000000000000) * 2) % 100) / 10) + (((((luhn_card % 10000000000000000) / 1000000000000000) * 2) % 10) / 1);
        int a1 = (luhn_card % 1000000000000000) / 100000000000000; 
        int m2 = (((((luhn_card % 100000000000000) / 10000000000000) * 2) % 100) / 10) + (((((luhn_card % 100000000000000) / 10000000000000) * 2) % 10) / 1);
        int a2 = (luhn_card % 10000000000000) / 1000000000000;
        int m3 = (((((luhn_card % 1000000000000) / 100000000000) * 2) % 100) / 10) + (((((luhn_card % 1000000000000) / 100000000000) * 2) % 10) / 1);
        int a3 = (luhn_card % 100000000000) / 10000000000;
        int m4 = (((((luhn_card % 10000000000) / 1000000000) * 2) % 100) / 10) + (((((luhn_card % 10000000000) / 1000000000) * 2) % 10) / 1);
        int a4 = (luhn_card % 1000000000) / 100000000;
        int m5 = (((((luhn_card % 100000000) / 10000000) * 2) % 100) / 10) + (((((luhn_card % 100000000) / 10000000) * 2) % 10) / 1);
        int a5 = (luhn_card % 10000000) / 1000000;
        int m6 = (((((luhn_card % 1000000) / 100000) * 2) % 100) / 10) + (((((luhn_card % 1000000) / 100000) * 2) % 10) / 1);
        int a6 = (luhn_card % 100000) / 10000;
        int m7 = (((((luhn_card % 10000) / 1000) * 2) % 100) / 10) + (((((luhn_card % 10000) / 1000) * 2) % 10) / 1);
        int a7 = (luhn_card % 1000) / 100;
        int m8 = (((((luhn_card % 100) / 10) * 2) % 100) / 10) + (((((luhn_card % 100) / 10) * 2) % 10) / 1);
        int a8 = (luhn_card % 10) / 1;
        
        //calculate the result 
        
        int result = m1 + a1 + m2 + a2 + m3 + a3 + m4 + a4 + m5 + a5 + m6 + a6 + m7 + a7 + m8 + a8;
        
        if (control_card == 51 || control_card == 52 || control_card == 53 || control_card == 55 || control_card == 55)
        {
            //check card's validity, i.e if result of sums ends with 0!
            if ((result % 10) == 0) 
            {
                printf("MASTERCARD\n");
            }
            else
            {
                printf("INVALID\n");
            }
        }
        
        else if (visa_number == 4)
        {
            //check card's validity, i.e if result of sums ends with 0!
            if ((result % 10) == 0) 
            {
                printf("VISA\n");
            }
            else
            {
                printf("INVALID\n");
            }
        }
        
        else
        {
            printf("INVALID\n");
        }
    }
    
    else if (count == 13)
    {
        for (int i = 0; i < 12; i++)
        {
            control_card = control_card / 10;  
        }
        
        if (control_card == 4)
        {
            //check the card using luhn's algorithm
            //multiply every other number by two starting with second to the last
            //find the numbers to be added!
            int a1 = (luhn_card % 10000000000000) / 1000000000000;
            //Sum the digits of the multiplies together!
            int m1 = (((((luhn_card % 1000000000000) / 100000000000) * 2) % 100) / 10) + (((((luhn_card % 1000000000000) / 100000000000) * 2) % 10) / 1);
            int a2 = (luhn_card % 100000000000) / 10000000000;
            int m2 = (((((luhn_card % 10000000000) / 1000000000) * 2) % 100) / 10) + (((((luhn_card % 10000000000) / 1000000000) * 2) % 10) / 1);
            int a3 = (luhn_card % 1000000000) / 100000000;
            int m3 = (((((luhn_card % 100000000) / 10000000) * 2) % 100) / 10) + (((((luhn_card % 100000000) / 10000000) * 2) % 10) / 1);
            int a4 = (luhn_card % 10000000) / 1000000;
            int m4 = (((((luhn_card % 1000000) / 100000) * 2) % 100) / 10) + (((((luhn_card % 1000000) / 100000) * 2) % 10) / 1);
            int a5 = (luhn_card % 100000) / 10000;
            int m5 = (((((luhn_card % 10000) / 1000) * 2) % 100) / 10) + (((((luhn_card % 10000) / 1000) * 2) % 10) / 1);
            int a6 = (luhn_card % 1000) / 100;
            int m6 = (((((luhn_card % 100) / 10) * 2) % 100) / 10) + (((((luhn_card % 100) / 10) * 2) % 10) / 1);
            int a7 = (luhn_card % 10) / 1;
            
            int result = a1 + m1 + a2 + m2 + a3 + m3 + a4 + m4 + a5 + m5 + a6 + m6 + a7;
            
            //check card's validity, i.e if result of sums ends with 0!
            if ((result % 10) == 0) 
            {
                printf("VISA\n");
            }
            else
            {
                printf("INVALID\n");
            }
        }
        
        else
        {
            printf("INVALID\n");
        }
    }
    
    else 
    {
        printf("INVALID\n");
    }
    
}
