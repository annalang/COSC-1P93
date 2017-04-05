// piggy.c
// Finds the number of cents and dollars from change
// Anna Lang (5839881) APCO 1P93, Assignment 1, Questions 2

#include <stdio.h>

int main() {
  int n;                // used for nickels
  int d;                // used for dimes
  int q;                // used for quarters
  int centsTotal;       // total amount in cents
  int totalDollars;     //total amount in dollars
  int final;            // cents left
  int amtLeft;          // amount left after quarter
  int leftover;         //any remainer after nickles
  
  
  // Asking for the number of nickles
  // reading the number of nickles
 
  printf("Enter the # of the nickles: ");
  scanf("%d",&n);

  // Asking for the number of dimes
  // reading the number of dimes
 
  printf("Enter the # of dimes: ");
  scanf("%d",&d);
  
  // Asking for the number of quarters
  // reading the number of quarters
 
  printf("Enter the # of quarters: ");
  scanf("%d",&q);
  
  // find the total amount in cents
   
  centsTotal= (n*5) + (d*10) + (q*25);
  
  // print the results for amount in cents
  
  printf("The piggy bank contains %d cents.\n",centsTotal);

  // find the total amount in dollars
   
  totalDollars = centsTotal/100;
  
  final = centsTotal - (totalDollars*100) ;
  
  // this is the total amount in dollars 
   
  printf("The piggy bank contains %d dollars and %d cents \n",totalDollars,final );
   
  // print like for number of cents left after dollars are taken away
  
  printf ("The %d cents is represented by: \n",final);
  
  q = final / 25;
  amtLeft=final-q*25;
        
  d = amtLeft / 10;
  amtLeft=amtLeft-d*10;
        
  n = amtLeft / 5;
  leftover=amtLeft-n*5;

  printf("Quarters: %d\n", q);
  printf("Dimes: %d\n" ,d);
  printf("Nickels: %d\n", n);
  return 0;
}