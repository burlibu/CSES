/*
A permutation of integers 1,2,\ldots,n is called beautiful if there are no adjacent elements whose difference is 1.
Given n, construct a beautiful permutation if such a permutation exists.
Input
The only input line contains an integer n.
Output
Print a beautiful permutation of integers 1,2,\ldots,n. If there are several solutions, you may print any of them. If there are no solutions, print "NO SOLUTION".
Constraints

1 \le n \le 10^6

Example 1
Input:
5

Output:
4 2 5 3 1
Example 2
Input:
3

Output:
NO SOLUTION
*/

//gcc -Wall code.c
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool D = false;
void db(){
  if (D) printf("Debug\n");
}

int main(){
  // permutazione
  long long n;
  int r = scanf("%lld", &n);
  if (n == 1) {
    printf("%lld", n);
    return 0;
  }
  char *error = "NO SOLUTION"; // 12 char
  if (n == 2) {
    puts(error);
  }
  long long resto=0;
  if (n%2!=0) {
    n=n-1;
    resto=n;
  } // ora so che n è pari
  for (long long i = 0; i < n; i++) {
    printf(s)
  }
}