#include<stdio.h>
int main(){
    FILE *fh_output; 

    fh_output=fopen("io.txt","w");

//1st way to input
    fputs(" A string\n",fh_output);
    fputs("123",fh_output);
    fputs("ABC\n",fh_output);

//2nd way to input
     int data=12; 
    fprintf(fh_output,"data: %d\n", data);

    

    fclose(fh_output);

    return 0;


}