#include<iostream>
#include<cstdio>

using namespace std;

int main() {
	int n,i=1,sum=0;
	while(cin >> n){
		while (i <=n) {
			if (!(i % 7 == 0 || i % 10 == 7 || (i / 10) % 10 == 7))
				sum += i * i;
			i++;
		}
		cout << sum << endl;
	}
	
	return 0;
}