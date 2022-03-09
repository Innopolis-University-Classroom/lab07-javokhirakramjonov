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

    T add(T a, T b) { return a + b; /*your code here*/ }
    T subtract(T a, T b) {return a - b; /*your code here*/ }
    T multiply(T a, T b) {return a * b; /*your code here*/ }
    T divide(T a, T b) {return a / b; /*your code here*/ }
};
