#include<stdio.h>
struct datastruct{
    int i;
    char c;
    float f;
};
union dataunion{
    int i;
    char c;
    float f;
};
int main(){
    printf("Size of Stucture: %d bytes\n",sizeof(struct datastruct));
    printf("Size of Union:  %d bytes\n",sizeof(union dataunion));

    /*
    struct size= sum of all members(int+float+char)~ 12 bytes
    Union size= size of the largest member (float = 4 bytes)*/
}
