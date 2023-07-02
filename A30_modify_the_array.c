/*You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

Increment the large integer by one and return the resulting array of digits.

Input Format

Given an Integer N denoting the size of integer Arrays.
The Next line contains N integers representing the elements of the Arrays.
Constraints

1 <= digits.length <= 100
0 <= digits[i] <= 9
digits does not contain any leading 0's.
Output Format

Print the array of integers representing the incremented large integer

Sample Input 0

1
1
Sample Output 0

2
Sample Input 1

2
3 9
Sample Output 1

4 0 */

//code

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int* incrementArray(int* digits, int n) {
    // Start from the least significant digit
    for (int i = n - 1; i >= 0; i--) {
        // Increment the digit
        digits[i] += 1;
        
        // If the digit is less than 10, no carryover is needed
        if (digits[i] < 10) {
            break;
        }
        
        // If the digit becomes 10, set it to 0 and carryover 1 to the next digit
        digits[i] = 0;
    }
    
    // If there is a carryover after processing all digits, allocate additional memory and insert a new digit at the beginning
    if (digits[0] == 0) {
        digits = realloc(digits, (n + 1) * sizeof(int));
        digits[0] = 1;
        
        // Shift the existing digits to the right
        for (int i = n; i >= 1; i--) {
            digits[i] = digits[i - 1];
        }
    }
    
    return digits;
}

int main() {
    int n;
    scanf("%d", &n);
    
    int* digits = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &digits[i]);
    }
    
    digits = incrementArray(digits, n);
    
    for (int i = 0; i < n; i++) {
        printf("%d ", digits[i]);
    }
    
    free(digits);
    return 0;

}
