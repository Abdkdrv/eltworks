float divide(float a, float b) {
    if (b == 0) {
        printf("Ошибка: деление на ноль\n");
        return 0;
    } else {
        return a / b;
    }
}
