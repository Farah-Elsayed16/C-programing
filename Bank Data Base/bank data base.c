#include<stdio.h>
#include <string.h>
#include"bank data base .h"
#define numnber_customers 2


int counter,i;
extern customer_t customer[numnber_customers];
void create_new_customer(void)
{
    if(counter>(numnber_customers-1))
        {
    printf("\nThe max number of customers is %i so you can not add anymore\n\n",numnber_customers);
        }
    else
        {
    fflush(stdin);
    printf("Enter the name of the customer[%i]:",counter+1);
    gets(customer[counter].name);
    printf("Enter the cash of the customer[%i]:",counter+1);
    scanf("%lf",&customer[counter].cash);
    fflush(stdin);
    printf("Enter the type of the customer[%i] (debit or cridet):",counter+1);
    gets(customer[counter].type);
    printf("Enter the ID of the customer[%i]:",counter+1);
    scanf("%i",&customer[counter].id);
    printf("\n");
    fflush(stdin);
    counter++;
        }
}
void print_customer_data()
{
    int id;
    printf("Enter the id of the customer that you want to print its data:");
    scanf("%i",&id);
    fflush(stdin);
    for(i=0;i<numnber_customers;i++)
    {
    if(id == customer[i].id)
    {
    printf("The name of the customer[%i] is %s\n",i+1,customer[i].name);
    printf("The cash of the customer[%i] is %0.2f\n",i+1,customer[i].cash);
    printf("The type of the customer[%i] is %s\n",i+1,customer[i].type);
    printf("The ID of the customer[%i] is %i\n\n",i+1,customer[i].id);
    break;
    }
    }
}

void edit_customer_data()
{
    int id;
    printf("Enter the id of the customer that you want to edit its data:");
    scanf("%i",&id);
    fflush(stdin);
    for(i=0;i<numnber_customers;i++)
    {
     if(customer[i].id == id)
     {
    printf("Enter the new name of the customer[%i]:",i+1);
    gets(customer[i].name);
    printf("Enter the new cash of the customer[%i]:",i+1);
    scanf("%lf",&customer[i].cash);
    fflush(stdin);
    printf("Enter the new type of the customer[%i] (debit or cridet):",i+1);
    gets(customer[i].type);
    printf("Enter the new ID of the customer[%i]:",i+1);
    scanf("%i",&customer[i].id);
    printf("\n");
    fflush(stdin);
    break;
     }
    }
}

void delete_customer_data()
{
    int id,j;
    printf("Enter the id of the customer that you want to delete its data:");
    scanf("%i",&id);
    fflush(stdin);
     for(i=0;i<numnber_customers;i++)
    {
     if(customer[i].id == id)
     {
         for(j=i;j<numnber_customers;j++)
         {
            customer[j]=customer[j+1];  //copy a structure to another structure as it have the same type
             /*
         strcpy(customer[i].name,customer[i+1].name);
         customer[i].cash=customer[i+1].cash;
         strcpy(customer[i].type,customer[i+1].type);
         customer[i].id=customer[i+1].id;*/
         }
         counter--;
         break;
     }
    }
}

void transfer_money()
{
    int source_id,destination_id,flag1=0,flag2=0;
    double money;
    printf("Enter the ID of the customer that will transfer money from his cash:");
    scanf("%i",&source_id);
    printf("Enter the ID of the customer that will transfer money to his cash:");
    scanf("%i",&destination_id);
  l1:  printf("How much money he will transfer:");
    scanf("%lf",&money);
     for(i=0;i<numnber_customers;i++)
    {
     if(customer[i].id == source_id)
     {
         if(money > customer[i].cash )
         {
             printf("The money transfered is greater than the cash\n");
             goto l1;
         }
         else
         {
            customer[i].cash -= money;
            flag1=1;
         }
     }
     if(customer[i].id == destination_id)
     {
         customer[i].cash += money;
         flag2=1;
     }
     if(flag1==1 && flag2==1)
     {
         break;
     }
    }
}
