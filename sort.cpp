#include <vector>
#include <algorithm>
#include <iostream>
#include <fstream>
#include "sort.h"

using namespace std;

void Sort::input(){
    fstream inFile("file.in",ios::in);
    inFile>>number;
    read_in.resize(number);
    int i=0;
    while(inFile>>read_in[i])
        i++;
}

void Sort::sorting(){
    sort(read_in.begin(),read_in.end());
    reverse(read_in.begin(),read_in.end());
    for(int i=0;i<5;i++){
        sum+=read_in[i];
    }
}

void Sort::output(){
    fstream outFile("file.out",ios::out);
    outFile<<sum;
}
