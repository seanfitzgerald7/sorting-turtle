#include "sorting.h"

int array[SIZE];

void print_array(int *array, int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(int *array, int size) {
    int i, j;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                swap(&array[j], &array[j + 1]);
            }
        }
    }
}

void selection_sort(int *array, int size) {
    int i, j, min;
    for (i = 0; i < size - 1; i++) {
        min = i;
        for (j = i + 1; j < size; j++) {
            if (array[j] < array[min]) {
                min = j;
            }
        }
        swap(&array[i], &array[min]);
    }
}

void insertion_sort(int *array, int size) {
    int i, j, key;
    for (i = 1; i < size; i++) {
        key = array[i];
        j = i - 1;
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }
}

void quick_sort(int *array, int size) {
    quick_sort_helper(array, 0, size - 1);
}

void quick_sort_helper(int *array, int low, int high) {
    if (low < high) {
        int pivot = array[high];
        int i = low - 1;
        int j;
        for (j = low; j < high; j++) {
            if (array[j] < pivot) {
                i++;
                swap(&array[i], &array[j]);
            }
        }
        swap(&array[i + 1], &array[high]);
        int pivot_index = i + 1;
        quick_sort_helper(array, low, pivot_index - 1);
        quick_sort_helper(array, pivot_index + 1, high);
    }
}

int main(void)
{
    int i;
    srand(time(NULL));
    for (i = 0; i < SIZE - 1; i++)
        array[i] = rand() % MAX;


    return 0;
}
