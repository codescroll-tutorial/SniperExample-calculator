#ifndef __Data_H__
#define __Data_H__

class Data{
public:
    Data(){};
    ~Data(){};

    int setData(double firstNumber,double secondNumber);

    bool setOperatorKind(int operatorKind);

    double getFirstNumber();

    double getSecondNumber();

    int getOperatorKind();

    double operator+(double rvalue);

    void setEvaluationValue(int value);

private:
    int operatorKind_;
    double firstNumber_;
    double secondNumber_;
    unsigned int isTrue_;
};

#endif  /* __Data_H__ */
