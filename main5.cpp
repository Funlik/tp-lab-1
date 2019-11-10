#include "task5.h"

int main()
{
	char *buf = "111,222,333";
	int N = 0;
	char **result = nullptr;
	split(&result, &N, buf, ',');

	cout << result[0] << "\n";
	cout << result[1] << "\n";
	cout << result[2] << "\n";
	 return 0;
}