/*Write a C program to read temperature in centigrade and display a suitable message according to temperature state below.
Temp < 0 then Freezing weather
Temp 0-10 then Very Cold weather
Temp 10-20 then Cold weather
Temp 20-30 then Normal in Temp
Temp 30-40 then Its Hot
Temp >=40 then Its Very Hot*/

#include <stdio.h>

int main (){
  int temp;
    printf("Insert temperature here: ");
    scanf("%d", &temp);

    if (temp < 0) {
        printf("The weather is freezing today!");
}
    else if(temp >= 0 && temp <=10){
        printf("The weather is cold today!");
    }
    else if(temp >= 10 && temp <=20) {
        printf("The weather is fine today!");
    }
    else if(temp >= 30 && temp <=40) {
        printf("The weather is hot today!");
    }
    else if(temp >= 40) {
        printf("The weather is blazing hot today!");
    }
    return 0;
}
