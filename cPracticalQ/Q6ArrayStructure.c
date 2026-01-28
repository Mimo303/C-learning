//Type 2: Array of Structures (Very Important)
//Write a program to read details of 5 students (Roll No, Name, Marks) 
//and print the list of students who scored more than 80%.

#include<stdio.h>
struct student{
    int roll;
    char name[30];
    float marks;

};
int main(){
    struct student s[5]; //array of structure variable
    int i;
    //inputs
    for(i=0;i<5;i++){
        printf("Enter details for student %d:\n",i+1);
        printf("Roll:"); scanf("%d",&s[i].roll);
        printf("name:");scanf("%s",&s[i].name);
        printf("Marks:"); scanf("%f",&s[i].marks);
    }
    //Output
    printf("\n----- Students with 80%% marks---\n");
    for(i=0;i<5;i++){
        if(s[i].marks>80.0){
            printf("Roll:%d, Name: %s ,Marks: %.2f\n",s[i].roll,s[i].name,s[i].marks);
        }
    }


}