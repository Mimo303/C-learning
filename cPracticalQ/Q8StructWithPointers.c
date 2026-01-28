//Type 4: Structures with Pointers (The Arrow Operator ->)
//Question: Access structure members using a pointer to the structure.
#include<stdio.h>
struct product{
    int p_id;
    char p_name[20];
    float price;
};
int main(){
    struct product p1={101,"Laptop",55000.50};
    struct product *ptr; //pointer to structure

    ptr=&p1; //store address of p1
    //accessing members using arrow operator(->)
    //Note: ptr-> = (*ptr).id

    //output
    printf("Product Id: %d\n",ptr->p_id);
    printf("Product name: %s\n",ptr->p_name);
    printf("Price: %.2f",ptr->price);
}