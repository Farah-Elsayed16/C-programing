typedef struct customer
{
    char name[50];
    double cash;
    char type[7];
    int id;
}customer_t;

void create_new_customer(void);
void print_customer_data();
void edit_customer_data();
void delete_customer_data();
void transfer_money();


