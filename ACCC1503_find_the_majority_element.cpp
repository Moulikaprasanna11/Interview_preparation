/*Given an array of size N, find the majority element. The majority element is the element that appears more than floor(N/2) times. You may assume that the array is non-empty and the majority element always exist in the array.

Input Format

The first argument is an integer array A.

Constraints

1 <= |A| <= 10^6
1 <= A[i] <= 10^9
Output Format

Return the majority element.

Sample Input 0

2
3 3
Sample Output 0

3
Sample Input 1

8
4890 4890 4890 4890 4890 17 44 26
Sample Output 1

4890 */

//code

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
 int main() {
    int n,i;
    cin>>n;
    vector<int> a(n);
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }

    int maj_ele = 0;
    int count = 0;

    for (int num : a) {
        if (count == 0) {
            maj_ele = num;
            count = 1;
        } else if (maj_ele == num) {
            count++;
        } else {
            count--;
        }
    }

    cout << maj_ele;
    return 0;
}
