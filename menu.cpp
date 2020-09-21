/*
*	owner: ibrahim cansun
*	date: 21.09.2020
*	purpose: i will make a basic menu
*/

#include <iostream>//cout cin library

using namespace std;//standard namespace

void CallMenu(string[], int);//declaration
void TakeChoice(int&, int);//declaration

const int maxMsg = 3;//how many message will show to user
string msgs[maxMsg] = {"Call ibrahim", "Call Cansu", "Call Cansun"};//what will program show
int chosen = 0;

int main(){
	CallMenu(msgs, maxMsg);//calling function
	TakeChoice(chosen, maxMsg);//calling function
	return 0;
}

void CallMenu(string msg[], int msgNum){
	for(int i = 0; i < msgNum; i++){
		cout << i+1 << "-" << msg[i] << endl;//program will write messages.
		//1-bla bla
		//2-flip flop
		//.....
	}
}

void TakeChoice(int &cho, int msgNum){
	do{
		cout << "\nProcess: ";
		cin >> cho;
	}while(cho < 1 || cho > msgNum);//1, 2, 3, ..., msgNum
}