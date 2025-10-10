#include <iostream>
#include <string>

using namespace std;

bool D = false;

template <typename T>
void db(T& a) {
  if (D) cout << a << endl;
}

/*
You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence. This is a maximum-length substring containing only one type of character.
Input
The only input line contains a string of n characters.
Output
Print one integer: the length of the longest repetition.
Constraints

1 \le n \le 10^6

Example
Input:
ATTCGGGA

Output:
3
*/

int main() {
  string sequence;
  cin >> sequence;
  if (sequence.length() == 1) {
    cout << 1;
    return 0;
  }
  long long  int i = 1;
  long long  longest = 1;
  long long streak = 1;
  while (i < sequence.length()) {
    char prev = sequence[i-1];
    char cur = sequence[i];
    if (cur == prev) {
      streak++;
      if (i == sequence.length()-1){
        if (streak > longest) longest = streak;
      }
    } else { // se è diverso da quello prima rinizia la streak
      if (streak > longest) {
        longest = streak;
      }
      streak = 1;
    }
    i++;
  }
  cout << longest;
  return 0;
}