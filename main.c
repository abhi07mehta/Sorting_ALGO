#include <stdio.h>

int main(void) {
  printf("Welcome to sorting series\n");
  printf("Please select soring any one algorithm\n");
  int selector;
do{
  printf("1:- Selection Sort\n");
  printf("2:- Bubble Sort\n");
  printf("3:- Insertion Sort\n");
  printf("4:- Merge Sort\n");
  printf("5:- Quick Sort\n");
  printf("6:- Heap Sort\n");
  printf("7:- Radix Sort\n");
  printf("8:- Bucket Sort\n");
  printf("9:- Tim Sort\n");
  printf("10:- i do not want to sort\n");
    scanf("%d",&selector);
    printf("you have selected %d sorting algorithm", selector);


}while(selector!=10);
  return 0;
}