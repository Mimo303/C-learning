//Type 3: Nested Structures
/*Question: Define a structure Date (day, month, year) and 
nest it inside Employee to store joining date.*/
#include<stdio.h>
struct date{
    int day;
    int month;
    int year;
};
struct employee{
    int id;
    char name[20];
    struct date joindate //nested 
};
int main(){
    struct employee e1;
    printf("Enter Id:"); scanf("%d",&e1.id);
    printf("Enter Name:"); scanf("%s",&e1.name);

    //accessing nested structure members using multiple dots

    printf("Enter Joining date(dd mm yyyy)");
    scanf("%d %d %d",&e1.joindate.day,&e1.joindate.month,&e1.joindate.year);

    //Output
    printf("\nEmployee Details:\n");
    printf("Id:%d\nName: %s\nJoined on:%d/%d/%d\n",
    e1.id,e1.name,e1.joindate.day,e1.joindate.month,e1.joindate.year);
}