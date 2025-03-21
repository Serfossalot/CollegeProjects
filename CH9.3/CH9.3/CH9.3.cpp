/*
Pointer Rewrite

The following function uses reference variables as parameters. Rewrite the function so it uses pointers instead of
reference variables, then demonstrate the function in a complete program.
int doSomething(int &x, int &y)
{
    int temp = x;
    x = y * 10;
    y = temp * 10;
    return x + y;
}
*/
using namespace std;
#include <iostream>
int doSomething(int*, int*);

int main()
{
    int num1, num2;
    int* ptr1;
    int* ptr2;
    ptr1 = &num1;
    ptr2 = &num2;
    cout << "Please enter the first number." << endl;
    cin >> *ptr1;
    cout << "Please enter number the second number." << endl;
    cin >> *ptr2;
    cout << "The first number you entered is " << num1 << "." << endl;
    cout << "The second number you entered is " << num2 << "." << endl;
    int result = doSomething(ptr1, ptr2);
    cout << "The result of the function is " << result << endl;
    cout << "The value of number 1 is now " << num1 << "." << "The value of number 2 is " << num2 << "." << endl;
    return 0;
}
int doSomething(int* x, int* y)
{
    int temp = *x;
    *x = *y * 10;
    *y = temp * 10;
    return *x + *y;
}