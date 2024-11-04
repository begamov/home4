
//In the comments after each problem functions' names are provided. Your task to define correct datatype and parameters.
//DO NOT CHANGE FUNCTIONS' NAMES.
//You may check your functions in main.cpp as shown by exampleFunction;
#ifndef PROBLEMS_H
#define PROBLEMS_H
#endif //PROBLEMS_H
// Problem 1
// floorFunction
// ceilingFunction
inline int floorFunction(const double x) {
    return x;
}

inline int ceilingFunction(const double x) {
    int intpart = static_cast<int>(x);
    return (intpart == x) ? intpart : x+1;
}
// Problem 2
// swap_values
inline void swap_values(float &a, float &b) {
    a = a+b;
    b = a-b;
    a = a-b;
}
// Problem 3
// multiply
inline int multiply(const int x, const int y) {
    if(y==1) {
        return x;
    }
    return x+multiply(x, y-1);
}
// Problem 4
// digitSum
inline int digitSum(const int n) {
    if(n==0) {
        return 0;
    }
    return n%10 +digitSum(n/10);
}
// Problem 5
// decimalToBinary
inline int decimalToBinary(const int n) {
    if(n==0) {
        return 0;
    }
    return n%2 + 10*decimalToBinary(n/2);
}
// Problem 6
// midValue
template<typename T>
T midValue(T a, T b, T c) {
    if((a>=b && a<=c) (a>=c && a<=b)) {
        return a;
    }
    if((b>=a && b<=c)  (b>=c && b<=a)) {
        return b;
    }
    return c;
}
// Problem 1
//floorFunction
//ceilingFunction

// Problem 2
//swap_values

// Problem 3
//multiply

// Problem 4
//digitSum

// Problem 5
//decimalToBinary

// Problem 6
//midValue
