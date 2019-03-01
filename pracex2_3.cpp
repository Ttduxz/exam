#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
char table[8][8];

void showTable();
void randomTable(char a[8][8]);

int main(){
	
	srand(time(0));	
	randomTable(table);
	showTable();
	
}

void showTable(){
	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			cout << table[i][j] << " ";
		}
		cout << "\n";
	}
}
void randomTable(char a[8][8]){
	int b,c;
	for(int i = 0 ; i < 8 ;i++){
	  for(int j = 0 ; j < 8 ;j++){
		  a[i][j] = rand()%25+66;
	  }
	}
}
//Write definition of function randomTable() here.


