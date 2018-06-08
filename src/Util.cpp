#include "../header/Util.h"

#define BUFFER_SIZE 100

double add(double firstNumber, double secondNumber) {
    return firstNumber + secondNumber;
}

double sub(double firstNumber, double secondNumber) {
    return firstNumber - secondNumber;
}

double mul(double firstNumber, double secondNumber) {
    if(firstNumber == 0.0 || secondNumber == 0.0) {
        return 0.0;
    }

    return firstNumber * secondNumber;
}

double div(double firstNumber, double secondNumber) {
    return firstNumber / secondNumber;
}

int initBuffer(Data **data)
{   int i =0;

    for(; i <=BUFFER_SIZE; ++i)
    {
        data[i] = new Data();
        data[i]->setEvaluationValue(((i%2)==0? 0 : -1));
    }
    data[i] = new Data();
    data[i]->setEvaluationValue(((i%2)==0? 0 : -1));

    return i;
}

void deleteBuffer(Data **data)
{
    int i =0;

    for(; i <= BUFFER_SIZE; ++i)
    {
        delete data[i];
    }

    delete data[BUFFER_SIZE];
}
