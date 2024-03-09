# ArrayToSingleElement
Reducing the array to a single element.<
<br>
Given an integer array, reduce the array to a single element.
<br>
In each operation, pick two indices i and j(where i ≠ j), and:
<br>
•append the value of a[i]+ a[j] to the array
<br>
•delete a[i] and a[j] from the array
<br>
The cost of each operation is a[i]+ a[j]. Find the minimum possible cost to reduce the array.
<br>
Example
<br>
Consider array [25, 10, 20].
<br>
•pick 10 and 20, cost = 10 + 20 = 30, array'=[25,30]
<br>
•pic 25 and 30 cost = 25 + 30 = 55, array = [50]
<br>
The cost is 30 + 55 = 85. This is the minimum possible cost.
<br>
Function description
<br>
Complete the function minimizeCost in the editor.
minimizeCost has the following parameter:
<br>
int arr[n]: an array of integers
<br>
Returns
<br>
int: the minimum cost of reducing the array
<br>
Constraints
<br>
•2 ≤ n ≤ 10⁵
<br>
•1 ≤ arr[i] ≤ 100
<br>
Input Format Custom Testing
<br>
The first line contains an integer, n, the number of elements in arr
Each line i of the n subsequent lines(where 0 ≤ i <n ) contains a single value, arr[i].
<br>
Sample Test Case 0:
<br>
Sample Input For Custom Testing
<br>
3
<br>
30 10 20
<br>
Sample Output
<br>
90
<br>
Explanation
<br>
•Pick 10 and 20, cost = 10 + 20 = 30, array' = [30,30].
<br>
•Pick 30 and 30, cost = 30 + 30 = 60, array' = [60]
<br>
The total cost is 30+60 = 90
<br>
Sample Case 1
<br>
Sample Input For Custom Testing
<br>
2
<br>
100 1
<br>
Sample Output
<br>
101
<br>
Explanation
<br>
Only one operation is performed, with 100 and 1, and the cost is 100 + 1 = 101.
<br>

