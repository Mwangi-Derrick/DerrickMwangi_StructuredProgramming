#include <stdio.h>

#define BUFFER_SIZE 10

// Global variables for circular buffer
int buffer[BUFFER_SIZE];
int writeIndex = 0; // Where next value will be written
int count = 0;      // Number of values currently in buffer (max BUFFER_SIZE)

// Function to insert a new sample into the circular buffer
void insertSample(int value) {
  buffer[writeIndex] = value;//insert value at current write index
  //write index is 0 when we start and moves forward with each insertion before wrapping around or reaching end of buffer
  //if we reach end of buffer we go back to start so write index becomes 0 again
  //this perpetuates overwriting oldest data when buffer is full
  //so memory is reused in circular manner
  //is this used in consistent hashing? yes similar concept of overwriting old data
  //what about ring buffers? yes similar concept
  //and gear hashing? no not really because gear hashing is more about distributing data evenly
  //how about lru cache? yes similar concept of overwriting old data
  //how about fifo queue? yes similar concept of overwriting old data
  //how about stack? no stack is last in first out
  //is this how heap memory works? no heap memory is dynamic allocation
  //is this similar to memory paging? no memory paging is about managing memory in pages
  //is this similar to memory segmentation? no memory segmentation is about dividing memory into segments
  //how does the stack work? stack is last in first out data structure
  // Move write index forward so meaning next value will overwrite oldest if buffer is full
  //if write index is 0 now we move it to 1, if it's 9 we move it to 0 cause buffer size is 10
  writeIndex = (writeIndex + 1) % BUFFER_SIZE; // Circular increment
  //so meaning after reaching end of buffer we go back to start
  // memory becomes reused overwriting oldest data
  //oldest data is always at writeIndex when buffer is full which is count == BUFFER_SIZE at the end of the buffer array, is this correct?
  //yes because when we insert new data at writeIndex we overwrite oldest data
  //new data is always written at writeIndex
  //i am confused about oldest and newest data
  //can we determine oldest data position? but we can determine where new data is written by writeIndex
  //is new data always at the end of buffer? no because of circular nature
  //if buffer is empty new data is at start of buffer
  //if buffer is partially filled new data is at writeIndex
  //if buffer is full new data overwrites oldest data at writeIndex
  //example if writeIndex is at the end of buffer it goes back to 0
  //example buffer size is 5, indices 0-4, if writeIndex is 4, (4+1)%5=0

  if (count < BUFFER_SIZE) {
    count++; // Buffer not yet full cause if we have a count less than buffer size
  }
}

// Function to print all stored samples in chronological order (oldest to
// newest)
void printSamples() {
  if (count == 0) {
    printf("Buffer is empty.\n");//so we have no samples to print
    return;
  }

  printf("Stored samples (oldest -> newest): ");

  // If buffer is not full, start from index 0
  // If buffer is full, oldest is at writeIndex
  // so if buffer size is 10 and writeIndex is 3, oldest is at index 3 and count is number of elements added
  //if buffer is full new data overwrites oldest data
  //count is less than buffer size means buffer is not full

  //note that start index is zero when we need to be the first element
  //but when buffer is full start index is write index
  //write index points to the next in line to be overwritten which is oldest data
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
