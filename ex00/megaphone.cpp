#include <iostream>

namespace out
{
	char outChar;
}

using namespace std;
using namespace out;

int main(int argc, char **argv)
{
	if (argc == 1)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
	else
	{
		for (int i = 1; i < argc; i++)
		{
			for (int j = 0; argv[i][j]; j++)
			{
				outChar = argv[i][j];
				cout << outChar;
			}
		}
		cout << endl;
	}
}