#include <stdio.h>

#include "Util.h"
#include "Calculator.h"

void calculate(Data* data)
{
    int isValid = getIsValid(data);

    if(isValid == 0) {
        printf("Error! Operands are not Valid!");
        return ;
    }

    double result = 0;
    switch(data->getOperatorKind())
    {
        case 1:
            result = add(data->getFirstNumber(), data->getSecondNumber());
            printf("%.2lf + %.2lf = %.2lf", data->getFirstNumber(), data->getSecondNumber(), result);
            break;

        case 2:
            result = sub(data->getFirstNumber(), data->getSecondNumber());
            printf("%.2lf - %.2lf = %.2lf", data->getFirstNumber(), data->getSecondNumber(), result);
            break;

        case 3:
            result = mul(data->getFirstNumber(), data->getSecondNumber());
            printf("%.2lf * %.2lf = %.2lf", data->getFirstNumber(), data->getSecondNumber(), result);
            break;

        case 4:
            result = div(data->getFirstNumber(), data->getSecondNumber());
            printf("%.2lf / %.2lf = %.2lf", data->getFirstNumber(), data->getSecondNumber(), result);
            break;
        default:
        	printf("Error! Operator is not Valid!");
        	break;
    }

    return ;
}

int getIsValid(Data* data) {
    if(data->getFirstNumber() > 100.0 || data->getSecondNumber() > 100.0) {
        return 0;
    }

    if(data->getOperatorKind() == 4) {
    	if(data->getSecondNumber() <= 0) {
    		return 0;
    	}
    }

    return 1;
}
