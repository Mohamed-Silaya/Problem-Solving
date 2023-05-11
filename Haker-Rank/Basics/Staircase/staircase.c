void staircase(int n) {
    int i=0,j=0;
     for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print hash symbols
        for (int j = 1; j <= i; j++) {
            printf("#");
        }
        // Print newline character
        printf("\n");
    }
}

