#include "Parser.h"

int* Parser::commas(string data)
{
	{
		int j = data.length();
		int* parserCommas = new int[8];
		//use to mark what comma we are on
		int commaCount = 0;
		//getting the location of each comma will be used to seperate out elements of the data string
		if (parserCommas[0] != NULL)
		{
			for (int q = 0; q <= 7; q++)
			{
				parserCommas[q] = NULL;
			}
		}
		for (int i = 0; i < j; i++)
		{
			if (data[i] == ',')
			{
				parserCommas[commaCount] = i;
				commaCount++;
			}
		}
		return parserCommas;
	}
}

void Parser::cleanup()
{

}