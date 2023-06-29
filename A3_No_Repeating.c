Given a string s, find the length of the longest substring without repeating characters.

/*Input Format

The First line will have a integer N denoting the length of string.
The Second line will have a string S.
Constraints

0 <= s.length <= 5 * 10^4
s consists of English letters, digits, symbols and spaces.
Output Format

Print the integer which is the answer to the question

Sample Input 0

18
fgsurhydrjkxjlvhvo
Sample Output 0

8
Sample Input 1

9
mjjlclldn
Sample Output 1

3*/
// code

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char s[50000];
    int n;
    scanf("%d",&n);
    scanf("%s",s);
    
    int charDict[128];
    memset(charDict, -1, sizeof(charDict));
    int longestlength = 0, i =0;
    int startindex = 0;
    
    for(int i = 0; s[i] != '\0';i++) {
        //printf("%d ",charDict[s[i]]);
        if(charDict[s[i]] >= startindex) {
            startindex = charDict[s[i]] + 1;
        }
        charDict[s[i]] = i;
        int currentlength = i - startindex + 1;
        if (currentlength > longestlength) {
            longestlength = currentlength;
        }
    }
    printf("%d", longestlength);
    
    return 0;
    }
    
