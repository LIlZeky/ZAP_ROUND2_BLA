#include <stdio.h>

int is_white(const char c);
void change_whites(char string[]);
int guess_eval(const int guess, const int my_number);
int leap_year(const int year);
int count_positives(const int size, const int array[]);
int is_prime(const int num);
int count_whites(const char string[]);
int all_positives(const int size, const int array[]);
int binary_num(const int num);
void swap_sign(const int size, int array[]);
int div_by_3(const int num);
int same_case(const char a, const char b);
int direction_correction(const int degree);
int last_positive(const int size, const int array[]);
void string_to_upper(char string[]);

int main() {
    return 0;
}

//1
int is_white(const char c){
    if(c == ' ' || c == '\t' || c == '\n'){
        return 1;
    } else{
        return 0;
    }
}
//2
void change_whites(char string[]){
    for(int i = 0; string[i] != '\0'; i++){
        if(string[i] == ' ' || string[i] == '\n'){
            string[i] == '.';
        }
    }
}
//3
int guess_eval(const int guess, const int my_number){
    if(guess == my_number){
        return 1;
    }else if(my_number >= guess){
        return 2;
    }else{
        return 0;
    }
}
//4
int leap_year(const int year){
    if(year > 4443) return -1;
    if(year % 400 == 0) return 1;
    if(year % 100 == 0) return 0;
    if(year % 4 == 0) return 1;
    return 0;
}

//5
int count_positives(const int size, const int array[]){
    if (array == NULL) return -1;
    int count = 0;
    for(int i = 0; i < size; i++){
        if(array[i] > 0){
            count++;
        }
    }
    return count;
}
//6
int count_whites(const char string[]){
    if (string == NULL) return -1;
    int count = 0;
    for(int i = 0; string[i] != '\0'; i++){
        if(string[i] == ' ' || string[i] == '\n' || string[i] == '\t'){
            count++;
        }
    }
    return count;
}
//6
int all_positives(const int size, const int array[]){
    if(array == NULL)return -1;
    for(int i = 0; i < size; i++){
        if(array[i] <= 0){
            return 0;
        }
    }
    return 1;
}
int binary_num(const int num){
    if (num < -1000 || num > 1000) {
        return -1;
    } else if (num == 0 || num == 1) {
        return 1;
    } else {
        return 0;
    }

}

void swap_sign(const int size, int array[]){
    for(int i = 0; i < size; i++){
        array[i] = -array[i];
    }
}
int div_by_3(const int num){
    if(num % 3 == 0){
        return 1;
    } else{
        return 0;
    }
}

int same_case(const char a, const char b) {
    if (!((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z')) ||
        !((b >= 'A' && b <= 'Z') || (b >= 'a' && b <= 'z'))) {
        return -1; 
    }

    if ((a >= 'A' && a <= 'Z' && b >= 'A' && b <= 'Z') ||
        (a >= 'a' && a <= 'z' && b >= 'a' && b <= 'z')) {
        return 1; 
    }

    return 0;
}

int find_first_A(const char string[]){
    for(int i = 0; string[i] !='\n'; i++){
        if(string[i] == 'A' || string[i] == 'a'){
            return i;
        }
    }
    return -1;
}

int direction_correction(const int degree) {
    if (degree < 0 || degree % 90 != 0) {
        return -1;
    }
    return (degree % 360);
}

int last_positive(const int size, const int array[]) {
    if (array == NULL) return -1;
    int last = -1;
    for (int i = 0; i < size; i++) {
        if (array[i] > 0) {
            last = array[i];
        }
    }
    return last;
}



int is_prime(const int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

void string_to_upper(char string[]) {
    if (string == NULL) {
        return -1;
    }

    for (int i = 0; string[i] != '\0'; i++) {
        string[i] = toupper(string[i]);
    }
}

void string_to_upper(char string[]) {
    if (string == NULL) {
        return;
    }
    
    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] >= 'a' && string[i] <= 'z') {
            string[i] = string[i] - ('a' - 'A');
        }
    }
}

int count_leap_year(const int size, const int array[]) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if ((array[i] % 4 == 0 && array[i] % 100 != 0) || (array[i] % 400 == 0)) {
            count++;
        }
    }
    return count;
}
