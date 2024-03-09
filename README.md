# ArrayToSingleElement
Reducing the array to a single element.<
<p>
Given an integer array, reduce the array to a single element.
in each operation, pick two indices i and j(where i ≠ j), and:
•append the value of a[i]+ a[j] to the array
•delete a[i] and a[j] from the array
The cost of each operation is a[i]+ a[j]. Find the minimum possible cost to reduce the array.
Example
Consider array [25, 10, 20].
•pick 10 and 20, cost = 10 + 20 = 30, array'=[25,30]
•pic 25 and 30 cost = 25 + 30 = 55, array = [50]
The cost is 30 + 55 = 85. This is the minimum possible cost.
Function description
Complete the function minimizeCost in the editor.
minimizeCost has the following parameter:
int arr[n]: an array of integers
Returns
int: the minimum cost of reducing the array
Constraints
•2 ≤ n ≤ 10⁵
•1 ≤ arr[i] ≤ 100
Input Format Custom Testing
The first line contains an integer, n, the number of elements in arr
Each line i of the n subsequent lines(where 0 ≤ i <n ) contains a single value, arr[i].
Sample Test Case 0:
Sample Input For Custom Testing
3
30 10 20
Sample Output
90
Explanation
•Pick 10 and 20, cost = 10 + 20 = 30, array' = [30,30].
•Pick 30 and 30, cost = 30 + 30 = 60, array' = [60]
The total cost is 30+60 = 90
Sample Case 1
Sample Input For Custom Testing
2
100 1
Sample Output
101
Explanation
Only one operation is performed, with 100 and 1, and the cost is 100 + 1 = 101.
</p>
