#include <iostream>

unsigned int gcd2(unsigned int a,unsigned int b){
	return a%b==0? b : gcd2(b, a%b);
}

int main(){
	std::cout << "Please input number A: ";
	unsigned int a;
	std::cin >> a;
	std::cout << "Please input number B: ";
	unsigned int b;
	std::cin >> b;
	if (a < b) std::swap(a,b);
	unsigned int gcdr = gcd2(a,b);
	std::cout << "The MCD is: " << gcdr;
}

