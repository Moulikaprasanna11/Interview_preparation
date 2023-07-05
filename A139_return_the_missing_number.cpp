/*Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

Input Format

The first line contains a integer N denoting the size of array.
The Next line contains N integers representing the elements of the array.
Constraints

n == nums.length
1 <= n <= 2*10^5
0 <= nums[i] <= n
All the numbers of nums are unique.
Output Format

Print a integer which is the answer to the question.

Sample Input 0

3
3 0 1
Sample Output 0

2
Sample Input 1

2
0 1
Sample Output 1

2 */

//code

#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_set>
using namespace std;


int MissingNumber(std::vector<int>& nums) {
    int n = nums.size();
    std::unordered_set<int> numSet;

    for (int num : nums) {
        numSet.insert(num);
    }

    for (int i = 0; i <= n; i++) {
        if (numSet.find(i) == numSet.end()) {
            return i;
        }
    }

    return 0; 
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    std::cin >> n;

    std::vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }

    int result = MissingNumber(nums);
    std::cout << result << std::endl;
    return 0;
}
