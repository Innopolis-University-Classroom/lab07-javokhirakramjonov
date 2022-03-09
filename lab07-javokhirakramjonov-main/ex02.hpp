//change the below code
// the function below now only works with integers, change it to work with any type
// also fill out the body

template<typename T> class Calculator {
private:
    T num1, num2;

public:
    Calculator(T n1, T n2) {
        num1 = n1;
        num2 = n2;
    }

    int add(T a, T b) { return a + b; /*your code here*/ }
    int subtract(T a, T b) {return a - b; /*your code here*/ }
    int multiply(T a, T b) {return a * b; /*your code here*/ }
    int divide(T a, T b) {return a / b; /*your code here*/ }
};















