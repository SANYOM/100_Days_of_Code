// Q52: Write a program to print the following pattern:

// *

// *
// *
// *

// *
// *
// *
// *
// *

// *
// *
// *

// *

// Sample Test Cases:
// Input 1:

// Output 1:
// Pattern with stars spaced irregularly as shown.

#include <stdio.h>

int main() {
    // Define the number of stars in each group
    int groups[] = {1, 4, 5, 3, 1};
    int i;int j;
    for(i=0;i<5;++i) 
    {
        //stars
        for(j=0;j<groups[i];++j) 
        {
            printf("*\n");
        }
        //spaces
        if(i!=4) 
        {
            printf("\n");
        }
    }
    return 0;
}