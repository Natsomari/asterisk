#include <iostream>

int main() {
	int n = 5;

	std::cout << "\nPattern 1\n";
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			std::cout << "*";
		}
		std::cout << "\n";
	}

	std::cout << "\nPattern 2\n";
	for (int i = 1; i <= n; i++) {
		for (int j = n; j >= i; j--) {
			std::cout << " ";
		}
		for (int k = 1; k <= i; k++) {
			std::cout << "*";
		}
		std::cout << "\n";
	}

	std::cout << "\nPattern 3\n";
	for (int i = 1; i <= n; i++) {
		for (int j = n; j >= i; j--) {
			std::cout << "*";
		}
		std::cout << "\n";
	}

	std::cout << "\nPattern 4\n";
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			std::cout << " ";
		}
		for (int k = n; k >= i; k--) {
			std::cout << "*";
		}
		std::cout << "\n";
	}

	std::cout << "\nPattern 5\n";
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n - i; j++) {
			std::cout << " ";
		}
		for (int k = 1; k <= i; k++) {
			std::cout << "* ";
		}
		std::cout << "\n";
	}

	std::cout << "\nPattern 6\n";
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			std::cout << " ";
		}
		for (int k = n; k >= i; k--) {
			std::cout << "* ";
		}
		std::cout << "\n";
	}

	std::cout << "\nPattern 7\n";
	for (int i = 1; i <= n; i++) {
		for (int j = n; j >= i; j--) {
			std::cout << " ";
		}
		for (int k = 1; k <= (2*i-1); k++) {
			std::cout << "*";
		}
		std::cout << "\n";
	}

	std::cout << "\nPattern 8\n";
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			std::cout << " ";
		} 
		for (int k = n; k >= (2 * i - n); k--) {
			std::cout << "*";
		}
		std::cout << "\n";
	}

	std::cout << "\nPattern 9\n";
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= (2*n-1); j++) {
			std::cout << "*";
		}
		std::cout << "\n";
	}

	std::cout << "\nPattern 10\n\n";
	for (int i = (n*-1); i <= n; i++) {
		for (int j = (n*-1); j <= n; j++) {
			int r = abs(i); // 5,4,3,2,1,0,1,2,3,4,5
			int q = (n - abs(j)); //5,4,3,2,1,0
			if (q >= r) std::cout << r;
			else std::cout << " ";

		}
		std::cout << std::endl;
	}

	std::cout << "\nPattern 11\n\n";
	for (int i = (n * -1); i <= n; i++) {		
		for (int j = (n * -1); j <= n; j++) {	
			int row = abs(i);					
			int col = (n - abs(j));				
			if (row < col) {
				std::cout << " ";
			}
			else {
				std::cout << row;
			}
		}
		std::cout << "\n";
	}
	return 0;
}