/*
Various sorting algorithms in C
*/
#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#ifndef SORTING_H
#define SORTING_H

#define SIZE 100
#define MAX 1000

void print_array(int *array, int size);
void swap(int *a, int *b);

void bubble_sort(int *array, int size);
void selection_sort(int *array, int size);
void insertion_sort(int *array, int size);
void quick_sort(int *array, int size);
void quick_sort_helper(int *array, int low, int high);

#endif