#include<stdio.h>
#include<conio.h>
struct student{
    int rl;
    char nm[20];
    int m1;
    int m2;
    int m3;
    float t;
    int max_marks;
    float per;
};
void main(){
    struct student a;
    printf("Roll no:");
    scanf("%d",&a.rl);
    printf("Name:");
    scanf("%s",&a.nm);
    printf("Subject1_marks:");
    scanf("%d",&a.m1);
    printf("Subject2_marks:");
    scanf("%d",&a.m2);
    printf("Subject3_marks:");
    scanf("%d",&a.m3);
    printf("max_marks:");
    scanf("%d",&a.max_marks);
    a.t=a.m1+a.m2+a.m3;
    a.per=a.t/a.max_marks*100;

    printf("\n\t Details of student a:\n");

    printf("Roll no:%d",a.rl);
    printf("\nname:%s",a.nm);
    printf("\nsub1_marks:%d",a.m1);
    printf("\nSub2_marks:%d",a.m2);
    printf("\nSub3_marks:%d",a.m3);
    printf("\nTotal:%f",a.t);
    printf("\nper:%.2f",a.per);
}