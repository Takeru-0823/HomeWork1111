#include <iostream>
using namespace std;

int str2int(const char* s);

int main()
{
	char s[] = "138";

	int answer = str2int(s);

	cout << "“š‚¦‚Í " << answer << endl;
}

int str2int(const char* s)
{
	int answer = 0;
	int index1 = 0;
	int index2 = 0;
	int disit = 10;
	char number[] = "0123456789";

	while (s[index1] != '\0')
	{
		if (s[index1] == number[index2])
		{
			answer *= disit;
			answer += index2;
			index1++;
			index2 = 0;

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

	return answer;

}