// Chapter 5: The If Statement
// Question 2
//
// Write a program that asks the user to type in two integer values at the terminal. Test these two numbers to 
// determine if the first is evenly divisible by the second, and then display an appropriate message at the terminal.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int x, y;
    printf("Enter the first number:\n");
    scanf("%i", &x);
    printf("Enter the second number:\n");
    scanf("%i", &y);
    
    if (x % y == 0) {
        printf("Appropriate message.\n");
    }
    else {
        printf("Inappropriate message.\n");
    }
    
    return 0;
}



// Question 3
// 
// Write a program that accepts two integer values typed in by the user. Display the result of dividing the first 
// integer by the second, to three-decimal-place accuracy. Remember to have the program check for division by zero.
// 

// sort of cheated because floats

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    float x, y, z;
    printf("Enter the first number:\n");
    scanf("%f", &x);
    printf("Enter the second number:\n");
    scanf("%f", &y);
    z = x / y;
    
    if (y != 0) {
        printf("Your answer is: %f\n", z);
    }
    else {
        printf("Invalid character entered.\n");
    }
    
    return 0;
}



// Question 4 is in the book and is really cool. Check it out.
// 




// Question 6 (hard but recommended)
// 
// Write a program that takes an integer keyed in from the terminal and extracts and displays each digit of the 
// integer in English. So, if the user types in 932, the program should display:
// 
// nine three two
// 
// Remember to display "zero" if the user types in just a 0. 






// Chapter 6: Working With Arrays (p 117-118)
// Question 4 
// 
// Write a program that calculates the average of an array of 10 floating point values.
// 




// The rest of the arrays are in the book, please do them, they're really useful. 





// Chapter 7: Working with Functions (p. 161-162)
// Question 
// 
// 
// 
// 