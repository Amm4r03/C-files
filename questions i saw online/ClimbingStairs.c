// platform : leetcode
// link : https://leetcode.com/problems/climbing-stairs/

/* You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

 
Example 1:

Input: n = 2
Output: 2
Explanation: There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps
Example 2:

Input: n = 3
Output: 3
Explanation: There are three ways to climb to the top.
1. 1 step + 1 step + 1 step
2. 1 step + 2 steps
3. 2 steps + 1 step
 
Constraints:
1 <= n <= 45 */

#include <stdio.h>

int climbStairs(int n)
{
  int i, ways = 1;
  int fib[45];
  fib[0] = 0;
  fib[1] = 1;
  for (i = 2; i < n; i = i + i)
  {
    fib[i] = fib[i-1] + fib[i-2];
    ways = ways + fib[i];
  }
  return ways;
}

int main()
{
    printf("Enter a number : ");
    int number;
    scanf("%d", &number);
    
    int ok = climbStairs(number);

    printf("%d", ok);

    return 0;
}