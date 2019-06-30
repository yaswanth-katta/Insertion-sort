#include <stdio.h>
int main() {
  long long int n, i, j, k;
  scanf("%lld", &n);
  int arr[n];
  for (i = 0; i < n; i++)
    scanf("%lld", &arr[i]);
  k = arr[n - 1];
  for (i = n - 1; i >= 0; i--) {
    if (arr[i - 1] > k) {
      arr[i] = arr[i - 1];
      for (j = 0; j < n; j++)
        printf("%lld ", arr[j]);
      printf("\n");
    } else {
      arr[i] = k;
      for (j = 0; j < n; j++)
        printf("%lld ", arr[j]);
      break;
    }
  }
  return 0;
}
