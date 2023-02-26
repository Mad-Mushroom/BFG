/*

 /$$$$$$$  /$$$$$$$$ /$$$$$$ 
| $$__  $$| $$_____//$$__  $$
| $$  \ $$| $$     | $$  \__/
| $$$$$$$ | $$$$$  | $$ /$$$$
| $$__  $$| $$__/  | $$|_  $$
| $$  \ $$| $$     | $$  \ $$
| $$$$$$$/| $$     |  $$$$$$/
|_______/ |__/      \______/ 

@author MadMushroom

@date 2023-02-22
@version 1.0

LICENSE:
This software is distributed under the GNU General Public License version 3 (GPLv3.0)

LEGAL NOTICE:
THIS SOFTWARE IS PROVIDED FOR EDUCATIONAL USE ONLY!
IF YOU ENGAGE IN ANY ILLEGAL ACTIVITY
THE AUTHOR DOES NOT TAKE ANY RESPONSIBILITY FOR IT.
BY USING THIS SOFTWARE YOU AGREE WITH THESE TERMS.

*/

#include <iostream>
#include <string>

using namespace std;

string ver = "v1.1";

bool exiting = false;

string domain = "";
string options = "";

void clear(){
	system("clear");
}

void setTitle(string ttl){
	string cmd = "title " + ttl;
	//system(cmd.c_str());
}

void attack(){
	if(domain == ""){
		cout << "No Domain!" << endl;
		return;
	}
	string cmd = "python3 resource/bfg.py " + domain + " " + options;
	system(cmd.c_str());
	//cout << cmd << endl;
	//exiting = true;
}

void printTitle(){
	cout << " /$$$$$$$  /$$$$$$$$ /$$$$$$ \n| $$__  $$| $$_____//$$__  $$\n| $$  \\ $$| $$     | $$  \\__/\n| $$$$$$$ | $$$$$  | $$ /$$$$\n| $$__  $$| $$__/  | $$|_  $$\n| $$  \\ $$| $$     | $$  \\ $$\n| $$$$$$$/| $$     |  $$$$$$/\n|_______/ |__/      \\______/" << ver << "\n\nMade by MadMushroom\nBackend made by Jan Seidl" << endl << endl << endl;
}

void printMenu(){
	cout << "== MainMenu ==" << endl << endl;
	cout << "[0] Start Attack" << endl << endl;
	cout << "[1] Set Domain" << endl;
	cout << "[2] Set Workers" << endl;
	cout << "[3] Set Sockets" << endl;
	cout << "[4] Set UserAgent" << endl;
	cout << "[5] Set Method" << endl;
	cout << "[6] Set SSL Certificate" << endl;
	cout << "[7] Set Debug Mode" << endl;
}

void MainMenu(){
	string command;
	clear();
	printTitle();
	printMenu();
	cout << ">";
	cin >> command;
	if(command == "exit") exiting = true;
	if(command == "0") attack();
	if(command == "1"){
		cout << "Domain? >";
		cin >> domain;
	}
	if(command == "2"){
		string tmp;
		cout << "Workers? >";
		cin >> tmp;
		options += "-w " + tmp + " ";
	}
	if(command == "3"){
		string tmp;
		cout << "Sockets? >";
		cin >> tmp;
		options += "-s " + tmp + " ";
	}
	if(command == "4"){
		string tmp;
		cout << "UserAgent? >";
		cin >> tmp;
		options += "-s " + tmp + " ";
	}
	if(command == "5"){
		string tmp;
		cout << "Method? >";
		cin >> tmp;
		options += "-s " + tmp + " ";
	}
	if(command == "6"){
		string tmp;
		cout << "SSL Certificate? >";
		cin >> tmp;
		options += "-s " + tmp + " ";
	}
	if(command == "7"){
		string tmp;
		cout << "Debug Mode? >";
		cin >> tmp;
		options += "-s " + tmp + " ";
	}
}

int main(int argc, char* argv[]){
	setTitle("Self Test...");
	if(system("python3 -h")){
		clear();
		cout << "Fatal Error!\nPython3 is not installed!" << endl;
		return 0;
	}else{
		setTitle("BFG");
		clear();
	}
	
	while(!exiting){
		MainMenu();
	}
	
	return 0;
}
