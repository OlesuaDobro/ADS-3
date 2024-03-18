// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int lower = 0;
  int high = size - 1;
  while (lower <= high) {
    int mid = (lower + high) / 2;
    if (arr[mid] < value) {
      lower = mid + 1;
    } else if (arr[mid] > value) {
      high = mid - 1;
    } else {
      return mid;
    }
  }
  return 0;
}
