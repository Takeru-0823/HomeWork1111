#include <iostream>
using namespace std;

double str2int(const char* s);

int main()
{
	char s[] = "13.5";

	double answer = str2int(s);

	cout << "“š‚¦‚Í " << answer << endl;
}

double str2int(const char* s)
{
	double answer = 0;
	int index1 = 0;
	int index2 = 0;
	int disit = 1;
	bool decimal = false;
	int few = 0;
	char number[] = "0123456789";

	while (s[index1] != '\0')
	{
		if (s[index1] == '.')
		{
			decimal = true;
			index1++;
			continue;
		}

		if (s[index1] == number[index2])
		{
			answer *= disit;
			answer += index2;
			index1++;
			index2 = 0;

			if (decimal == true)
			{
				few++;
			}

			if (disit == 1)
			{
				disit = 10;
			}
		}
		else
		{
			index2++;
		}

		if (number[index2] == '\0')
		{
			return 0;
		}
	}

	for (int i = 0; i < few; i++)
	{
		answer /= 10;
	}

	return answer;

}