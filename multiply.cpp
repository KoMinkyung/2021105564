#include <iostream>
int main() {
	int i = 1;
	int j = 1;
	for (i = 1; i < 9; i++) {
		for (j = 1; j < 10; j++) {
			std::cout << i * j << std::endl;
		}
	}

}