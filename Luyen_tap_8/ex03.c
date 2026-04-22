#include <stdio.h>

typedef struct {
    char ten[100];
    int tuoi;
} Owner;

typedef struct {
    char model[100];
    int nam;
    Owner owner;
} Car;

int main(void) {
    Car car = {"Toyota Camry", 2022, {"Nguyen Van A", 30}};

    printf("Thong tin xe:\n");
    printf("Model: %s\n", car.model);
    printf("Nam san xuat: %d\n", car.nam);
    printf("Chu so huu: %s\n", car.owner.ten);
    printf("Tuoi chu so huu: %d\n", car.owner.tuoi);

    return 0;
}
