#include <stdio.h>

int main() {
  // Define a 2D array with 6 rows and 4 columns
  int arr[6][4] = {{1, 2, 3, 4},     {5, 6, 7, 8},     {9, 10, 11, 12},
                   {13, 14, 15, 16}, {17, 18, 19, 20}, {21, 22, 23, 24}};

  printf("2D Array Traversal (6 rows x 4 columns):\n");
  printf("=========================================\n\n");

  // Traverse and print each element
  for (int i = 0; i < 6; i++) {
    printf("Row %d: ", i);
    for (int j = 0; j < 4; j++) {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }

  printf("\n");
  printf("All elements in order:\n");

  // Alternative traversal - print all elements in a single line
  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 4; j++) {
      printf("arr[%d][%d] = %d\n", i, j, arr[i][j]);
    }
  }

  return 0;
}
