#ifndef __Util_H__
#define __Util_H__
#include "Data.h"

double add(double firstNumber, double secondNumber);
double sub(double firstNumber, double secondNumber);
double mul(double firstNumber, double secondNumber);
double div(double firstNumber, double secondNumber);
int initBuffer(Data **data);
void deleteBuffer(Data **data);


#endif  /* __Util_H__ */
