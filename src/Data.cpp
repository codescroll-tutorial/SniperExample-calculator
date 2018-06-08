#include "../header/Data.h"
#define TRUE_VALUE 1

int Data::setData(double firstNumber,double secondNumber){
	try{
		this->firstNumber_ = firstNumber;
		this->secondNumber_ = secondNumber;

		return TRUE_VALUE;
	}catch(int e)
	{
		return e;
	}
}

bool Data::setOperatorKind(int operatorKind)
{
	this->operatorKind_ = operatorKind;

	return true;
}

double Data::getFirstNumber(){
	return this->firstNumber_;
}

double Data::getSecondNumber(){
	return this->secondNumber_;
}

double Data::operator+(double rvalue)
{
	return (this->firstNumber_+=rvalue);
}

int Data::getOperatorKind(){
	return this->operatorKind_;
}

void Data::setEvaluationValue(int value)
{
	this->isTrue_ = value;
}


