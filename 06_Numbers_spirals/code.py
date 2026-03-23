def main():
  n = int(input())
  for i in range(n):
    y, x = map(int, input().split())
    z = max(y, x)
    if z % 2 == 0:
      if y == z:
        print(z * z - x + 1)
      else:
        print((z - 1) * (z - 1) + y)
    else:
      if x == z:
        print(z * z - y + 1)
      else:
        print((z - 1) * (z - 1) + x)
  return


main()
  
