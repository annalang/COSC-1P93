// plank.c
// Will find volume and surface ares of plank
// Anna Lang (5839881) APCO 1P93, Assignment 1, Questions 1

#include <stdio.h>

int main() {
  int two;                  // used as an int for 2
  float length;             // used for length
  float heigth;             // used for height (or thickness)
  float width;              // used for width
  float volume;             // used for total volume of plank
  float cubicFeet;          //used for volume in cubic feet
  float surfaceArea;        // used for surface area
  float surfaceAreaSfeet;   // used for surface area in square feet
  
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
  
  // compute the volume to cubic feet
  
  cubicFeet= volume/12.0;
  
  // compute the surface area
  two= 2;
  surfaceArea = two * ( (width*length)+(heigth*length)+(heigth*width) );
  
  // compute the volume to cubic feet
  
  surfaceAreaSfeet = surfaceArea*0.0069444444444444;
    
 // print the results for volume
   printf("The volume is %.2f cubic inches. (%.2f cubic feet) \n",volume,cubicFeet);
 
 // print the results for surface area
   printf("The surface ares is %.2f square inches. (%.2f square feet) \n",surfaceArea,surfaceAreaSfeet);

}