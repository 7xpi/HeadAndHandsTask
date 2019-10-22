//
//  main.cpp
//  task
//
//  Created by Ilya Uyutov.
//  Copyright © 2019 Ilya Uyutov. All rights reserved.
//
 
#include <iostream>
#include <functional>
#include <algorithm>
#include <iostream>
#include <limits.h>
#include <iterator>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include <memory.h>
#include <cstdlib>
#include <cstring>
#include <sstream>
#include <fstream>
#include <stdio.h>
#include <complex>
#include <iomanip>
#include <math.h>
#include <vector>
#include <bitset>
#include <string>
#include <time.h>
#include <ctime>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
#include <set>
 
#define endl "\n"
#define r0 return 0;
#define bn cout << endl;
#define INT long long int
#define vfind(vecName, num) find(vecName.begin(), vecName.end(), num)
#define hmap unordered_map
#define hset unordered_set
#define rnd(n, m) n + rand() % (m+1)
#define resz(a, n) a.resize(n)
#define pb push_back
#define srt(a) sort(a.begin(), a.end())
#define srt2(a) sort(a.begin(), a.end(), [](p a1, p b1)
#define rev(n) reverse(n.begin(), n.end())
#define forn(i, j, n) for (INT i = j; i < n; ++i)
#define forc(i, n) for (int i = n - 1; i >= 0 ; --i)
#define ford(i, j, n) for (INT i = n - 1; i >= j ; --i)
#define foreach(i, a) for (INT i : a)
#define cok cout << "OK" << endl;
#define ARRin(a, n) forn(i, 0, n) cin >> a[i];
#define ARROut(a, c) for (INT i : a) {cout << i << c;}
#define ARROutString(a, sp) for (string i : a) {cout << i << sp;}
#define im int main(int argc, const char * argv[])
#define sync  {ios::sync_with_stdio(false); cin.tie(0); cout.tie(0); srand(time(0)); }
#define SETout(setName, symb) copy( setName.begin(), setName.end(), ostream_iterator<char>(cout, symb));
#define forSet(setName, type) for (set<type>::iterator i = setName.begin(); i != setName.end(); ++i)
#define dve(type, name, n, m) vector<vector<type> > name(n, vector<type> (m, 0))

#define c1 cout << 1;
#define c0 cout << 0;

using namespace std;

INT findMaxElemAndGetInd(vector <INT> a){
	INT maxInd = 0, max = -1e9-1337;
	forn(i, 0 ,a.size()){
		if(a[i] > max){
			max = a[i];
			maxInd = i;
		}
	}
	return maxInd;
}

im {
	sync
	
	/*
	Код для известного кол-во элементов в массиве;
	*/
	INT n;
	cin >> n; //Вводим кол-во элементов массива;
	vector<INT> a(n);
	
	forn(i, 0, n){ //Вводим массив;
		cin >> a[i];
	}

	cout << findMaxElemAndGetInd(a); //выводим индекс (нумерация начинается с 0)

    r0
}

