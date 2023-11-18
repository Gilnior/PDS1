#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

double scalar_product(double u[], double v[], double n) {
    int i;
    double result = 1;

    for (i=0;i<n;i++) {
        result *= u[i] * v[i];
    }

    return result;
}


unsigned long long int fibonacci(int n) {
    if (n < 2) {
        return 1;
    }

    return fibonacci(n-1) + fibonacci(n-2);
}

double mean(double v[], int n) {
    int i;
    double avg = 0;
    for (i=0; i<n;i++) {
        avg += v[i];
    }

    return avg/n;
}

void aux_randomize_vector(double v[], int n) {
    int i;
    double r;

    for(i=0; i<n; i++) {
        r = rand();
        v[i] = r;
    }
}

void aux_read_vector(int v[10]) {
    int i;

    for(i=0; i<10; i++) {
        v[i] = getchar() - '0';
    }
}

void read_vectors_and_create_another_intercalated(){
    int x[10], y[10], z[20], i, xi=0, yi=0;

    aux_read_vector(x);
    aux_read_vector(y);

    for (i=0; i<20; i++) {
        if(i%2==0){
            z[i] = y[yi];
            yi++;
        } else {
            z[i] = x[xi];
            xi++;
        }
        printf("z[%d] = %d, ", i, z[i]);    
    }

}

void reverse_array(int v[]) {
    int n = getchar() - '0', i;
    int u[n], j=n-1;

    for(i=0;i<n;i++) {
        u[i] = v[j];

        printf("u[%d] = %d\n", i, u[i]);
        j--;
    }
}

void vectors_union(int u[60], int v[60]) {
    int i;
    for (i=0; i<60;i++){
        u[i] = rand() % 366;
        v[i] = rand() % 366;
    }

    int x[60*2];

    for(i=0;i<60*2; i++) {
        if (i<60) {
        x[i] = u[i];
        } else {
        x[i] = v[i-60];
        }
        printf("x[%d] = %d, ", i, x[i]);
    }

}

void test_rand() {
    int i, r, to_generate = 5000000, upper_limit=999, most_frequent=0, least_frequent=to_generate, index_most_frequent=0, index_least_frequent=0;
    int dist[upper_limit+1];

    for(i=0;i<upper_limit;i++) {
        dist[i] = 0;
    }

    for (i=0;i<to_generate; i++) {
        r = rand() % (upper_limit+1);

        dist[r] ++;

        if (dist[r] > most_frequent){
            index_most_frequent = r;
            most_frequent = dist[r];
        } 
        if (dist[r] < least_frequent){
            index_least_frequent = r;
            least_frequent = dist[r];
        }

    }

    least_frequent = dist[index_least_frequent];

    int amplitude = most_frequent - least_frequent;

    printf("Most frequent number: %d (%d times)\nLeast frequent number: %d (%d times)\nThe amplitude: %d\n", index_most_frequent, most_frequent, index_least_frequent, least_frequent, amplitude);

}

int main(){

    // double v[3];

    // int n = getc(stdin) - '0';
    // printf("n=%d fib=%llu", n, fibonacci(n));

    // aux_randomize_vector(v, 3);
    // printf("mean=%f \n", mean(v, 3));

    // read_vectors_and_create_another_intercalated();
    
    // int x[] = {1, 2, 3, 4};
    // reverse_array(x); 

    // int u[60], v[60];

    // vectors_union(u, v);

    test_rand();

    return 0;
}