#include <iostream>

#define newline "\n"
#define logm(msg) cout << msg << newline;
#define logv(var) cout << #var << " is: " << var << newline;

using std::cout;

void InitializeNetwork() {
	cout << "[Networking] Network Initialized!" << newline;
}
void sendMessageByInternet(const char* msg) {
	cout << "[Networking] The message is: " << msg << newline;
}
void endConnection() {
	cout << "[Networking] Network Destroyed!" << newline;
}