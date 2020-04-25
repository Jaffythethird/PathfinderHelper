#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
int main()
{
	bool running = true;
	String input;
	String[] parsed;
	while(running)
	{
		cin >> input;
		parsed = cmdParser(input);
		switch (parsed[0]) {
			case "exit":
				running = false;
				break;
			case "help":

				break;
			default:
				cout << "Unrecognized command. Type \"Help\" for assistance.";
				break;

		}
		
	}
}

String[] cmdParser(String args)
{
	// Temporary Fix
	return {args};
}
