#include<iostream>
using namespace std;
int main()
{
int num = 0, ecount=0, ocount=0;
cout << "Enter your numbers and put -1 to exit" << endl;
while (num!=-1)
{cin >> num;
if (num % 2 == 0)
	{ecount++;}
else
	{ocount++;}
}
ocount--;
cout << "The frequency of even and odd numbers respectively is " << ecount << " and " << ocount << endl;
system("pause");
return 0;
}