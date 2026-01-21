#include <stdio.h>

int main() {
  int n;

  // Prompt user for the size of array
  printf("Input the size of array : ");
  scanf("%d", &n);

  // Declare array of size n
  int arr[n];

  // Read elements into the array
  printf("Input %d elements in the array :\n", n);
  for (int i = 0; i < n; i++) {
    printf("element - %d : ", i);
    scanf("%d", &arr[i]);
  }

  // Bubble sort algorithm to sort in ascending order
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {//why n-i-1: because after each pass largest element is fixed at the end
      if (arr[j] > arr[j + 1]) {
        // Swap arr[j] and arr[j+1]
        int temp = arr[j];
        arr[j] = arr[j + 1];// Swap present element with next element
        arr[j + 1] = temp;// swap next element with present element
      }
    }
  }

  // Display sorted array
  printf("\nElements of array in sorted ascending order: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}
