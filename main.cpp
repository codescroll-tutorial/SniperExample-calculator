#include <stdio.h>

#include "Calculator.h"
#include "Data.h"
#define BOUNDERY_VALUE 1024
#define ARRAY_SIZE 10

extern void save(Data* data);

int main() {
	char c_operator;
	int operatorKind = c_operator;
	double firstNumber = 0.0;
	double secondNumber = 0.0;
	printf("Enter an operator (+, -, *,/): ");
	scanf("%c", &c_operator);

	printf("Enter two operands: ");
	scanf("%lf %lf", &firstNumber, &secondNumber);
	switch(c_operator) {
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

	Data *data = new Data();
	data->setData(firstNumber, secondNumber);
	data->setOperatorKind(operatorKind);

	calculate(data);

	if(sizeof(data) < BOUNDERY_VALUE)
	{
		delete data;
	}else if(sizeof(data) > BOUNDERY_VALUE){
		save(data);
		delete data;
	}


	return 0;
}
