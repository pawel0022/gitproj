#include "libss.h"

int main() {
	srand(time(NULL));
	std::cout << "dev did something\n";
	std::cout << rand() % 25 << std::endl;

	system("pause");
	return 0;
}