#include <iostream>
#include <add.h>
#include <multiply.h>
#include <pow.h>

void areEquals(double expected, double get)
{
	if(expected != get){
		std::cout << expected << " != " << get << std::endl;
	}
}

int main() 
{
	areEquals(4, add(2,2));
	areEquals(4, mult(2,2));
	areEquals(4, pow(2,2));
	return 0;
}