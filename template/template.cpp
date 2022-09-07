#include <iostream>

using namespace std;
template <class T, class U>
void multiply(T num1, U num2)
{

cout << "Result "<< num1*num2<<endl;
}

int main(){
int a = 10, b = 20;
double x = 2.2, y = 2.5;

multiply(a, b);
multiply(x, y);

multiply(a, y);
return 0;
}
