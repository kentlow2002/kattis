#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int a;
	float b,c,d;
	cin >> a;
	for(int i=1;i<=a;i++){
		cin >> b >> c;
		d+=b*c;
	}
	cout << d;
	return 0;
}