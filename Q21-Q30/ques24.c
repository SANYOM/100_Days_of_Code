// Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
// First 100 units at ₹5/unit 
// Next 100 units at ₹7/unit 
// Next 100 units at ₹10/unit 
// Above at ₹12/unit

// Sample Test Cases:
// Input 1:
// 50
// Output 1:
// Bill: ₹250

// Input 2:
// 150
// Output 2:
// Bill: ₹850

// Input 3:
// 250
// Output 3:
// Bill: ₹1700

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n<=100)
    {
        int ans=n*5;
        printf("Bill: Rs.%d",ans);
    }
    else if(n<=200)
    {
        int ans= 100*5 + (n-100)*7;
        printf("Bill: Rs.%d",ans);
    }
    else if(n<=300)
    {
        int ans= 100*5 + 100*7 + (n-200)*10;
        printf("Bill: Rs.%d",ans);
    }
    else if(n>300)
    {
        int ans= 100*5 + 100*7 + 100*10 + (n-300)*12;
        printf("Bill: Rs.%d",ans);
    }
    else
    {
        printf("Enter a valid number of unit consumed");
    }
    return 0;
}