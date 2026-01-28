//Type 5: Passing Structure to Function
/*Question: Write a program to calculate the distance between 
two points using a structure and a function.*/
#include<stdio.h>
#include<math.h>
struct point{
    int x;
    int y;
};
//Function returning a float,taking structure as argument
float calculateDistance(struct point p1,struct point p2){
    return sqrt(pow(p2.x-p1.x,2) + pow(p2.y-p1.y,2));
}
int main(){
    struct point pointA,pointB;
    float dist;
    printf("Enter co-ordinates for Point A(x,y):");
    scanf(" %d %d",&pointA.x,&pointA.y);
    printf("Enter co-ordinates for Point B(x,y):");
    scanf(" %d %d",&pointB.x,&pointB.y);

    //passing structure to the function
    dist=calculateDistance(pointA,pointB);
    printf("Distance between A & B :%.2f\n",dist);
}