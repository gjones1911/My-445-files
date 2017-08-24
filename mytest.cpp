#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main(int argc, char ** argv)
{
	int num = 0; 
	string bob, first, last;

	char * name;

	printf("Give me your first and last name.....\n");

	cin>>first>>last;

	printf("Thanks %s %s!!\n", first.c_str(), last.c_str() );

	return 0;
}
