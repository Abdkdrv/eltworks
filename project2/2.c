#include <stdio.h>
#include <stdlib.h>
#include "add.h"
#include "divide.h"
#include "multiply.h"
#include "subtract.h"


// Объявляем тип указателя на функцию
typedef float (*Operation)(float, float);

int main() {
    char operator;
    float operand1, operand2, result;

    // Создаем массив указателей на функции
    Operation operations[] = {add, subtract, multiply, divide};
    int num_operations = sizeof(operations) / sizeof(operations[0]);

    while (1) {
        // Выводим меню
        printf("Выберите операцию (+, -, *, /) или q для выхода: ");
        scanf(" %c", &operator);

        // Если пользователь ввел 'q', выходим из программы
        if (operator == 'q') {
            printf("Выход из программы.\n");
            break;
        }

        // Поиск выбранной операции
        Operation chosen_operation = NULL;
        for (int i = 0; i < num_operations; ++i) {
            if (operator == "+-*/"[i]) {
                chosen_operation = operations[i];
                break;
            }
        }

        // Если операция не найдена, выводим сообщение об ошибке
        if (chosen_operation == NULL) {
            printf("Ошибка: неверная операция\n");
            continue; // Переходим к следующей итерации цикла
        }

        // Запрашиваем у пользователя аргументы
        printf("Введите два числа: ");
        scanf("%f %f", &operand1, &operand2);

        // Выполняем выбранную операцию
        result = chosen_operation(operand1, operand2);

        // Выводим результат
        printf("Результат: %f\n", result);
    }

    return 0;
}