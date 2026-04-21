//
// Created by Dell on 4/21/2026.
//

#ifndef CHAPTER04_1_CALLBACK_H
#define CHAPTER04_1_CALLBACK_H
int add(int a, int b);
int sub(int a, int b);
int calculate(int a, int b, int (*operation)(int, int));
#endif //CHAPTER04_1_CALLBACK_H
