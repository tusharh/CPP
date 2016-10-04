#include <iostream>
using namespace std;

int converToBinary(int number);


int converToBinary(int number)
{
    if(number >= 2)
    {
        int newNo = number / 2;
        return number%2 + converToBinary(newNo);
    }
    else
        return number;
}

int main() {
	// your code goes here
	std::cout << converToBinary(7) << std::endl;
	return 0;
}
