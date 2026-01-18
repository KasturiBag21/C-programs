#include<stdio.h>
int main() {
    int x, y;
    printf("Enter 2 numbers:");
    scanf("%d%d", &x, &y);
    printf("Greatest Common Divisor is %d",(x, y));
    return 0;
 }
int gcd(int x, int y) {
  if (y == 0)
    return x;
  else
    return gcd(y, x % y);
}
