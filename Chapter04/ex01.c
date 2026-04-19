#include <stdio.h>
//slide 15
int add (int a, int b) {
    return a + b;
}
int main() {
    int num1 = 5, num2 = 10;
    int sum = add(num1, num2);

    printf("The sum of %d and %d is: %d\n", num1, num2, sum);
    return 0;
}
/* slide 17
void swap(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 5, b = 10;
    printf("Before swapping: a = %d, b = %d\n", a, b);
    swap(&a, &b);

    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}*/
/* slide 19
int finMax(int a, int b, int c) {
if (a > b && a > c) {
return a;
}
else if ( b > c) {
return b;
}
else {
return c;
}
}

int main() {
int num1 = 12, num2 =25, num3 = 18;
int max = finMax(num1, num2, num3);
printf("The largest number among %d, %d and %d is: %d\n", num1, num2, num3, max);
return 0;

}
*/

/* slide 24

void printMessage() {
printf("Hello, this is a message from a void function!\n");
}

int main() {
printMessage();
return 0;
}
*/
/* slide 26
int add(int a, int b) {
    return a + b;
}

int main() {
    int num1 = 3, num2 = 7;
    int result = add(num1, num2);
    printf("The sum of %d and %d is: %d\n", num1, num2, result);
    return 0;
}
*/
/* slide 28
float calculateArea(float radius) {
    return PI * radius * radius;
}
int main() {
    float raius = 5.5;
    float area = calculateArea(raius);
    printf("The area of the circle with radius %.2f is: %.2f\n", radius, area);
    return 0;
}
*/
/*slide 30
void modifyArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] *= 2;
    }
};
int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    modifyArray(numbers, size);
    printf("Modified array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);

    }
    printf("\n");
    return 0;
}*/