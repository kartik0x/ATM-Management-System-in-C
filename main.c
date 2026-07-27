#include <stdio.h>
int main ()
{
    int atmpin;
    int attempts = 0;
    int choice;
    int balance = 1000;
    int amount;

   
    {
        printf("Enter Your 4 Digit Pin: ");
        scanf("%d", &atmpin);

        if (atmpin == 1234) 
         while ( attempts < 3)
        {
          printf("Correct Pin Login Succesfully ✅.\n");
            printf("====================\n");
            printf("      ATM MENU\n");
            printf("Enter Your Choise:\n ");
            printf("====================\n"); 
            printf("1. Balance\n");
            printf("2. Deposit\n");
            printf("3. Withdraw\n");
            printf("4. Exit\n");  
            
            printf("Type Choise Number: ");
            scanf("%d", &choice);
            

            switch(choice)
            {
                case 1:
                    printf("Your Balance is $%d\n", balance);
                    break;
               case 2:
                    printf("Enter Amount To Deposit: ");
                    scanf("%d", &amount);

                     if (amount > 0)
                {
                    balance += amount;
                     printf("✅ Amount Deposited Successfully\n");
                    printf("Your Updated Balance is $%d\n", balance);
                 }
                 else
                     {
                        printf("❌ Invalid Amount! Please Enter A Valid Amount.\n");
                         }

                         break;

                    break;
                case 3: 
                    printf("Enter Amount To Withdraw: ");
                    scanf("%d", &amount);
                    if (amount <= 0)
                    {
                        printf("❌ Invalid Amount! Please Enter A Valid Amount.\n");
                    } else if(amount > balance)
                    {
                        printf("Insufficient Balance ❌.\n");
                    }
                    else
                    { 
                        balance -= amount;
                        printf("Amount Withdrawn Successfully ✅\n");
                        printf("Your Updated Balance is $%d\n", balance);
                        
                    }
                   
                    
                    
                    break;
                case 4:
                    printf(" Thank You For Using Our ATM\n");
                    return 0;
                default:
                    printf("Invalid Choice!\n");
            }
        }
        else
        {  attempts++;
            printf(" Wrong Pin Please Try Again ❌.\n");
        }
           
    }
    if ( attempts == 3)
    {
        printf("🚫Account Blocked.\n");
    }
    return 0;
}


