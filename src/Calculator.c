#include <stdio.h>

#include "Util.h"
#include "Calculator.h"

void calculate(double firstNumber, double secondNumber, int operatorKind)
{
    int isValid = getIsValid(firstNumber, secondNumber, operatorKind);

    if(isValid == 0) {
        printf("Error! Operands are not Valid!");
        return ;
    }

    double result = 0;
    switch(operatorKind)
    {
        case 1:
            result = add(firstNumber, secondNumber);
            printf("%.2lf + %.2lf = %.2lf", firstNumber, secondNumber, result);
            break;

        case 2:
            result = sub(firstNumber, secondNumber);
            printf("%.2lf - %.2lf = %.2lf", firstNumber, secondNumber, result);
            break;

        case 3:
            result = mul(firstNumber, secondNumber);
            printf("%.2lf * %.2lf = %.2lf", firstNumber, secondNumber, result);
            break;

        case 4:
            result = div(firstNumber, secondNumber);
            printf("%.2lf / %.2lf = %.2lf", firstNumber, secondNumber, result);
            break;
        default:
        	printf("Error! Operator is not Valid!");
        	break;
    }

    return ;
}

int getIsValid(double firstNumber, double secondNumber, int operatorKind) {
    if(firstNumber > 100.0 || secondNumber > 100.0) {
        return 0;
    }

    if(operatorKind == 4) {
    	if(secondNumber <= 0) {
    		return 0;
    	}
    }

    return 1;
}
