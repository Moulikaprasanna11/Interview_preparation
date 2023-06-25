/*Given two strings ransomNote and magazine, return true if ransomNote can be constructed by using the letters from magazine and false otherwise.

Each letter in magazine can only be used once in ransomNote.

Input Format

The First Line contains a string representing the ransomNote.
The Second Line contains a string representing the magazine.
Constraints

1 <= ransomNote.length, magazine.length <= 105
ransomNote and magazine consist of lowercase English letters.
Output Format

Print true if ransomNote can be constructed by using the letters from magazine and false otherwise.*/

// code

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

bool canConstruct(char *ransomNote, char *magazine) {
    int ransomNoteCount[26] = {0};
    int magazineCount[26] = {0};
    
    for(int i = 0; ransomNote[i] != '\0'; i++) {
        ransomNoteCount[ransomNote[i] - 'a']++;
    }
    
    for(int i = 0; magazine[i] != '\0'; i++) {
        magazineCount[magazine[i] - 'a']++;
    }
    
    for(int i = 0; i < 26; i++) {
        if(ransomNoteCount[i] > magazineCount[i]) {
            return false;
        }
    }
    
    return true;
}
int main() {
    char ransomNote[100001];
    char magazine[100001];
    scanf("%s", ransomNote);
    scanf("%s", magazine);
    
    bool result = canConstruct(ransomNote, magazine);
    printf("%s\n", result ? "true" : "false");

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
