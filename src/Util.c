
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
