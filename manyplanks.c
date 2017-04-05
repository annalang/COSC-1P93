// manyplanks.c
// Will find volume and surface ares of plank
// Anna Lang (5839881) APCO 1P93, Assignment 2, Questions 1

#include <stdio.h>
#include <math.h>

int main() {
  int plank;                   //number of planks being used
  float length;                //used for length
  float heigth;                //used for height (or thickness)
  float width;                 //used for width
  float volume;                //used for total volume of plank
  float cubicFeet;             //used for volume in cubic feet
  float surfaceArea;           //used for surface area
  float squareFeet;            //used for surface area in square feet
  float count;                 //used to limit the loop
  float totalvolume;           //total volume for all planks
  float totalCF;               //total surface area in cubic feet for all planks
  float surfaceSA;             //total surface area for all planks 
  float surfaceareaAPS;        //total surface area for all planks in square feet
  float volumeav;              //total volume average for all planks
  float volumeavcb;            //average for all planks in cubic feet
  float AveragetotSA;          //average of surface area for all planks in square inches  
  float AveragetotSAfeet;      //average of surface area for all planks in square feet
  
  
 // Asking for the number of planks 
  // reading the number of planks
  printf("Enter the number of planks to process: ");
  scanf("%d",&plank);
  
  count=0;
  
 while (count<plank){
 
  // plank number
  printf("\n \nPlank %.0f \n",count+1); 

  // Asking for the length
  // reading the lenght
  printf("Enter the # (in inches) of the length: ");
  scanf("%f",&length);

  // Asking for the height
  // reading the height
  printf("Enter the # (in inches) of the height(thickness): ");
  scanf("%f",&heigth);
  
  // Asking for the width
  // reading the width
  printf("Enter the # (in inches) of the width: ");
  scanf("%f",&width);
  
  // compute the volume
  volume=length*width*heigth;
  
  //volume of all of the planks
  totalvolume=totalvolume+volume;
  
  //average of all planks in cubic inches
  volumeav=totalvolume/plank;
  
  // compute the volume to cubic feet
  cubicFeet= volume*0.000578704;
  
  // volume in cubic feet for all planks
  totalCF= totalCF + cubicFeet;
  
  // average fo all planks in cubic feet
  volumeavcb=totalCF/plank;
  
  // compute the surface area
  surfaceArea = 2* ( (width*length)+(heigth*length)+(heigth*width) );
  
  //surface area for all planks 
  surfaceSA = surfaceSA + surfaceArea;
  
  //average of all planks (surface area) in square inches
  AveragetotSA=surfaceSA/plank;
  
  // compute the surface area to square feet
  squareFeet = surfaceArea*0.0069444444444444;
  
  //average of all planks (surface area) in square feet
  AveragetotSAfeet=surfaceSA/plank;

  
  //surface area for all planks in square inches
  surfaceareaAPS=surfaceareaAPS+squareFeet;
    
  // print the results for volume
   printf("The volume is %.2f cubic inches. (%f cubic feet) \n",volume,cubicFeet);
 
  // print the results for surface area
   printf("The surface area is %.2f square inches. (%.2f square feet)",surfaceArea,squareFeet);

   count=count+1;
  }

//total volume for all the planks
printf ("\n\nThe total volume is %.2f in cubic inches (%f in cubic feet).",totalvolume,totalCF);

//total surface area for all planks 
printf ("\nThe total surface area is %.2f square inches (%.2f in square feet).",surfaceSA,surfaceareaAPS);

//total average for volume in cubic inches and cubic feet
printf("\nThe average volume is %.2f in cubic inches (%f in cubic feet",volumeav,volumeavcb);

//total average for surface in square inches and square feet
printf("\nThe average surface area is %.2f in square inches (%.2f in square feet)",AveragetotSA,AveragetotSAfeet);
}