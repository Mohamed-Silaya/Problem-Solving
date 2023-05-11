void bubbleSort(int n, int* arr) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void miniMaxSum(int arr_count, int* arr) {
    bubbleSort(arr_count, arr);
    int i=0,sum_1=0,sum_2=0;
    
    for (i=0;i<arr_count-1;i++)
    {
        sum_1+=arr[i];
    }
        printf("%d ",sum_1);
        
     for (i=1;i<arr_count;i++)
    {
        sum_2+=arr[i];
    }
        printf("%d",sum_2);

} 

