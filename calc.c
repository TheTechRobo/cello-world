#include <stdio.h>
#define ADD 1 
#define SUBTRACT 2 
#define MULTIP 3 
#define DIVI 4

int num1, num2, output, calc;
int Addition(int num1, int num2), Subtraction(int num1, int num2), Multiplication(int num1, int num2), Division(int num1, int num2);

int main(void)
{
    printf("1 for addition, 2 for subtract, 3 for multip, 4 for divi: ");
    scanf("%d", &calc);
    if (calc == 1) {
            scanf("%d", &num1);
            scanf("%d", &num2);
            output = Addition(num1, num2);
    }
    else if (calc == 2) {
            scanf("%d", &num1);
            scanf("Number: %d", &num2);
            output = Subtraction(num1, num2);
    }
    else if (calc == 3) {
            scanf("%d", &num1);
            scanf("%d", &num2);
            output = Multiplication(num1, num2);
    }
    else if (calc == 4) {
            scanf("%d", &num1);
            scanf("%d", &num2);
            output = Division(num1, num2);
    }
    printf("This is the way: %d", output);
    return 0;
}
int Addition(int num1, int num2) {
        return num1 + num2;
}
int Subtraction(int num1, int num2) {
        return num1 - num2;
}
int Multiplication(int num1, int num2) {
        return num1 * num2;
}
int Division(int num1, int num2) {
        return num1 / num2;
}
