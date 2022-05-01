//============================================================================
// Name        : try.cpp
// Author      : Yuanlong Xiao
// Version     :
// Copyright   : Your copyright notice
// Description : This snippet can generate N-dimension sequence by recur_sweep()
//               fucntion.
//               N: how many digits you want to sweep.
//               W: the weights for each digit. e.g.: 2 for binary, 10 for decimal.
//               weights[N]: the weights for each digit. By default, we use W.
//                           You can also specify your own weights.
//============================================================================

#include <iostream>
#include <vector>
using namespace std;
#define N 2  // how many digits you want to sweep.
#define W 10  // The default weights for each digit
int weights[N]; // the weights for each digit

typedef unsigned int uint;

void recur_sweep(vector< vector<int> > &idxes, int digit[N], uint n){
	if(n==0) {idxes.clear(); }
	if(n==N) { return; }
	for(uint i=0; i<weights[n]; i++){
		digit[n] =i;
		if(n==N-1){
			vector<int> tmp;
			for(uint j=0; j<N; j++){
				tmp.push_back(digit[j]);
			}
			idxes.push_back(tmp);
		}
		recur_sweep(idxes, digit, n+1);
	}
}

int main() {
        // initialize the weights with W. You can also specify different weights for each digit.
	for(int i=0; i<N; i++){ weights[i] = W+i; }
	vector< vector<int> > idxes;
	int digit[N];
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	recur_sweep(idxes, digit, 0);
	for(uint i=0; i<idxes.size(); i++){
		for(uint j=0; j<idxes[i].size(); j++){
			cout << idxes[i][j] << " ";
		}
		cout << endl;

	}
	return 0;
}

