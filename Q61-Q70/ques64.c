// Q64: Find the digit that occurs the most times in an integer number.

// Sample Test Cases:
// Input 1:
// 112233
// Output 1:
// 1

// Input 2:
// 887799
// Output 2:
// 7

#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    int freq[10] ={0};
    while (num > 0) 
    {
        int dig=num%10;
        freq[dig]++;
        num/=10;
    }
    int max=0;int res=0;
    for(int i=0;i<10;i++) 
    {
        if(freq[i]>max) 
        {
            max=freq[i];
            res=i;
        }
    }
    printf("%d",res);
    return 0;
}