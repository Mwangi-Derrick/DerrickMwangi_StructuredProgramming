#include <stdio.h>

#define BUFFER_SIZE 10

// Global variables for circular buffer
int buffer[BUFFER_SIZE];
int writeIndex = 0; // Where next value will be written
int count = 0;      // Number of values currently in buffer (max BUFFER_SIZE)

// Function to insert a new sample into the circular buffer
void insertSample(int value) {
  buffer[writeIndex] = value;
  writeIndex = (writeIndex + 1) % BUFFER_SIZE; // Circular increment

  if (count < BUFFER_SIZE) {
    count++; // Buffer not yet full
  }
}

// Function to print all stored samples in chronological order (oldest to
// newest)
void printSamples() {
  if (count == 0) {
    printf("Buffer is empty.\n");
    return;
  }

  printf("Stored samples (oldest -> newest): ");

  // If buffer is not full, start from index 0
  // If buffer is full, oldest is at writeIndex
  int startIndex = (count < BUFFER_SIZE) ? 0 : writeIndex;

  for (int i = 0; i < count; i++) {
    int index = (startIndex + i) % BUFFER_SIZE;
    printf("%d ", buffer[index]);
  }
  printf("\n");
}

int main() {
  int choice, value;

  printf("=== Circular Data Logger ===\n");
  printf("Buffer Size: %d\n\n", BUFFER_SIZE);

  while (1) {
    printf("\nMenu:\n");
    printf("1. Insert new sample\n");
    printf("2. Print all samples\n");
    printf("3. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
    case 1:
      printf("Enter sensor value: ");
      scanf("%d", &value);
      insertSample(value);
      printf("Sample %d inserted.\n", value);
      break;

    case 2:
      printSamples();
      break;

    case 3:
      printf("Exiting...\n");
      return 0;

    default:
      printf("Invalid choice! Please try again.\n");
    }
  }

  return 0;
}
