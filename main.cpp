#include <iostream>
#include <string.h>

//void usage(const char *program_name) {
//    printf("Sposob uzycia: %s <komunikat> <#powtorzen>\n", program_name);
//    exit(1);
//}


int main(int argc, char const *argv[]) {
    int count;

    if (argc == 4) {
        int number1 = atoi(argv[1]);
        int number2 = atoi(argv[3]);

        if (!strcmp("add", argv[2])) {
            count = number1 + number2;
            printf("%d + %d = %d\n", number1, number2, count);
            return 0;
        }
        if (!strcmp("sub", argv[2])) {
            count = number1 - number2;
            printf("%d +(- %d) = %d\n", number1, number2, count);
            return 0;
        }
        if (!strcmp("mult", argv[2])) {
            count = number1 * number2;
            printf("%d * %d = %d\n", number1, number2, count);
            return 0;
        }
        if (!strcmp("div", argv[2])) {
            count = number1 / number2;
            if (number2 == 0){

                printf("YOU SHALL NOT DIVIDE by 0\n");

                return 0;
            }
            printf("%d / %d = %d\n", number1, number2, count);
            return 0;
        }
    }
    return 0;
}