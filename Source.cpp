#include <iostream>
#include <string>
using namespace std;
struct human
{
	string name;
	int age;
};
void main()
{
	setlocale(LC_ALL, "Rus");
	int n = 0;
	cin >> n;
	if (n == 1)
	{
		cout << "28 ��� ������ C � ������ S. ������� ������ ��������� ������� C � ������ S. " << endl;

		/*char S[100] = "Hello my friend";
		char c = 'o';
		for (int i = 0; i < strlen(S); i++)
		{
			if (S[i] == c)
			{
				for (int j = strlen(S)+1; j > i; j--)
				{
					S[j] = S[j - 1];
				}
				S[i + 1] = c;
				i++;
			}
		}
		cout << S;
		cout << endl;*/

		/*char str[200];
		cin >> str;
		string s(str);*/
		string s;
		cin >> s;
		char c = 'a';
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == c)
			{
				s.insert(s.begin() + i, c);
				i++;
			}
		}
		cout << s << endl;
	}
	else if (n == 2)
	{
		cout << "29  ��� ������ C � ������ S, S0. ����� ������ ���������� ������� C � ������ S �������� ������ S0. " << endl;
		string S = "Hello";
		string S0 = "is";
		char c = 'e';
		for (int i = 0; i < S.size(); i++)
		{
			if (S[i] == c)
			{
				S.insert(i, S0);
				i += S0.size();
			}
		}
		cout << S << endl;
	}
	else if (n == 3)
	{
		cout << "30  ��� ������ C � ������ S, S0. ����� ������� ��������� ������� C � ������ S �������� ������ S0. " << endl;
		string S = "Hello";
		string S0 = "is";
		char c = 'e';
		for (int i = 0; i < S.size(); i++)
		{
			if (S[i] == c)
			{
				S.insert(i + 1, S0);
				i += S0.size();
			}
		}
		cout << S << endl;
	}
	else if (n == 4)
	{
		cout << "31 ���� ������ S � S0. ���������, ���������� �� ������ S0 � ������ S. ���� ����������, �� ������� TRUE, ���� �� ����������, �� ������� FALSE. " << endl;
		string s = "hello";
		string a = "el";
		if (strstr(s.c_str(), a.c_str()))
			cout << "yes" << endl;
	}
	else if (n == 5)
	{
		cout << "32 ���� ������ S � S0. ����� ���������� ��������� ������ S0 � ������ S. " << endl;
		char str1[100];
		char str2[20];
		int count = 0;
		cin >> str1 >> str2;		
		//s0 = s.substr(0, 2);
		char *p = str1;
		while (strstr(p,str2))
		{
			cout << p << endl;
			p = strstr(p, str2) + strlen(str2);
			count++;
		}
		
		cout << count << endl;
			
	}
	else if (n == 6)
	{
		cout << "33 ���� ������ S � S0. ������� �� ������ S ������ ���������, ����������� � S0. ���� ����������� �������� ���, �� ������� ������ S ��� ���������. " << endl;
		string s1, s2;
		cin >> s1 >> s2;
		if (s1.find(s2) != string::npos)
			s1.erase(s1.find(s2), s2.size());
		cout << s1 << endl;
	}
	else if (n == 7)
	{
		cout << "34 ���� ������ S � S0. ������� �� ������ S ��������� ���������, ����������� � S0. ���� ����������� �������� ���, �� ������� ������ S ��� ���������. " << endl;
		string s1, s2;
		cin >> s1 >> s2;
		if (s1.rfind(s2) != string::npos)
			s1.erase(s1.rfind(s2), s2.size());
		cout << s1 << endl;
	}
	else if (n == 8)
	{
		cout << "35 ���� ������ S � S0. ������� �� ������ S ��� ���������, ����������� � S0. ���� ����������� �������� ���, �� ������� ������ S ��� ���������. " << endl;
		string s1, s2;
		cin >> s1 >> s2;
		for (int i = 0; i < s1.size(); i++)
		{
			if (s1.find(s2) != string::npos)
				s1.erase(s1.find(s2), s2.size());
		}
		cout << s1 << endl;
	}
	else if (n == 9)
	{
		cout << "36 ���� ������ S, S1 � S2. �������� � ������ S ������ ��������� ������ S1 �� ������ S2" << endl;
		string s = "Test example";
		string s1 = "e";
		string s2 = "is";
		
		s.replace(s.find(s1), s1.size() , s2);
	
		cout << s << endl;
	}
	else if (n == 10)
	{
		cout << "���� ������ S, S1 � S2. �������� � ������ S ��������� ��������� ������ S1 �� ������ S2. " << endl;
		string s = "Test example";
		string s1 = "e";
		string s2 = "is";

		s.replace(s.rfind(s1), s1.size(), s2);

		cout << s << endl;
	}
	else if (n == 11)
	{
		cout << "���� ������ S, S1 � S2. �������� � ������ S ��� ��������� ������ S1 �� ������ S2." << endl;
		string s = "Test example";
		string s1 = "e";
		string s2 = "is";
		for (int i = 0; i < s.size(); i++)
		{
			if(s.find(s1)!=string::npos)
			s.replace(s.find(s1), s1.size(), s2);
		}
		cout << s << endl;
	}
	else if (n == 12)
	{
		human h;
		human* hp;
		hp = &h;
		hp->age; //��������� ����� ���������
	}
	system("pause");
}