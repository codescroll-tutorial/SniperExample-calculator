#include <stdio.h>

#include "Calculator.h"
#include "Data.h"
#include "Util.h"

typedef unsigned int uint;
#define BOUNDERY_VALUE 1024
#define BUFFER_SIZE 10

namespace{
	void getValue(int *c_operator, float *firstNumber, double *secondNumber)
	{
		printf("Enter an operator (+, -, *,/): ");
		scanf("%c", c_operator);

		printf("Enter two operands: ");
		scanf("%lf %lf", firstNumber, secondNumber);
	}
}


extern void save(Data* data);

int main() {

	Data *dataArray[BUFFER_SIZE];
	uint lastIndex = initBuffer(dataArray);

	Data *data = new Data();

	char c_operator;
	int operatorKind;
	double firstNumber = 0.0;
	double secondNumber = 0.0;

	getValue(&c_operator, &firstNumber, &secondNumber);

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

	deleteBuffer(dataArray);

	return 0;
}
