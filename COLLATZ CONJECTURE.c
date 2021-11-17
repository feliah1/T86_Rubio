//Create a program that inputs any positive integer.
#include <stdio.h>
int main(){

unsigned int num, o_num, count;

printf("enter positive integer: ");
scanf("%d", &o_num);

num = o_num;

printf("Current given value is %u\n", num);

while(num > 1){
    if(num%2 > 0)
        num = 3*num + 1;
    else
        num /= 2;

    count += 1;
    printf("Current given value is %u\n", num);

    }
    printf("The value %u takes %u terms to converge to 1!\n", o_num, count);
return 0;
}
