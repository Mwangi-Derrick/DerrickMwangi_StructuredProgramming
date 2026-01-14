#include <stdio.h>

int main() {
  int n;

  // Prompt user for the size of array
  printf("Input the size of array : ");
  scanf("%d", &n);

  // Declare array with extra space for insertion
  int arr[n + 1];

  // Read elements into the array
  printf("Input %d elements in the array in ascending order:\n", n);
  for (int i = 0; i < n; i++) {
    printf("element - %d : ", i);
    scanf("%d", &arr[i]);
  }

  // Get value to be inserted
  int value;
  printf("Input the value to be inserted : ");
  scanf("%d", &value);

  // Get position where value should be inserted
  int pos;
  printf("Input the Position, where the value to be inserted : ");
  scanf("%d", &pos);

  // Display current list
  printf("\nThe current list of the array : ");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  // Shift elements to the right from position pos
  for (int i = n; i >= pos; i--) {
    arr[i] = arr[i - 1];
  }

  // Insert the value at the specified position
  arr[pos - 1] = value;

  // Display new list after insertion
  printf("After Insert the element the new list is : ");
  for (int i = 0; i <= n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}
