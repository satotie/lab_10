#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
	ifstream source;
	ofstream dest;
	source.open("cheerbook.txt");
	dest.open("cheerbook_copy.txt");
	string line;

	dest << "-------------------- BOOM ---------------------\n";

	while(getline(source,line)){
		dest << line << "\n";
	}

	dest << "-------------------- HA!! ---------------------\n";
	//กรอก Code เฉพาะส่วนนี้ ให้สอดคล้องกับโจทย์และ Code ส่วนอื่น ๆ 
	//โดยห้ามแก้ไข Code ในส่วนอื่น ๆ

    source.close();
    dest.close();
	return 0;
}
