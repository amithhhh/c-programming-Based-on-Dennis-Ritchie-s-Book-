#include <stdio.h>
#include <string.h>

typedef void (*DataCallback)(const char *data);

void recieveData(DataCallback callback) {
	printf("Waiting for data...\n");

	const char *incomingData = "Hello from network!";

	printf("Data arrived!\n");

	callback(incomingData);
}

void onDataReceived(const char *data) {
	printf("callback: Processing received data -> %s\n", data);

	if (strstr(data, "Hello"))
		printf("Message contains greeting!\n");
}

int main() {
	recieveData(onDataReceived);
	return 0;
}
