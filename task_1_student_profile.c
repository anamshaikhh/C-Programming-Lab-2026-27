#include <stdio.h>

int main(void) {
    char name[] = "Shaikh Anam Khalid";
    int age = 21;
    int roll = 54;
    char student_class[] = "First year";
    char division = 'F';
    char uin[] = "261P117";

    printf("==============================\n");
    printf("       STUDENT PROFILE\n");
    printf("==============================\n");
    printf("Name:\t\t%s\nAge:\t\t%d\nClass:\t\t%s\nDivision:\t%c\nUIN:\t\t%s\n",
           name, age, student_class, division, uin);
    printf("Roll No.:\t%d\n", roll);
    printf("==============================\n");
    return 0;
}
