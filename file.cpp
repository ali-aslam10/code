#include<iostream>
#include<string>
#include<fstream>
using namespace std;
void sort(string[],fstream&);
int main()
{
	string arr[7];
	fstream file;
	sort(arr,file);
	file.open("data.txt",ios::app);
	file  << "\nAlphabatically ordered\n";
	for (int j = 0; j < 7; j++)
	{
		file << arr[j] << endl;
	}
}
void sort(string ar[], fstream& f)
{
	f.open("data.txt", ios::in);
	if (!f)
		cout << "error";
	else
	{
		for (int i = 0; i < 7; i++)
		{
			getline(f, ar[i]);
		}
		f.close();
		string temp;
		for (int i = 0; i < 6; i++)
			for (int j = i; j < 7; j++)
			{
				if (ar[i] > ar[j])
				{
					temp = ar[i];
					ar[i] = ar[j];
					ar[j] = temp;
				}
			}
	}
}