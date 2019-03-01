#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
template <typename T>
void sort(T x[], int N){
	for(int i = 1; i < N; i++){
		for(int j = i; j > 0; j--){
			if(x[j] > x[j-1]){
				T temp = x[j];
				x[j] = x[j-1];
				x[j-1] = temp;
			}else{
				break;
			} 
		}
	}
}

int main(){
	ifstream source("score1.txt");
	ofstream x("result.txt");
	string line;
	float a[20];
	int i,j=0;
	while(getline(source,line)){
		a[i] = atof(line.c_str());		
		i++;
	}
	sort(a,20);
	int b =1;
	int status=0;
	int summ =0;
	for(int i = 0; i < 20;i++){
		if(status == 1){
		x << b+summ << " : "<<a[i] <<"\n";
		status =0;
		}
		else{
		x << b << " : "<<a[i] <<"\n";
		}
		if(a[i+1]==a[i]){
		summ = summ+1;
		status == 1;
		continue;
		}
		b++;
		
	}
	return 0;
}




