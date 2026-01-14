#include <stdio.h>

int main() {
  int n;

  // Prompt user for the number of elements
  printf("Input the number of elements to be stored in the array : ");
  scanf("%d", &n);

  // Declare array of size n
  int arr[n];

  // Read elements into the array
  printf("Input %d elements in the array :\n", n);
  for (int i = 0; i < n; i++) {
    printf("element - %d : ", i);
    scanf("%d", &arr[i]);
  }

  // Initialize max and min with the first element
  int max = arr[0];
  int min = arr[0];

  // Find maximum and minimum
  for (int i = 1; i < n; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
    if (arr[i] < min) {
      min = arr[i];
    }
  }

  // Display results
  printf("\nMaximum element is : %d\n", max);
  printf("Minimum element is : %d\n", min);

  return 0;
}
