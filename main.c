#include <stdio.h>//Hey compiler, before compiling my program, include the contents of the Standard Input/Output Header file.
#include <stdbool.h>  //To use bool, true, and false, you must include the header:

int main() {
    // int myAge = 25;
    // int year = 2020;
    // double money = 100.12346789;
    // char grade = 'A';
    // char email[] = "sonal123@gmail.com";
    // printf("You are %d years old.\n", myAge);
    // printf("The year is %d.\n", year);
    // printf("The money is %.4f \n", money);
    // printf("The grade is %c.\n", grade);
    // printf("Your email is %s\n", email);

    bool isOnline = false;

    if (isOnline) {
        printf("Is Online\n");
    } else {
        printf("Is Not Online\n");
    }

    return 0;
}
