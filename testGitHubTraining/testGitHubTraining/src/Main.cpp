#include <iostream>

#define newline "\n"
#define logm(msg) cout << msg << newline;
#define logv(var) cout << #var << " is: " << var << newline;

using std::cout;
using std::cin;

// set max number of slots
const short MAX_INV = 66666;

int main()
{
	logm("This is the beginning of the testGithub cpp file!");
	logv(MAX_INV);
	logm("This is the end of the testGithub cpp file!");
	cin.get();
	return 0;
}
