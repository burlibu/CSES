/*
Consider an algorithm that takes as input a positive integer n. If n is even, the algorithm divides it by two, and if n is odd, the algorithm multiplies it by three and adds one. The algorithm repeats this, until n is one. For example, the sequence for n=3 is as follows:
$$ 3 \rightarrow 10 \rightarrow 5 \rightarrow 16 \rightarrow 8 \rightarrow 4 \rightarrow 2 \rightarrow 1$$
Your task is to simulate the execution of the algorithm for a given value of n.
Input
The only input line contains an integer n.
Output
Print a line that contains all values of n during the algorithm.
Constraints

1 \le n \le 10^6

Example
Input:
3

Output:
3 10 5 16 8 4 2 1
*/

#include <stdio.h>
#include <stdlib.h>

int foo(int n){
  if (n < 1 || n > 10e6) return -1;
  printf("%d ",n);
  if (n == 1) {
    return 0;
  }
  if (n%2==0) {
    return foo (n/2);
  }
  else {
    return foo(n*3+1);
  }
}

int main() {
  int n = 0;
  puts("inserisci numero:");
  if (scanf("%d", &n) != 1) {
    fprintf(stderr, "Input non valido\n");
    return 1;
  }
  printf("Numero scelto: %d\n", n);
  foo(n);
  return 0;
}