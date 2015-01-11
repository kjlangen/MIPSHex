#include <iostream>
using namespace std;

int main(){
	//Initialize binary number
	int binaryLen = 24;
	int binary[binaryLen];

	for(int i = 0; i < binaryLen; ++i){
		binary[i] = 0;
	}

	//Initialize hex number
	int hexLen = 6;
	char hex[hexLen];
	
	for(int i = 0; i < hexLen; ++i){
		hex[i] = '0';
	}

	//Integers s,d,t
	int s = 0;
	int d = 0;
	int t = 0;

	cout << "Please enter d:" << endl;
	while(!(cin >> d) && 0 <= d && d <= 31){
		cout << "That's not an integer please enter an integer." << endl;
		cin.clear();
		cin.ignore();
	}

	cout << "Please enter s:" << endl;
	while(!(cin >> s) && 0 <= s && s <= 31){
		cout << "That's not an integer please enter an integer." << endl;
		cin.clear();
		cin.ignore();
	}

	cout << "Please enter t:" << endl;
	while(!(cin >> t) && 0 <= t && t <= 31){
		cout << "That's not an integer please enter an integer." << endl;
		cin.clear();
		cin.ignore();
	}

	//Story binary s
	for(int i = 10; i > 5; --i){
		binary[i] = s % 2;
		s /= 2;
	}

	//Store binary t
	for(int i = 15; i > 10; --i){
		binary[i] = t % 2;
		t /= 2;
	}

	//Store binary d
	for(int i = 20; i > 15; --i){
		binary[i] = d % 2;
		d /= 2;
	}

	//Convert binary to hex
	for(int i = 0; i < binaryLen; i += 4){
		//Calculate base 10 value
		int value = binary[i] * 8 + binary[i + 1] * 4 + binary[i + 2] * 2 + binary[i + 3] * 1;

		//Insert the correct character
		if(value < 10){
			hex[i/4] = value + 48;
		}
		else{
			hex[i/4] = value + 55;
		}
	}

	//Print final results
	cout << "Binary string is:" << endl;
	for(int i = 0; i < binaryLen; ++i){
		cout << binary[i];
		if((i + 1) % 4 == 0){
			cout << " ";
		}
	}
	cout << endl;
	cout << "Hexadecimal is:" << endl << "0x";
	for(int i = 0; i < hexLen; ++i){
		cout << hex[i];
	}
	cout << endl;

}
