#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	int x,y,q;
	cin >> x;
	cin >> y;
	if(x>0){
		if(y>0){
			cout << 1;
		}
		else{
			cout << 4;
		}
	}
	else{
		if(y>0){
			cout << 2;
		}
		else{
			cout << 3;
		}
	}
	return 0;
}