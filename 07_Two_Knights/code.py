"""Your task is to count for k=1,2,\ldots,n the number of ways two knights can be placed on a k \times k chessboard so that they do not attack each other.
Input
The only input line contains an integer n.
Output
Print n integers: the results.
Constraints

1 \le n \le 10000

Example
Input:
8

Output:
0
6
28
96
252
550
1056
1848
"""
def binom(n, k):
    if k < 0 or k > n:
        return 0
    k = min(k, n - k)
    res = 1
    for i in range(1, k + 1):
        res = res * (n - k + i) // i
    return res

def main():
  n = int(input())
  for i in range(1,n+1):
    if i == 1: 
      print(0)
      continue
    #calcolo di totale combinazioni di due cavalli in k*k 
    total_positions = pow(2,n)
    # meno i posti in cui non possono essere 
    attacking_positions = (i-1)*(i-2)*2*2
    print(total_positions-attacking_positions)
  return 

if __name__=="__main__":
  main()