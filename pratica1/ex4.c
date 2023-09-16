#include <stdio.h>

struct Person{
    float height;
    float weight;
};

float bmi (struct Person someone){
    return someone.weight/ (someone.height * someone.height);
}

float weight_change_to_healthy_bmi(struct Person someone){
    float weight_change, someone_bmi;
    float min_healthy_bmi = 18.5;
    float max_healthy_bmi = 25;

    someone_bmi = bmi(someone);

    if (someone_bmi > max_healthy_bmi){
        weight_change = someone.weight - max_healthy_bmi * someone.height * someone.height;
    } else if (someone_bmi < min_healthy_bmi) {
        weight_change = someone.weight - min_healthy_bmi * someone.height * someone.height;
    }  else {
        weight_change = 0;
    }

    return weight_change;

}
void weight_change_message(float weight_change){
    if (weight_change < 0) {
        printf("needs to gain %.2f\n", -weight_change);
    } else if(weight_change > 0) {
        printf("needs to lose %.2f\n", weight_change);
    } else {
        printf("doesn't need to lose or gain weight\n");
    }
}

int main(){
    struct Person brutus, olivia;

    brutus.height = 1.84;
    brutus.weight =  122;
    
    olivia.height = 1.76;
    olivia.weight = 45.;

    float olivia_bmi = bmi(olivia);
    float brutus_bmi = bmi(brutus);

    float brutus_weight_change = weight_change_to_healthy_bmi(brutus);
    float olivia_weight_change = weight_change_to_healthy_bmi(olivia);


    printf("Brutus's BMI is %.2f and ", brutus_bmi);
    weight_change_message(brutus_weight_change);
    printf("Olivia's BMI is %.2f and ", olivia_bmi);
    weight_change_message(olivia_weight_change);
    return 0;
}