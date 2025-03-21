using namespace std;
#include <fstream>
#include <iostream>
#include <iomanip>
int main ()
{
ofstream output;
output.open("output.txt");
for (int num = 1; num <= 10; num++)
output << num << endl;
}
