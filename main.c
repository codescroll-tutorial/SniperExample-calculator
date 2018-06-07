#include <stdio.h>

#include "Calculator.h"

int main() {
	char operator;
	int operatorKind = 0;
	double firstNumber = 0.0;
	double secondNumber = 0.0;
	printf("Enter an operator (+, -, *,/): ");
	scanf("%c", &operator);

	printf("Enter two operands: ");
	scanf("%lf %lf", &firstNumber, &secondNumber);
	switch(operator) {
		case '+':
			operatorKind = 1;
			break;
		case '-':
		    	operatorKind = 2;
			break;
		case '*':
	    		operatorKind = 3;
			break;
		case '/':
	    		operatorKind = 4;
			break;
		default:
			break;
	}
	calculate(firstNumber, secondNumber, operatorKind);

	return 0;
}
