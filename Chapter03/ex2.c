#include <stdio.h>

//slide 5
void bai1() {
    int x = 10;

    {
        int y = 20;
        printf("Inside outer block: x = %d, y = %d\n", x, y);

        {
            int z = 30;
            printf("Inside inner block: x = %d, y = %d, z = %d\n", x, y, z);
        }
    }
    printf("Outside all blocks: x = %d\n", x);
}

//slide 11
int globalVar = 100;

void display() {
    printf("Global Variable = %d\n", globalVar);
}

void bai2() {
    printf("Global Variable = %d\n", globalVar);
    display();
}

//slide 12
void increment() {
    static int counter = 0;
    counter++;
    printf("Counter = %d\n", counter);
}

void bai3() {
    increment();
    increment();
    increment();
}

// ===== MAIN =====
int main() {
    int choice;

    printf("Chon bai muon chay:\n");
    printf("1. Block scope\n");
    printf("2. Global variable\n");
    printf("3. Static variable\n");
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