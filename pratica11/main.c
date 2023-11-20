#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

void sort_rows(int m[], int n) {
    int i;
    for (i=0;i<n;i++) {
        qsort(m, 6, sizeof(int), compare);
    }
}

int check_equal_arrays(int u[], int v[], int n){
    int i;

    for(i=0;i<n;i++) {
        if(u[i] != v[i]) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int row[6], winners=0, lost_numbers_tried=0; // Tv series Lost, btw
    FILE *arq;
    arq = fopen("cartelas.txt", "r");

    int winner_numbers[] = {6, 9, 22, 23, 48, 52};
    int lost_numbers[] = {4, 8, 15, 16, 23, 42};

    while (feof(arq)==0) {
    fscanf(arq, "%d %d %d %d %d %d", &row[0], &row[1], &row[2], &row[3], &row[4], &row[5]);

    sort_rows(row, 1);

    if (check_equal_arrays(row,winner_numbers, 6)) {
        winners ++;
    } else if(check_equal_arrays(row,lost_numbers, 6)) {
        lost_numbers_tried ++;
    }
    }

    fclose(arq);
    printf("winners=%d lost_numbers_tried=%d\n", winners, lost_numbers_tried);
}