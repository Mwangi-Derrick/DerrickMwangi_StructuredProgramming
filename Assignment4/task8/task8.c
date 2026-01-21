#include <stdio.h>

int main() {
  //is this applied in AI? yes for matrix operations
  //is this applied in graphics programming? yes for pixel data
  //what about game development? yes for level design and object placement
  //and data science? yes for data representation
  //how about machine learning? yes for datasets and weight matrices
  //how about computer vision? yes for image processing
  //how about simulations? yes for spatial data
  //is this used in neural networks? yes for weight matrices
  //and deep learning? yes for tensor representations
  //and 3d modeling? yes for vertex and face data
  //so this expresses multivariate calculus? yes for functions of several variables
  // Define a 2D array with 6 rows and 4 columns
  int arr[6][4] = {{1, 2, 3, 4},     {5, 6, 7, 8},     {9, 10, 11, 12},
                   {13, 14, 15, 16}, {17, 18, 19, 20}, {21, 22, 23, 24}};

  printf("2D Array Traversal (6 rows x 4 columns):\n");
  printf("=========================================\n\n");

  // Traverse and print each element
  //outer loop for rows and inner loop for columns
  for (int i = 0; i < 6; i++) {
    printf("Row %d: ", i);
    //so we traverse each row one by one then print each column in that row till we finish all rows? right
    //yes exactly
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
