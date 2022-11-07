#include "cs50.h"
#include <stdio.h>

int main(void) 
{
    long long card = get_long_long("Enter card number: ");
    int sumOfMultipliedDigits = 0;
    int sumOfDigits = 0;
    while (card > 0) {
        sumOfDigits += card%10;
        card /= 10;
        int curr = (card%10) * 2;
        if (curr > 10) {
            curr = curr%10 + curr/10;
        }
  
        sumOfMultipliedDigits += curr;
        card/=10;
    }
    int sum = sumOfDigits+sumOfMultipliedDigits;
    if (sum%10 == 0) 
        printf("VISA\n");
    else {
        printf("Invalid\n");
    }
}