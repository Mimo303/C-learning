// count no. of odd and even number by taking user input  using while loop 
#include<stdio.h>
#include<conio.h>
int main(){
    int num;
    int counteven=0;
    int countodd=0;
    printf("Enter the num: ");
    scanf("%d",&num);
    while(num>=1){
        if(num%2==0){
            counteven+=1;
        }else{
            countodd+=1;
        }
        num--;
    }
    
    printf("%d total even number>>>\n",counteven);
    printf("%d total odd nuumbers>>>\n",countodd);
    
    
    
}  