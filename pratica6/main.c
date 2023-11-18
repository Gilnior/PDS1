#include <stdio.h>

int factorial(int n){
    if (n < 2){
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

float euler_number() {
    int i= 0;
    float stop_point = 0.000001, e=0, iter;

    do {
        iter = 1./factorial(i);
        e += iter;
        i++;
    } while (iter >= stop_point);

    return e;    
}

char calc_concept(int grade) {
    char concept;
    
    switch (grade) {
        case 5:
            concept = 'E';
            break;
        case 6:
            concept = 'D';
            break;
        case 7:
            concept = 'C';
            break;
        case 8:
            concept = 'B';
            break;
        case 9:
            concept = 'A';
            break;
        default:
            concept = grade < 5? 'F':'A';
    }

    return concept;
}

void read_grade_and_print_concept(){
    int grade;

    scanf("%d", &grade);

    printf("\nGrade: %d  (%c)", grade, calc_concept(grade));
}

void floyd_triangle(int n){
    int line = 1, number=1, printed_numbers;

    for (line=1; line<=n; line++) {
        printed_numbers = 0;

        while (printed_numbers < line){
            printf("%d ", number);
            number ++;
            printed_numbers ++;
        }
        printf("\n");
    }
} 

void read_string_and_print_len(){
    char linha[128];
    printf("digite uma linha:\n");
    fgets(linha, 128, stdin);

    int i = 0;

    while (linha[i] != '\0' && i<128) {
        i++;
    }
    i --; // minus string final

    printf("\n The line:\n%s has length %d", linha, i);

}

void to_uppercase(char string[255]) {
    int i=0;

    while (string[i] != '\0' && i<255) {

        if (string[i] >= 97 && string[i] <= 122){
        string[i] -= 32;
        }
        i++;
    }
}

int is_palindrome(char string[255]) {
    char string_end = '\0';
    int i=0, j=0, index_string_end=0;

    while (string[i]!=string_end) {
        i++;
    }
    
    index_string_end = i;

    for (i=index_string_end-1; i>0; i--){
        if(string[i] != string[j]){
            return 0;
        }
        j++;
    }

    return 1;

}

void read_input_and_print_inverse(){
    char text[255], text2[255];
    int i=0, j=0;

    while(i<255){
        text[i] = getc(stdin);
        text2[i] = text[i];
        if (text[i] == '.') {
            break;
        }
        i++;
    }
    text[i+1] = '\0';

    while(i>=0) {
        text[j] = text2[i];
        j++;
        i--;
    }

    printf("%s", text);

}

void read_name_and_print_shortened(){
    char name[255], short_name[255], c;
    int i=0, j, k=0;

    while(i<255){
        name[i] = getc(stdin);
        if (name[i] == '.') {
            break;
        }
        i++;
    }
    name[++i] = '\0';

    for (j=0;j<i;j++){
        if (name[j] !=' ' && (name[j-1] == ' ' || j == 0)){
            if (name[j] == 'd' && (((
                (name[j+1]) == 'e' || name[j+1] == 'o' || name[j+1] == 'e') && name[j+2]==' ') || ((name[j+1] == 'a' || name[j+1]=='o' || name[j+1]=='a' ) && (name[j+2]=='s' && name[j+3]==' '))) 
            ){
                continue;
            }

            c = name[j];
            to_uppercase(&c);
            short_name[k] = c;
            short_name[++k] = '.';
            k++;
        }
    }
    short_name[++k]= '\0';

    printf("Name: %s\n Short Name: %s", name, short_name);

}


int main() {

    // printf("e=%f", euler_number());

    // read_grade_and_print_concept();

    // floyd_triangle(10);

    // read_string_and_print_len();

    // char x[] = "abcd Abcs";
    // printf("%s", x);
    // to_uppercase(x);
    // printf("\n%s", x);

    // char x[] = "aba";
    // printf("%s is palindrome? %d", x, is_palindrome(x));
    // char y[] = "ab";
    // printf("%s is palindrome? %d", y, is_palindrome(y));

    // read_input_and_print_inverse();

    read_name_and_print_shortened();

    return 0;
}