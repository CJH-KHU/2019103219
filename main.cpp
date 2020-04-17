#include <iostream>
using namespace std;

int main(){
	int n;
	
	cout << "출력할 구구단 단수를 입력하시오." << endl;
	cin >> n;
	
	cout << n << " 단 : " << endl;
	for(int i = 1; i < 9; i++)
		cout << n << " × " << i << " = " << n*i << endl;
		
	
	return 0;
}	

	