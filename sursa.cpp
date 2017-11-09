#include<iostream>
#include<fstream>
using namespace std;
int n, a[50];

void citire(int a[], int &n)
{
	int i;
	ifstream f("in.txt");
	f >> n;
	for(i = 1; i <= n; i++)
		f >> a[i];
}

void back(int st[], int k)
{
	int ev;
	if(k==n+1)
	{
		cout << "(";
		for(int i = 1; i <= n; i++)
			cout << st[i] << ',';
		cout << "\b) " << endl;
	}
	else
		for(int i = 1; i <= a[k]; i++)
		{
			st[k] = i;
			ev=(k<=n);
			if(ev)
				back(st, k+1);
		}
}

int main()
{
	int st[50];
	citire(a,n);
	back(st, 1);
	return 0;
}
