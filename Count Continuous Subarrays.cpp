//
// Created by user on 3/13/2025.
//
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int checkValidity(vector<int> arr){

    if(arr.size()==0) return 1;
    else{
        int l=arr.size();
        for(int i=0;i<l;i++){
            for(int j=i+1;j<l;j++){
                if(0>abs(arr[i]-arr[j]) || abs(arr[i]-arr[j])>2) return 0;
            }
        }

        return 1;
    }
}

int main() {
    int count =0;
    vector<int> numbers;
    int n;
    cin >> n;
    int num;
    while(cin>> num)
        numbers.push_back(num);
    int l = numbers.size();
    for(int i=0;i<l;i++){
        for(int j=i+1;j<=l;j++){
            vector<int> subArray(numbers.begin()+i,numbers.begin()+j);

            count += checkValidity(subArray);
        }
    }
    cout << count << endl;
    return 0;
}
