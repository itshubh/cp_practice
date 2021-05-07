#include<bits/stdc++.h>
using namespace std;
bool palindrome(char a[])
{
	int i=0;
	int j= strlen(a) -1;
	while(i<j)
	{
	if(a[i] == a[j])
	{
		i++;
		j--;
	}
	else
	 return false;
	}
	 return true;
}
int main()
{
	char a[10];
	cin >> a;
	if(palindrome(a))
	{
		cout << "it is a  palindrome" <<endl;
	}
	else
	{
		cout<< "Not a palindrome"<<endl;
	}
     return 0;
}