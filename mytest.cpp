#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main(int argc, char ** argv)
{
	int num = 0; 
	string name = "", first, last;

	printf("Give me your first and last name.....\n");

	cin>>first>>last;
	
	while(cin>>name)
	{
		if( num == 0)
		{
			first = name;
		}
		else if( num == 1)
		{
			last = name;	
		}
	}

	printf("Thanks %s %s!!\n", first.c_str(), last.c_str() );

	return 0;
}
