#include <stdio.h>
#include <time.h>
#define SIZE 20

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 0-99까지의 난수를 무작위로 배열에 넣습니다.
void radomlNumberInsertedTo(int array[]) {
    srand(time(NULL));

    for(int i=0; i<SIZE; i++) {
        array[i] = rand() & 100;
    }
}

void printArray(int array[]) {
    for(int i=0; i<SIZE; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void bubbleSort(int array[]) {
    for(int i=SIZE-1; i>0; i--) {
        for(int j=0; j<i; j++) {
            // 인접한 값 두개를 비교해가며 작은 인덱스에 해당하는 값이 더 크다면 서로 스왑하여 위치 변경
            if(array[j] > array[j+1]) {
                swap(&array[j], &array[j+1]);
            }
        }
    }
}

int main(void) {
    int array[SIZE];
    RandomNumberInsertTo(array);

    return 0;
}