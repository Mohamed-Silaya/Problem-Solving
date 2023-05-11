void miniMaxSum(int arr_count, int* arr) {
  long sum = 0, max_sum = LONG_MIN, min_sum = LONG_MAX;
    for (int i = 0; i < arr_count; i++) {
        sum += arr[i];
        if (arr[i] > max_sum) {
            max_sum = arr[i];
        }
        if (arr[i] < min_sum) {
            min_sum = arr[i];
        }
    }
       printf("%ld %ld\n", sum - max_sum, sum - min_sum);

}
