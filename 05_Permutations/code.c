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

/*
1. Creare array della permutazione base dato n
2. Creare due altri array che conteranno i dispari e i pari rispettivamente
3. Unirli.'
*/

int main(){
  // permutazione
  long long n;
  int r = scanf("%lld",&n);
  r = 0;
  if (n==1){
    printf("1");
    return r;
  }
  if (n<4) {
    puts("NO SOLUTION");
    return r;
  }

  // Riempimentto array
  long long *arr = malloc(n*sizeof(long long)); // arr punta all' inizio dell' array
  long long *start_arr = arr;
  for (long long i = 0; i < n; i++) {
    *(arr+i) = i+1; //=
    //arr++;
  }
  long long *arr1; //=
  long long *arr2; //=
  long long *start1; //=
  long long *start2; //=
  arr1 = malloc(n/2*sizeof(long long));//pari //=
  if (n%2==0){ //numero di dispari pari
    arr2 = malloc(n/2*sizeof(long long));//dispari //=
  }
  else {// numero di dispari dispari
    arr2 = malloc(((n/2)+1)*sizeof(long long)); //dispari
  } //
  start1 = arr1; //=
  start2 = arr2; //=
  for (long long i = 0; i < n;i++) {
    if (*(arr+i)%2==0) {
      *arr1 = *(arr+i); // riempio i pari
      arr1++; // perdo arr1
    } else {
      *arr2 = *(arr+i); // riempio i dispari
      arr2++; //perdo arr2
    }
  }
  //stampa
  for (long long *p = start1; p < arr1; p++) {
    printf("%lld ", *p); //p+((n/2)*sizeof(long long))
  }
  for (long long *p = start2; p < arr2; p++) {
    printf("%lld ", *p); //p+(((n/2)-1)*sizeof(long long))
  }
  // free(arr1);
  // free(arr2);
  // free(start1);
  // free(start2);
  return r;
  };
