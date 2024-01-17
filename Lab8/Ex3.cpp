#include<iostream>
using namespace std;

//将小写字母转化为大写字母
void changeLetter(char m)
{
	if (m == 'a') cout << "A"; 
	else if (m == 'b') cout << "B";
	else if (m == 'c') cout << "C";
	else if (m == 'd') cout << "D";
	else if (m == 'e') cout << "E";
	else if (m == 'f') cout << "F";
	else if (m == 'g') cout << "G";
	else if (m == 'h') cout << "H";
	else if (m == 'i') cout << "I";
	else if (m == 'j') cout << "J";
	else if (m == 'k') cout << "K";
	else if (m == 'l') cout << "L";
	else if (m == 'm') cout << "M";
	else if (m == 'n') cout << "N";
	else if (m == 'o') cout << "O";
	else if (m == 'p') cout << "P";
	else if (m == 'q') cout << "Q";
	else if (m == 'r') cout << "R";
	else if (m == 's') cout << "S";
	else if (m == 't') cout << "T";
	else if (m == 'u') cout << "U";
	else if (m == 'v') cout << "V";
	else if (m == 'w') cout << "W";
	else if (m == 'x') cout << "X";
	else if (m == 'y') cout << "Y";
	else if (m == 'z') cout << "Z";
	else cout << m;
}

int main()
{
	char str1[100] = "";
	char str2[100] = "";
	cout << "Please input the first string:" << endl;
	cin.getline(str1,100);
	cout << "Please input the second string:" << endl;
	cin.getline(str2, 100);
	int a = 0, b = 0;//用于判断输入的两个字符串的长度
	for (int i = 0; str1[i] != '\0';i++) a++;
	for (int j = 0; str2[j] != '\0';j++) b++;

	cout << "Output:" << endl;
	for (int m = 0; m < a - 1; m++) changeLetter(str1[m]);
	cout << ", ";
	for (int n = 0; n < b; n++) changeLetter(str2[n]);
		
	cout << endl;

	system("pause");

	return 0;
}