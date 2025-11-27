#include <stdio.h>
#include <stdlib.h>

void Merge(int L[], int start, int end, int mid);
void MergeSort(int L[], int start, int end);
void printList(int L[], int size);

int main(void){
  int L[] = { 5, 3, 8, 1, 6, 10, 7, 2, 4, 9 };
  int L_size = sizeof(L) / sizeof(L[0]);

  printf("Given list \n");
  printList(L, L_size);

  MergeSort(L, 0, L_size - 1);

  printf("The sorted list \n");
  printList(L, L_size);
  return 0;
}

void Merge(int L[], int start, int end, int mid){
  // Allocate space for L_1 and L_2, and populate them with using a for loop
  int* L_1 = malloc(sizeof(int) * (mid + 1));
  int count_1 = 0;
  for (int i = start; i <= mid; i++) {
    L_1[count_1] = L[i];
    count_1++;
  }
  int* L_2 = malloc(sizeof(int) * (mid));
  int count_2 = 0;
  for (int i = mid + 1; i <= end; i++) {
    L_2[count_2] = L[i];
    count_2++;
  }


  int i = 0;
  int j = 0;
  while (i < (mid - start + 1) && j < (end - mid)) {
    if (L_1[i] <= L_2[j]) {
      L[start + i + j] = L_1[i];
      i++;
    } else {
      L[start + i + j] = L_2[j];
      j++;
    }
  }
  if (i == mid - start + 1) {
    for (int k = j; k <= end - mid - 1; k++) {
      L[start + i + k] = L_2[k];
    }
  } else {
    for (int k = i; k <= mid - start; k++) {
      L[start + j + k] = L_1[k];
    }
  }
  free(L_1);
  free(L_2);
}

void MergeSort(int L[], int start, int end){
  if (start < end) {
    int mid = (start + end) / 2;
    MergeSort(L, start, mid);
    MergeSort(L, mid + 1, end);
    Merge(L, start, end, mid);
  }
}

void printList(int L[], int size){
  int i;
  for (i = 0; i < size; i++)
    printf("%d ", L[i]);
  printf("\n");
}
