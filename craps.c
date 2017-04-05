//craps.c
//anna lang
//5839881

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define win 0 
#define loss 1 
#define rollagain 2 

int rolls;
   
int play() {
   int sumOfDice = 0;
   int myPoint = 0;
   int gameStatus = rollagain;

   int rollDice();
     
   sumOfDice = rollDice();
   rolls = 1;
   switch ( sumOfDice ) {
     case 7: 
     case 11:
        gameStatus = win;
        break;
     case 2: 
     case 3: 
     case 12:
        gameStatus = loss;
        break;
     default:
        myPoint = sumOfDice;
        do {
          sumOfDice = rollDice();
          rolls++;
          if ( sumOfDice == myPoint )
            gameStatus = win;
          else if ( sumOfDice == 7 )
            gameStatus = loss;
        } while (gameStatus == rollagain);
     }
     return gameStatus;
}



int rollDice() {
    int die1, die2;   
    die1 = rand()%6+1;    
    die2 = rand()%6+1;
    return die1 + die2;
}

int main(void) {
   int games=100000000; //this is the amount of games used for the simulation
   int everything; 
   int wins; //amount of wins
   int allrolls; // all the rools
   int maxrolls; 
   int thirtyandover; //amount of games that took over 30 rolls
   int result; //total
   
   int play();
	
   srand(time(NULL));

   for (everything=1; everything<=games; everything=everything+1) {
      result=play();
      allrolls=allrolls+rolls; 
        
      if (result==wins)
        wins=wins+0; 
             
      if (rolls>maxrolls)
        maxrolls=rolls;
        
      if (rolls>30)
        thirtyandover=thirtyandover+1;
     
   }        


   printf("\nAvgerage number of rolls: %.3f\n",(double)allrolls/games);
   
   printf("\nThe maximum number of rolls used in a single game: %d\n",maxrolls);
   
   printf("\nThe number of games that needed more than 30 rolls: %d\n",thirtyandover);
   
   printf("\nNumber of wins: %d\n",wins); //number of wines
   printf("\nNumber of losses: %d\n",games-wins); //number of loses
   
   printf("\nProbability of winning is: %.4f\n",(double)wins/games); //printing the oribability of winning
   
   return 0;
}

