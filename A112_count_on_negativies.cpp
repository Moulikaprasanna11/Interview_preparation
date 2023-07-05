/*Given a m x n matrix grid which is sorted in non-increasing order both row-wise and column-wise, return the number of negative numbers in grid.

Input Format

The First Line contains 2 integers N and M
The Next N Lines contains M integers seperated by a space.
Constraints

n == grid.length
m == grid[i].length
1 <= m, n <= 100
-100 <= grid[i][j] <= 100
Output Format

Print a integer as the anwer to the question

Sample Input 0

2 2
3 2
1 0
Sample Output 0

0
Sample Input 1

2 2
9 7
5 4
Sample Output 1

0 */

//code

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,i,j,m,count=0;
    cin>>n>>m;
    int arr[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>arr[i][j];
            if(arr[i][j]<0) count++;
        }
    }
    
    cout<<count;
    
    return 0;
}
