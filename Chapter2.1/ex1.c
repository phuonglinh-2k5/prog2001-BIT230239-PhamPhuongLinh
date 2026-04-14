#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// ====== Bài 1 ======
void ex1() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Addition: %d\n", num1 + num2);
    printf("Subtraction: %d\n", num1 - num2);
    printf("Multiplication: %d\n", num1 * num2);
    printf("Division: %d\n", num1 / num2);
    printf("Modulus: %d\n", num1 % num2);
}

// ====== Bài 2 ======
void ex2() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a > b)
        printf("%d is greater than %d\n", a, b);
    else if (a < b)
        printf("%d is less than %d\n", a, b);
    else
        printf("%d is equal to %d\n", a, b);
}

// ====== Bài 3 ======
void ex3() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= 10 && num <= 50)
        printf("The number is between 10 and 50.\n");
    else
        printf("The number is not in the range.\n");
}

// ====== Bài 4 ======
void ex4() {
    int num = 10;

    printf("Initial value: %d\n", num);

    num += 5;
    printf("After +=5: %d\n", num);

    num -= 3;
    printf("After -=3: %d\n", num);

    num *= 2;
    printf("After *=2: %d\n", num);

    num /= 4;
    printf("After /=4: %d\n", num);
}

// ====== Bài 5 ======
void ex5() {
    printf("Hello, World!\n");
}

// ====== Bài 6 ======
void ex6() {
    int number = atoi("123");
    printf("Converted number = %d\n", number);
}

// ====== Bài 7 ======
void ex7() {
    double x = 16.0;
    printf("Square root of %.1f is %.1f\n", x, sqrt(x));
}

// ====== MAIN ======
int main() {
    int choice;

    do {
        printf("\n===== MENU =====\n");
        printf("1. Bai 1\n");
        printf("2. Bai 2\n");
        printf("3. Bai 3\n");
        printf("4. Bai 4\n");
        printf("5. Bai 5\n");
        printf("6. Bai 6\n");
        printf("7. Bai 7\n");
        printf("0. Thoat\n");
        printf("Chon: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: ex1(); break;
            case 2: ex2(); break;
            case 3: ex3(); break;
            case 4: ex4(); break;
            case 5: ex5(); break;
            case 6: ex6(); break;
            case 7: ex7(); break;
            case 0: printf("Thoat...\n"); break;
            default: printf("Chon sai!\n");
        }

    } while (choice != 0);

    return 0;
}