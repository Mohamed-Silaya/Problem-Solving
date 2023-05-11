int diagonalDifference(int arr_rows, int arr_columns, int** arr) {
    int i=0,sum_1=0,sum_2=0;
    for (i=0;i< arr_rows;i++)
    {
        sum_1+=arr[i][i];
        sum_2+=arr[i][arr_rows - i - 1];
        
    }
    return abs (sum_1 - sum_2);
}
