#pragma once
#include <string>

using namespace std;

class Parser
{
	public:
		static int* commas(string data);
		static void cleanup();

	private:
		Parser() {}
};

