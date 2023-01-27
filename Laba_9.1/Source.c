#include "functions.h"

int main() {
	int amount_arrays;
	printf("Enter amount of arrays: ");
	scanf("%d", &amount_arrays);
	int* size_of_arrays = (int*)malloc(amount_arrays * sizeof(int));
	input_size_of_arr(amount_arrays, size_of_arrays);
	int* arrays = (int*)malloc(find_suma(size_of_arrays, amount_arrays) * sizeof(int));
	input_arrays(arrays, amount_arrays, size_of_arrays);
	print_array(arrays, amount_arrays, size_of_arrays);
	buble_sort_array(arrays, amount_arrays, size_of_arrays);
	print_array(arrays, amount_arrays, size_of_arrays);
	free(arrays);
	free(size_of_arrays);
	return 0;
}