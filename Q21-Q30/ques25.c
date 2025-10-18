// Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

// Sample Test Cases:
// Input 1:
// 4 2 +
// Output 1:
// 6

// Input 2:
// 10 3 %
// Output 2:
// 1

// Input 3:
// 15 5 /
// Output 3:
// 3

#include<stdio.h>
int main()
{
    int n1;int n2;char op;int ans=0;
    scanf("%d %d %c",&n1 ,&n2 ,&op);
    switch(op)
    {
        case '+':
            ans=n1+n2;
            printf("%d",ans);
            break;
        case '-':
            ans=n1-n2;
            printf("%d",ans);
            break;
        case '*':
            ans=n1*n2;
            printf("%d",ans);
            break;
        case '/':
            ans=n1/n2;
            printf("%d",ans);
            break;
        case '%':
            ans=n1%n2;
            printf("%d",ans);
            break;
        default:
            printf("Enter a valid operator");
            break;
    }
    return 0;
}