/*Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must appear as many times as it shows in both arrays and you may return the result in sorted order.

Input Format

The first line contains two integers N and M.
/The Second line contains N integers representing the nums1 elements.
The third line contains M integers representing the nums2 elements.
Constraints

1 <= nums1.length, nums2.length <= 100000 0 <= nums1[i], nums2[i] <= 1000

Output Format

Print the array of integers which is the answer to the question

Sample Input 0

3 5
4 9 5
9 4 9 8 4
Sample Output 0

4 9 
Sample Input 1

2 3
1 2
2 3 1
Sample Output 1

1 2 */

// code
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,m;
    cin>>n>>m;
    
    vector <int> arr1(n);
    vector <int> arr2(m);
   for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int j=0;j<m;j++){
        cin>>arr2[j];
    }
    
    unordered_map<int, int> freq1, freq2;
    
    for (int num : arr1) {
        freq1[num]++;
    }
    
    for (int num : arr2) {
        freq2[num]++;
    }
    
    vector<int> intersection;
    
    
    for (int num : arr1) {
        if (freq1[num] > 0 && freq2[num] > 0) {
            
            intersection.push_back(num);
            freq1[num]--;
            freq2[num]--;
        }
    }
    
    
    sort(intersection.begin(), intersection.end());
    
    
    for (int num : intersection) {
        cout << num << " ";
    }

   /* sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());
    
    vector<int> result;
    

    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) 
        {
            i++;
        } 
        else if (arr1[i] > arr2[j]) 
        {
            j++;
        } 
        else 
        {
            if (result.empty() || result.back() != arr1[i]) {
                result.push_back(arr1[i]);
            }
            i++;
            j++;
        }
    }
    for(int num:result){
        cout<<num<<" ";
    }*/
    return 0;
}
