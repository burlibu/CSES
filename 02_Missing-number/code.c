/**You are given all numbers between 1,2,\ldots,n except one. Your task is to find the missing number.
Input
The first input line contains an integer n.
The second line contains n-1 numbers. Each number is distinct and between 1 and n (inclusive).
Output
Print the missing number.
Constraints

2 \le n \le 2 \cdot 10^5

Example
Input:
5
2 3 1 5

Output:
4
**/
//gcc -Wall code.c
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool D = false;
void db(){
  if (D) printf("Debug\n");
}

long long sommatoria(long long n) {
  long long res=0;
  for (long long i = 1; i <= n; i++){
    res+=i;
  }
  return res;
}

int main(){
  long long n;
  if ( scanf("%lld", &n ) != 1) return -1;
  long long sum = sommatoria(n);
  if (D) printf("Sommatoria n: %lld\n",sum);
  
  long long k = 0;
  for (long long i = 1; i <= n-1; i++) {
    long long number;
    int r = scanf("%lld", &number);
    k = k+number;
    if (D) printf("K =  %lld\n",k);
    }
    if (D) printf("K finale: %lld\n",k);
    long long res = sum-k;
    printf("%lld\n",res);
    return 0;
  }

