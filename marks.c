// marks.c
// Will find volume and surface ares of plank
// Anna Lang (5839881) APCO 1P93, Assignment 2, Questions 1

#include <stdio.h>
#include <math.h>

int main() {
  float id;                    // the is the student ID number 
  float assignment;            // this is the assignment mark
  float test;                  // this is the test mark 
  float exam;                  // this is the exam mark 
  float finalGrade;            //this is the final grade mark 
  int count;                   //used to track the loop
  float finalGradeAverage;     //this is the average of all three final grades
  float Total;                 //used to calculate the final average
 
 
  count=0;
  
 while (count<3){
 
  // Asking for the id number
  // reading the id number 
  printf("Please enter the id number : ");
  scanf("%f",&id);

  // Asking for the assignment mark (30%)
  // reading the assignment mark 
  printf("Enter the assignment mark: ");
  scanf("%f",&assignment);
  
  
  // Asking for the test mark (25%)
  // reading the test mark
  printf("Enter the test mark: ");
  scanf("%f",&test);
  
  // Asking for the exam mark (45%)
  // reading the exam mark
  printf("Enter the exam mark: ");
  scanf("%f",&exam);
  
  // final grade 
  finalGrade=((assignment*0.30)+(test*0.25)+(exam*0.45));
  printf("The final grade for %.0f is %.1f\n\n",id,finalGrade); 
  
  //total is used to for the average
  Total=Total+finalGrade;
 
  //this is calcuting the average with the total divided with the number of students
  finalGradeAverage= Total/3;
  
  
  count= count+1;  
}

 
 //printing out the average final mark
  
 printf("The average final grade is %.2f",finalGradeAverage);
}