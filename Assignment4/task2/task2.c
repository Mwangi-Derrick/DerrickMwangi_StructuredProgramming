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

  // Calculate sum of all elements
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += arr[i];
  }

  // Display the sum
  printf("\nSum of all elements stored in the array is : %d\n", sum);

  return 0;
}
