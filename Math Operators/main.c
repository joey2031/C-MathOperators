
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int number = 10;
    
    printf ("10 + 3 is %d \n", number + 3); // takes the value of number and ass 3 to it
    
    // All math operators
    //+ addition
    // - subtraction
    // * multiplication
    // / division
    // % gives you the remainder
    
    
    printf ("10 divided 3 is %d \n", number / 3);
    printf ("10 divided by 3s remainder is %d \n", number % 3);
    
    // Oder of operations are the same in C programming.
   // B - brackets
   // E - exponents
   // D - division
   // M - multiplication
   // A - addition
   // S - subtraction
    
    int answer = 2 + 3 + 6 * 8;
    printf ("%d \n", answer);
    int answerTwo = (3 + 3) * (2 + 2);
     printf ("%d \n", answerTwo);
    
     
    // How to assign the same value to multiple variables.
     int a = 100, b = 100, c = 100;
     printf ("%d %d %d \n", a, b, c);
     // or
     a = b = c = 200;
     printf ("%d %d %d \n", a, b, c);
     // you could also assign different values to multiple variables 
     //in one line.
      int d = 34, e = 90, f = 345;
       printf ("%d %d %d \n", d, e, f);
       
       // this file was made from watching buckys C programming tutorials 12-14
       // on youtube.
      
     
 
    return (EXIT_SUCCESS);
}

