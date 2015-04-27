// Practice:
// FizzBuzz
// (I think this is how it works)
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int num;
    
    printf("Enter the number of ints in your array:\n");
    scanf("%i", &num);
    
    if ((num % 3 == 0) && (num % 5 != 0)) {
        printf("Fizz\n");
    }
    if ((num % 5 == 0) && (num % 3 != 0)) {
        printf("Buzz\n");
    }
    if ((num % 3 == 0) && (num % 5 == 0)) {
        printf("FizzBuzz\n");
    }
    
    return 0;
}



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

// Question 3
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int ratingCounters[11], i, n, response;
    
    printf("Enter the number of ints in your array:\n");
    scanf("%i", &n);
    
    for (i=1; i<10; ++i)
        ratingCounters[i] = 0;
    
    printf("Enter your responses:\n");
    
    for (i=1; i<=n; ++i) {
        scanf("%i", &response);
        
        if (response < 1 || response > 10)
            printf("Bad response: %i\n", response);
        else
            ++ratingCounters[response];
    }
    
    printf("\n\nRating   Number of Responses\n");
    printf("------ ------------------\n");
    
    for (i=1; i<=n; ++i) {
        printf("%4i%14i\n", i, ratingCounters[i]);
    }
    return 0;
}

// Question 4 
// Write a program that calculates the average of an array of 10 floating point values.
// 

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int i;
    float sum, mean, a_mean[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    for (i=0; i<10; i++) {
        sum += a_mean[i];
    }
    
    mean = sum/10;
    printf("Sum is %.2f\n", sum);
    printf("Mean is %.2f\n", mean);
    return 0;
}

// Question 5
// 



// Chapter 7: Working with Functions (p. 161-162)
// Question 
// 
// 
// 
// 