#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream file("C:\\24_demo.txt");
	string buf;
	int count = 1;
	int m=1;
	if (!file)
	{
		cout << "ERROR";
	}
	file >> buf;
	for (int i = 1; i <= (buf.size() - 1); i++)
	{
		if ((buf[i] == 'X') && (count % 3 == 0) or (buf[i] == 'Y') && (count % 3 == 1) or (buf[i] == 'Z') && (count % 3 == 2))
		{
			count++;
			m = max(count, m);
		}
		else count = 1;
	}
	cout << m;
}