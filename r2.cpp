#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	string a;
	int i=0;
	cin >> a;
	while(true){
		if(a[i]=='\0') {
			cout << "no hiss";
			break;
		}
		else if(a[i] == 's' && a[(i+1)] == 's'){
			cout << "hiss";
			break;
		}
		else {
			i++;
		}
	}
	return 0;
}