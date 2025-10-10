/*
A number spiral is an infinite grid whose upper-left square has number 1. 
Here are the first five layers of the spiral:

Your task is to find out the number in row y and column x.
Input
The first input line contains an integer t: the number of tests.
After this, there are t lines, each containing integers y and x.
Output
For each test, print the number in row y and column x.
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool D = false;
void db(){
  if (D) printf("Debug\n");
}

int main(){
  long long t;
  int r = scanf("%lld",&t);
  return 0;
}