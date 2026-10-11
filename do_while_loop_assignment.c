/*A password system requires the user to enter the correct password "1234" to log in. Using a
do while loop, write a program that keeps prompting the user for the password until the
correct one is entered. Once correct, display "Access Granted".*/
//AURTHOR: MAXWELL KABARI
//ADMN: BCS-05-0073/2026

#include <stdio.h>
#include <string.h>

int main() {
    char password[50];

    do {
        printf("Enter the password: ");
        scanf("%s", password);
    } while (strcmp(password, "1234") != 0);

    printf("Access Granted\n");

    return 0;
}
