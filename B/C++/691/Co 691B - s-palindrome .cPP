#include <bits/stdc++.h>

using namespace std;

char pal(char a){
    switch(a){
        case 'A':return 'A';
        case 'b':return 'd';
        case 'd':return 'b';
        case 'H':return 'H';
        case 'I':return 'I';
        case 'M':return 'M';
        case 'O':return 'O';
        case 'o':return 'o';
        case 'T':return 'T';
        case 'U':return 'U';
        case 'V':return 'V';
        case 'W':return 'W';
        case 'X':return 'X';
        case 'Y':return 'Y';
        case 'v':return 'v';
        case 'w':return 'w';
        case 'x':return 'x';
        case 'q':return 'p';
        case 'p':return 'q';
    }
    return 0;
}
int main()
{

	string data;
	cin >> data;

	int len = data.length();


		for(int i = 0 ; i <= len /2; i++)
		{
			if(pal(data[i]) != data[len-i-1])
			{
				cout << "NIE";
				return 0;
			}

		}

	cout << "TAK";

	return 0;
}
