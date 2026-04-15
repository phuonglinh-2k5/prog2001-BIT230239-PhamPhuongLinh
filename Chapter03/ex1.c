#include <stdio.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

// slide strcat
void bai1() {
    char str1[] = "Hello";
    char str2[] = "World";

    strcat(str1, str2);  // Concatenates str2 to str1
    printf("Concatenated String: %s\n", str1);
}

// slide time
void bai2() {
    time_t current_time;
    time(&current_time);  // Gets the current time

    printf("Current time: %s", ctime(&current_time));  // Converts time to readable form
}

// slide isalpha
void bai3() {
    char c = 'a';

    if (isalpha(c)) {  // Checks if the character is alphabetic
        printf("%c is a letter.\n", c);
    }
}

// ===== MAIN =====
int main() {
    int choice;

    printf("Chon bai muon chay:\n");
    printf("1. strcat\n");
    printf("2. time\n");
    printf("3. isalpha\n");
    printf("Nhap lua chon: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            bai1();
            break;
        case 2:
            bai2();
            break;
        case 3:
            bai3();
            break;
        default:
            printf("Lua chon khong hop le!\n");
    }

    return 0;
}