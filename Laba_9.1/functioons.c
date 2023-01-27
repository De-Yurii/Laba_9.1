#include "functions.h"

int find_suma(int* Array, int amount) {
	int suma = 0;
	for (int i = 0; i < amount; i++) {
		suma += Array[i];
	}
	return suma;
}
void print_array(int* arrays, int amount_arrays, int* size_array) {
	int some = 0;
	for (int current_array = 0; current_array < amount_arrays; current_array++) {
		printf("Array %d: ", current_array + 1);
		for (int j = 0; j < size_array[current_array]; j++) {
			printf("%d ", arrays[some + j]);
		}
		printf("\n");
		some += size_array[current_array];
	}
}
void input_arrays(int* arrays, int amount_arrays, int* size_array) {
	int some = 0;
	for (int i = 0; i < amount_arrays; i++) {
		for (int j = 0; j < size_array[i]; j++) {
			printf("Enter the %d element of %d array: ", j + 1, i + 1);
			scanf("%d", &arrays[some + j]);
		}
		some += size_array[i];
	}
}
buble_sort_array(int* arrays, int amount_arrays, int* size_array) {
	int some = 0;
	for (int current_array = 0; current_array < amount_arrays; current_array++) {
		for (int i = 0; i < size_array[current_array] - 1; i++) {
			if (size_array[current_array] == 1) break;

			for (int j = 0; j < size_array[current_array] - 1 - i; j++) {
				if (arrays[j + some + 1] > arrays[j + some]) {
					int temp;
					temp = arrays[j + some];
					arrays[j + some] = arrays[j + some + 1];
					arrays[j + some + 1] = temp;
				}
			}
		}
		some += size_array[current_array];
	}
}
void input_size_of_arr(int amount_arrays, int* size_of_arrays) {
	for (int i = 0; i < amount_arrays; i++) {
		printf("Enter the size of %d-th array: ", i + 1);
		scanf("%d", &size_of_arrays[i]);
	}
}