#include <stdio.h>

int main() {
  int n;

  // Print header
  printf("Print all unique elements of an array:\n");
  printf("------------------------------------------\n");

  // Prompt user for the number of elements
  printf("Input the number of elements to be stored in the array: ");
  scanf("%d", &n);

  // Declare array of size n
  int arr[n];

  // Read elements into the array
  printf("Input %d elements in the array :\n", n);
  for (int i = 0; i < n; i++) {
    printf("element - %d : ", i);
    scanf("%d", &arr[i]);
  }

  // Find and print unique elements
  printf("\nThe unique elements found in the array are: ");

  for (int i = 0; i < n; i++) {
    int count = 0;

    // Count occurrences of arr[i]
    for (int j = 0; j < n; j++) {
      if (arr[i] == arr[j]) {
        count++;
      }
    }

    // If element appears exactly once and hasn't been printed before
    if (count == 1) {
      printf("%d ", arr[i]);
    }
  }
  printf("\n");

  return 0;
}
