#include <iostream.h>

using namespace std;

int main()
//Computes the volume of a sphere given a radius

{
const double PI=3.14159;
double radius;

cout << "Enter a radius:";

cin >> radius;

double volume = 4* PI * radius *radius *radius/3;

cout << "The volume is: " << volume << " \n";

return 0;

}
