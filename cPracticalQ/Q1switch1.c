//days of week
#include<stdio.h>
int main(){
    int weekno;
    printf("Enter:\n1-(mon)\n2-(tue)\n3-(wed)..\n");
    scanf("%d",&weekno);
    switch(weekno){
        case 1:
        printf("Monday");
        break;
        case 2:
        printf("Tuesday");
        break;
        case 3:
        printf("Wednesday");
        break;
        case 4:
        printf("Thursday");
        break;
        case 5:
        printf("friday");
        break;
        case 6:
        printf("saturday");
        break;
        case 7:
        printf("Sunday");
        break;
        default:
        printf("Something wrong!!");
        break;
    }
}