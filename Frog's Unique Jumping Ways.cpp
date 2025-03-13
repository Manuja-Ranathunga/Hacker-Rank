//
// Created by user on 3/13/2025.
//
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int noWays(int n){
    if (n==0) return 1;
    if (n<0) return 0;
    int twoSteps = noWays(n-2);
    int threeSteps = noWays(n-3);
    return twoSteps + threeSteps;
}

int main() {
    int n;
    cin >> n;
    cout << noWays(n) << endl;

    return 0;
}
