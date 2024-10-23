#include<iostream>
using namespace std;

#include <string>

std::string correct(std::string str) {
	//std::string result;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == '5')
			str[i] = 'S';
		else if (str[i] == '0')
			str[i] = 'O';
		else if (str[i] == '1')
			str[i] = 'I';
		//else
			//result += str[i];
		
	}
	return str;
	/*
	replace(str.begin(), str.end(), '5', 'S');
	replace(str.begin(), str.end(), '0', 'O');
	replace(str.begin(), str.end(), '1', 'I');
	return str;   */
}


int main()
{
	cout << correct("0tui5op115");
	return 0;
}