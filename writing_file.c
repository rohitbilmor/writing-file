#include<stdio.h>
int main() {
    FILE *ptr;
    int number=45;
    ptr=fopen("writing.txt","w");
    fprintf(ptr,"the number is %d",number);
    fclose(ptr);
    return 0;
}
