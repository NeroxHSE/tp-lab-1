#include <task4.h>
#include <iostream> 
int main()
{
	const char *x = "99999999999999999999";
	const char *y = "1";
	char *n = sum(x, y);
	
	std::cout << " " << n;
}
