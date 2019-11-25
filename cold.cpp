#include <iostream>
using namespace std;

int main(void)
{
	int l,k;
	cin >> l;
	for(int i=0;i<l;i++){
		int j;
		cin >> j;
		if(j<0){
			k++;
		}
	}
	cout << k << endl;
	return 0;
}