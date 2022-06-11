//Name- Priyanshu Mallick, Roll No- 13
//Q9. Write a program to print the Fibonacci numbers up to n number of terms.
#include <stdio.h>
int main() {
  int t1 = 0, t2 = 1, nextTerm = 0, n;
  printf("Enter the term n upto which you want to print the series: ");
  scanf("%d", &n);
  while (nextTerm <= n) {
    printf("%d, ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }
  return 0;
}





