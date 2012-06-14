#include <iostream>
#include "ex1.h"

using namespace std;

int main(){

int side1,side2,side3;

char result;


cout << "Enter the first side of the triangle: ";
cin >> side1;


cout << "Enter the second side of the triangle: ";
cin >> side2;


cout << "Enter the third side of the triangle: ";
cin >> side3;

result = checkSides(side1, side2, side3);

cout << "The result is: " << result;


return 0;

}


char checkSides(int side1, int side2, int side3){

int index=0;
char list[] = {'S', 'I', 'E', 'E'};


if(side1 == side2){
	index++;
}
if(side2 == side3){
	index++;
}

if(side1 == side3){
	index++;
}


return list[index];
}
