#include<iostream>
using namespace std;

int main(){
	int count[5] = {}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	int totalstudent=0;
	char grade;
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{
		cout << "Student [" <<  totalstudent+1 <<  "]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade == '0') {// if grade is A
			break;
		}else if(grade == 'A'){
			count[0]++;
			totalstudent++;
		}
		else if(grade == 'B'){
			count[1]++;
			totalstudent++;
		}
		else if(grade == 'C'){
			count[2]++;
			totalstudent++;
		}
		else if(grade == 'D'){
			count[3]++;
			totalstudent++;
		}
		else if(grade == 'F'){
			count[4]++;
			totalstudent++;
		}
		else{
			cout << "Wrong input. Please input again.\n";
		}
	}while(true);
	
	
	cout << "In total " << totalstudent <<" students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4];	
	//	and so on ... for grade = C, D, F	
	
	return 0;
}
