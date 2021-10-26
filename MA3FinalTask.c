#include <stdio.h>

int main () {
   int selection, payment, price, change;

   printf("////////////////////////////////////////////////\n");
   printf("/// Welcome to Fresh Drinks Vending Machine! ///\n");
   printf("////////////////////////////////////////////////\n");
   printf("\nWhat would you like to order?\n");
   printf("\n[1]Sprite (20)\n[2]Royal (25)\n[3] Coca-Cola (30)\n");
   printf("Choice: ");
   scanf("%d", &selection);

   switch(selection){

   case 1: price = 20;
   printf("Input Payment: ");
   scanf("%d", &payment);
      if(payment>=price){
        printf("You have successfuly purchased Pepsi.\n");
        change = payment - price;
        printf("\n============\n");
        printf("Change: %d", change);
        printf("\n============\n");
   }
      else{
         printf("\n============================\n");
         printf("Not enough funds to purchase!");
         printf("\n============================\n");
   }
      break;

   case 2: price = 25;
   printf("Input Payment: ");
   scanf("%d", &payment);
      if(payment>=price){
        printf("You have successfully purchased Royal.");
        change = payment - price;
        printf("\n============\n");
        printf("Change: %d", change);
        printf("\n============\n");
   }
      else{
         printf("\n============================\n");
         printf("Not enough funds to purchase!");
         printf("\n============================\n");
   }
      break;

   case 3: price = 30;
      printf("Input Payment: ");
      scanf("%d", &payment);
      if(payment>=price){
        printf("You have successfully purchased Coca-Cola.");
        change = payment - price;
        printf("\n============\n");
        printf("Change: %d", change);
        printf("\n============\n");
   }
      else{
         printf("\n============================\n");
         printf("Not enough funds to purchase!");
         printf("\n============================\n");
   }
      break;

      default:
          printf("\n===============\n");
          printf(" INVALID INPUT");
          printf("\n===============\n");
   }
   return 0;
}
