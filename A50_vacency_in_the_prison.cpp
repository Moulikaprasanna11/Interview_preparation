/*There are 8 prison cells in a row and each cell is either occupied or vacant.

Each day, whether the cell is occupied or vacant changes according to the following rules:

If a cell has two adjacent neighbors that are both occupied or both vacant, then the cell becomes occupied.
Otherwise, it becomes vacant.
Note : that because the prison is a row, the first and the last cells in the row can't have two adjacent neighbors.

You are given an integer array cells where cells[i] == 1 if the ith cell is occupied and cells[i] == 0 if the ith cell is vacant, and you are given an integer n.

Return the state of the prison after n days (i.e., n such changes described above).

Input Format

The First line contains an integer N
The Second line contains 8 integers denoting the value of prison cells.
Constraints

cells.length == 8
cells[i] is either 0 or 1.
1 <= n <= 10^9
Output Format

Print the 8 integers which is denoting the state of the prison after n days

Sample Input 0

8 4
1 1 0 1 1 1 0 1
Sample Output 0

0 1 0 0 1 0 0 0
Sample Input 1

8 7
0 1 0 1 1 0 0 1
Sample Output 1

0 0 1 1 0 0 0 0 */

//code
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#include <stdio.h>
int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    int l[m],new_l[m];

    for (int i = 0; i < m; i++) {
        scanf("%d", &l[i]);
    }

    for (int i = 0; i < n; i++) {
        for(int k=0;k<m;k++){
            new_l[k]=0;
        }
        for (int i = 1; i < m ; i++) {
            if (l[i-1] == l[i+1]) {
                new_l[i] = 1;
            } else {
                new_l[i] = 0;
            }
        }
        for (int i = 0; i < m; i++) {
            l[i] = new_l[i];
        }
    }

    for (int i = 0; i < m; i++) {
        printf("%d ", l[i]);
    }

    return 0;
}
