#include <iostream>
using namespace std;
int main() {
	//1
	/*int c;
	int sum = 0;
	for (int i = 1; i <= 10;i++) {
		cin >> c;
		sum = sum + c;
	}
	cout << sum;*/
	//2
	/*int c;
	int sum = 1;
	for (int i = 1; i <= 10; i++) {
		cin >> c;
		sum = sum * c;
	}
	cout << sum;*/
	//3
	/*float c;
	float sum = 0;
	float a = 0;
	for (int i = 1; i <= 10; i++) {
		cin >> c;
		sum = sum + c;
		a++;
	}
	sum = sum / a;
	cout << sum;*/
	//4
	/*float c,n;
	cin >> n;
	float sum = 0;
	float proizv = 1;
	for (int i = 1; i <= n; i++) {
		cin >> c;
		sum = sum + c;
		proizv = proizv * c;
	}
	cout << sum<<endl;
	cout << proizv;*/
	//5
	/*float c;
	int n;
	cin >> n;
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		cin >> c;
		sum = sum + c;
		cout <<(int) c<<endl;
	}
	cout << sum << endl;*/
	//6
	/*float c;
	int n;
	cin >> n;
	float sum = 0;
	for (int i = 1; i <= n; i++) {
		cin >> c;
		cout << c-(int)c << endl;
		sum = sum + (c-(int)c);
	}
	cout << sum << endl;*/
	//7
	/*float c;
	int n;
	cin >> n;
	float sum = 0;
	for (int i = 1; i <= n; i++) {
		cin >> c;
		c = round(c);
		cout << c << endl;
		sum = sum + c;
	}
	cout << sum << endl;*/
	//8
	/*int n,c;
	cin >> n;
	int k = 0;
	for (int i = 1; i <= n; i++) {
		cin >> c;
		if (c%2==0) {
			cout << c << endl;
			k++;
		}
	}
	cout << k << endl;*/
	//9
	/*int n,c,k;
	k = 0;
	cin >> n;
	float sum = 0;
	for (int i = 1; i <= n; i++) {
		cin >> c;
		if (c % 2!=0) {
			cout << i << endl;
			k++;
		}
	}
	cout << k << endl;*/
	//10
	/*int n, c, k;
	k = 0;
	cin >> n;
	float sum = 0;
	for (int i = 1; i <= n; i++) {
		cin >> c;
		if (c > 0) {
			k++;
		}
	}
	if (k > 0) {
		cout << "true";
	}
	else {
		cout << "false";
	}*/
	//11
	/*int n, c, k,K;
	k = 0;
	cin >> K;
	cin >> n;
	float sum = 0;
	for (int i = 1; i <= n; i++) {
		cin >> c;
		if (c > K) {
			k++;
		}
	}
	if (k > 0) {
		cout << "true";
	}
	else {
		cout << "false";
	}*/
	//12
	/*int c = 1;
	int k = 0;
	while (c != 0) {
		cin >> c;
		k++;
	}
	cout << k;*/
	//13
	/*int c = 1;
	int k = 0;
	int sum = 0;
	while (c != 0) {
		cin >> c;
		k++;
		if (c > 0) {
			sum = sum + c;
		}
	}
	cout << sum;*/
	//14
	/*int c = 1;
	int k = 0;
	int K = 0;
	cin >> K;
	while (c != 0) {
		cin >> c;
		if (c < K) {
		k++;
		}
	}
	cout << k;*/
	//15
	/*int c = 1;
	int k = 0;
	int K = 0;
	int sum = 0;
	cin >> K;
	while (c != 0) {
		cin >> c;
		if (c > K) {
			sum = c;
			break;
		}
	}*/
	//16
	/*int c = 1;
	int k = 0;
	int K = 0;
	int sum = 0;
	cin >> K;
	while (c != 0) {
		cin >> c;
		if (c > K) {
			sum = c;
		}
	}
	cout << sum;*/
	//17
	float 
	int n, c, k, K;
	k = 0;
	cin >> K;
	cin >> n;
	float sum = 0;
	for (int i = 1; i <= n; i++) {
		cin >> c;
		if (c > K) {
			k++;
		}
	}
	if (k > 0) {
		cout << "true";
	}
	else {
		cout << "false";
	}
	return 0;
}