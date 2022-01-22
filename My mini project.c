#include<stdio.h>
#include<conio.h>
unsigned long amount1=5000;
unsigned long amount2=10000;
unsigned long amount3=15000;
unsigned long amount4=20000;
unsigned long deposite;
unsigned long withdraw;
int accountnumber;
int choice;
int pin;
int k;
int a;
char transaction ='y';
char yes='y';
char no='n';
 
 
void main()
{
    printf("ENTER YOUR 4-digit ACCOUNT NUMBER: ");
    scanf("%d",&accountnumber);
    if(accountnumber==1020)
    {
        printf("***WELCOME PERSON1****\n");
        while(pin !=1234)
        {
        printf("ENTER YOUR SECRET PIN NUMBER: ");
        scanf("%d",&pin);
        if(pin !=1234)
        printf("PLEASE ENTER VALID PASSWORD!!! \n");
        }
        do
            {
                printf("WELCOME TO ATM SERVICE\n");
                printf("1. CHECK BALANCE\n");
                printf("2. WITHDRAW CASH\n");
 
printf("3. DEPOSITE CASH\n");
                printf("4. PIN CHANGE\n");
                printf("5. QUIT");
                printf("***?******?\n\n");
                printf("ENTER YOUR CHOICE: ");
                scanf("%d",&choice);
                switch (choice)
                                {
                    case 1:
                        printf("\n YOUR BALANCE IS Rs : %lu",amount1);
                        break;
                    case 2:
                        printf("\n ENTER THE AMOUNT TO WITHDRAW: ");
                        scanf("%lu",&withdraw);
                        if(withdraw % 100 != 0)
                            {
                                printf("\n PLEASE ENTER THE AMOUNT IN MULTIPLES OF 100");
                            }
                        else if (withdraw>(amount1-500))
                            {
                                printf("\n INSUFFICENT BALANCE");
                            }
                        else
                            {
                                amount1 = amount1-withdraw;
                                printf("\n\n PLEASE COLLECT CASH");
                                printf("\n YOUR CURRENT BALANCE IS %lu",amount1);
                            }
                        break;
                    case 3:
                        printf("\n ENTER THE AMOUNT TO DEPOSITE: ");
                        scanf("%lu",&deposite);
                        if(deposite %100!=0)
                        {
                            printf("\n PLEASE ENTER THE AMOUNT IN MULTIPLES OF 100");
                        }
                        else
                        {
                           amount1 = amount1+deposite;
                           printf("YOUR BALANCE IS %lu",amount1);
                        }
                        break;
                    case 4:
                        printf("\n ENTER NEW PIN: ");
                        scanf("%d",&a);
                        pin=a;
                        printf("\n PIN CHANGED");
                         case 5:
                        printf("\n THANK YOU FOR USING ATM");
                        break;
                    default:
                        printf("\n INVALID CHOICE");
                }
                printf("\n\n\n DO YOU WISH TO HAVE ANOTHER TRANSACTION?(y/n): \n");
                fflush(stdin);
                scanf("%c",&transaction);
                if (transaction == 'n'|| transaction == 'N')
                    k=1;
            }
                while (!k);
                {
                    printf("\n DO LIKE THE ATM SERVICE?(y/n):\n");
                    scanf("%c",&yes);
                    printf("\n IS ATM IS CLEAN?(y/n):\n");
                    scanf("%c",&no);
                    printf("\n\n THANKS FOR USING OUT ATM SERVICE");
                }
    }
    else if(accountnumber==1234)
    {
        printf("***WELCOME PERSON2***\n");
         while(pin !=0000)
        {
        printf("ENTER YOUR SECRET PIN NUMBER: ");
        scanf("%d",&pin);
        if(pin !=0000)
        printf("PLEASE ENTER VALID PASSWORD!!! \n");
        }
        do
            {
                printf("WELCOME TO ATM SERVICE\n");
                printf("1. CHECK BALANCE\n");
                printf("2. WITHDRAW CASH\n");
                printf("3. DEPOSITE CASH\n");
                printf("4. PIN CHANGE\n");
                printf("5. QUIT");
                printf("***?******?\n\n");
                printf("ENTER YOUR CHOICE: ");
                scanf("%d",&choice);
                switch (choice)
                {
                    case 1:
                        printf("\n YOUR BALANCE IS Rs : %lu",amount2);
                        break;
                    case 2:
                        printf("\n ENTER THE AMOUNT TO WITHDRAW: ");
                        scanf("%lu",&withdraw);
                        if(withdraw % 100 != 0)
                            {
                                printf("\n PLEASE ENTER THE AMOUNT IN MULTIPLES OF 100");
                            }
                        else if (withdraw>(amount2-500))
                            {
                                printf("\n INSUFFICENT BALANCE");
                            }
                        else
                            {
                                amount2 = amount2-withdraw;
                                printf("\n\n PLEASE COLLECT CASH");
                                printf("\n YOUR CURRENT BALANCE IS %lu",amount2);
                            }
                        break;
                    case 3:
                        printf("\n ENTER THE AMOUNT TO DEPOSITE: ");
                        scanf("%lu",&deposite);
                        if(deposite %100!=0)
                        {
                            printf("\n PLEASE ENTER THE AMOUNT IN MULTIPLES OF 100");
                        }
                        else
                        {
                           amount2 = amount2+deposite;
                           printf("YOUR BALANCE IS %lu",amount2);
                        }
                        break;
                    case 4:
                        printf("\n ENTER NEW PIN: ");
                        scanf("%d",&a);
                        pin=a;
                        printf("\n PIN CHANGED");
                         break;
                    case 5:
                        printf("\n THANK YOU FOR USING ATM");
                        break;
                    default:
                        printf("\n INVALID CHOICE");
                }
                printf("\n\n\n DO YOU WISH TO HAVE ANOTHER TRANSACTION?(y/n): \n");
                fflush(stdin);
                scanf("%c",&transaction);
                if (transaction == 'n'|| transaction == 'N')
                    k=1;
                }
                while (!k);
                {
                    printf("\n DO LIKE THE ATM SERVICE?(y/n):\n");
                    scanf("%c",&yes);
                    printf("\n IS ATM IS CLEAN?(y/n):\n");
                    scanf("%c",&no);
                    printf("\n\n THANKS FOR USING OUT ATM SERVICE");
                }
    }
    else if(accountnumber==5555)
    {
        printf("***WELCOME PERSON3***\n");
         while(pin !=1111)
        {
        printf("ENTER YOUR SECRET PIN NUMBER: ");
        scanf("%d",&pin);
        if(pin !=1111)
        printf("PLEASE ENTER VALID PASSWORD!!! \n");
        }
        do
            {
                printf("WELCOME TO ATM SERVICE\n");
                printf("1. CHECK BALANCE\n");
                printf("2. WITHDRAW CASH\n");
                printf("3. DEPOSITE CASH\n");
                printf("4. PIN CHANGE\n");
                printf("5. QUIT");
                printf("***?******?\n\n");
                printf("ENTER YOUR CHOICE: ");
                scanf("%d",&choice);
                switch (choice)
                {
                    case 1:
                        printf("\n YOUR BALANCE IS Rs : %lu",amount3);
                        break;
                    case 2:
                        printf("\n ENTER THE AMOUNT TO WITHDRAW: ");
                        scanf("%lu",&withdraw);
                        if(withdraw % 100 != 0)
                            {
                                printf("\n PLEASE ENTER THE AMOUNT IN MULTIPLES OF 100");
                            }
                        else if (withdraw>(amount3-500))
                            {
                                printf("\n INSUFFICENT BALANCE");
                            }
                        else
                            {
                                amount3 = amount3-withdraw;
                                printf("\n\n PLEASE COLLECT CASH");
                                printf("\n YOUR CURRENT BALANCE IS %lu",amount3);
                            }
                        break;
                    case 3:
                        printf("\n ENTER THE AMOUNT TO DEPOSITE: ");
                        scanf("%lu",&deposite);
                        if(deposite %100!=0)
                        {
                            printf("\n PLEASE ENTER THE AMOUNT IN MULTIPLES OF 100");
                        }
                        else
                        {
                           amount3 = amount3+deposite;
                           printf("YOUR BALANCE IS %lu",amount3);
                        }
                        break;
                    case 4:
                        printf("\n ENTER NEW PIN: ");
                        scanf("%d",&a);
                        pin=a;
                        printf("\n PIN CHANGED");
                        break;
                    case 5:
                        printf("\n THANK YOU FOR USING ATM");
                        break;
                    default:
                        printf("\n INVALID CHOICE");
                }
                printf("\n\n\n DO YOU WISH TO HAVE ANOTHER TRANSACTION?(y/n): \n");
                fflush(stdin);
                scanf("%c",&transaction);
                if (transaction == 'n'|| transaction == 'N')
                    k=1;
                }
while (!k);
                {
                    printf("\n DO LIKE THE ATM SERVICE?(y/n):\n");
                    scanf("%c",&yes);
                    printf("\n IS ATM IS CLEAN?(y/n):\n");
                    scanf("%c",&no);
                    printf("\n\n THANKS FOR USING OUT ATM SERVICE");
                }
    }
    else if(accountnumber==4567)
    {
        printf("***WELCOME PERSON4***\n");
        while(pin !=4444)
        {
        printf("ENTER YOUR SECRET PIN NUMBER: ");
        scanf("%d",&pin);
        if(pin !=4444)
        printf("PLEASE ENTER VALID PASSWORD!!! \n");
        }
        do
            {
                printf("WELCOME TO ATM SERVICE\n");
                printf("1. CHECK BALANCE\n");
                printf("2. WITHDRAW CASH\n");
                printf("3. DEPOSITE CASH\n");
                printf("4. PIN CHANGE\n");
                printf("5. QUIT");
                printf("***?******?\n\n");
                printf("ENTER YOUR CHOICE: ");
                scanf("%d",&choice);
                switch (choice)
                {
                    case 1:
                        printf("\n YOUR BALANCE IS Rs : %lu",amount4);
                        break;
                    case 2:
                        printf("\n ENTER THE AMOUNT TO WITHDRAW: ");
                        scanf("%lu",&withdraw);
                        if(withdraw % 100 != 0)
                            {
                                printf("\n PLEASE ENTER THE AMOUNT IN MULTIPLES OF 100");
                            }
                        else if (withdraw>(amount4-500))
                            {
                                printf("\n INSUFFICENT BALANCE");
                            }
                        else
                            {
                                amount4 = amount4-withdraw;
                                printf("\n\n PLEASE COLLECT CASH");
                                printf("\n YOUR CURRENT BALANCE IS %lu",amount3);
                            }
                        break;
                    case 3:
                        printf("\n ENTER THE AMOUNT TO DEPOSITE: ");
                        scanf("%lu",&deposite);
                        if(deposite %100!=0)
                        {
                            printf("\n PLEASE ENTER THE AMOUNT IN MULTIPLES OF 100");
                        }
                        else
                        {
                           amount4 = amount4+deposite;
                           printf("YOUR BALANCE IS %lu",amount3);
                        }
                        break;
                    case 4:
                        printf("\n ENTER NEW PIN: ");
                        scanf("%d",&a);
                        pin=a;
                        printf("\n PIN CHANGED");
                        break;
                    case 5:
                        printf("\n THANK YOU FOR USING ATM");
                        break;
                    default:
                        printf("\n INVALID CHOICE");
                }
                printf("\n\n\n DO YOU WISH TO HAVE ANOTHER TRANSACTION?(y/n): \n");
                fflush(stdin);
                scanf("%c",&transaction);
                if (transaction == 'n'|| transaction == 'N')
                    k=1;
                }
while (!k);
                {
                    printf("\n DO LIKE THE ATM SERVICE?(y/n):\n");
                    scanf("%c",&yes);
                    printf("\n IS ATM IS CLEAN?(y/n):\n");
                    scanf("%c",&no);
                    printf("\n\n THANKS FOR USING OUT ATM SERVICE");
                }
    }
    else
    {
        printf("INVALID ACCOUNT NUMBER!!!!\n");
    }
}