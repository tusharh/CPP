#include <iostream>

int GetSetBits(int number)
{
    if(number >= 2)
        return number%2 + GetSetBits(number / 2);
    else
        return number;
}

int main() {
	// your code goes here
	int no;
	std::cin >> no;
	std::cout << GetSetBits(no) << std::endl;
	return 0;
}
