#include <stdio.h>
#include <stdlib.h>
#define numnber_customers 2
#include"bank data base .h"

customer_t customer[numnber_customers];
int main()
{
    char choice;
   while(choice != '6')
    {
    fflush(stdin);
    printf("Please select one of the following options:\n\npress [1] to create a new customer\npress [2] to edit customer\npress [3] to delete customer\n"
        "press [4] to print customer data\npress [5] to transter money from customer to another\npress [6] to exit\n\nenter your choice:");
    scanf("%c",&choice);
    fflush(stdin);
    switch(choice)
    {
    case '1':
        create_new_customer();
        break;
    case '2':
        edit_customer_data();
        break;
    case '3':
        delete_customer_data();
        break;
    case '4':
        print_customer_data();
        break;
    case '5':
        transfer_money();
        break;
    case '6':
         printf("Thanks!!\n");
         break;
    default :
        printf("wrong choice try again!!\n\n");
        break;
    }
    }
    return 0;
}


