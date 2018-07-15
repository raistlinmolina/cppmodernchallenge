#include <iostream>
using namespace std;

int main()
{
	unsigned int limit = 0;
	cout << "Please input the limit: ";
	cin >> limit;
	int sum = 0;
	for (int i=0; i<=limit; i++){
		if (i%3==0 || i%5==0){
			sum = sum + i;
		} 
	}
	cout << "The total sum is: " << sum;
}
	
