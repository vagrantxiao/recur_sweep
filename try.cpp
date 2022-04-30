//============================================================================
// Name        : try.cpp
// Author      : Yuanlong Xiao
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;
#define N 5
#define W 4
int weights[N];

typedef unsigned int uint;


void recur_sweep(vector< vector<int> > &dfx_idxes, int digit[N], uint n){
	if(n==0) {dfx_idxes.clear(); }
	if(n==N) { return; }
	for(uint i=0; i<weights[n]; i++){
		digit[n] =i;
		if(n==N-1){
			vector<int> tmp;
			for(uint j=0; j<N; j++){
				tmp.push_back(digit[j]);
			}
			dfx_idxes.push_back(tmp);
		}
		recur_sweep(dfx_idxes, digit, n+1);
	}
}

int main() {
	for(int i=0; i<N; i++){ weights[i] = W; }
	vector< vector<int> > dfx_idxes;
	int digit[N];
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	recur_sweep(dfx_idxes, digit, 0);
	for(uint i=0; i<dfx_idxes.size(); i++){
		for(uint j=0; j<dfx_idxes[i].size(); j++){
			cout << dfx_idxes[i][j] << " ";
		}
		cout << endl;

	}
	return 0;
}

