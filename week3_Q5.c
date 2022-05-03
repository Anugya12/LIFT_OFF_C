#include <stdio.h>
void main() {
  int n,a[100];
  printf("Enter the number of elements within 1 to 100: ");
  scanf("%d", &n);
  for (int i = 1; i <= n; ++i)
   {
    printf("Enter number %d: ", i);
    scanf("%d", &a[i]);
  }
  for (int i = 1; i <= n; ++i) {
    if (a[0] < a[i]) {
      a[0] = a[i];
    }
  }
  printf("Largest element = %d", a[0]);
}
