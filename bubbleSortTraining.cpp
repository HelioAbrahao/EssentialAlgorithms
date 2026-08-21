#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(vector<int> &vetor){
    int size = vetor.size();

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size - 1 - i; j++){
            if(vetor[j] > vetor[j + 1]){
                swap(vetor[j], vetor[j + 1]); 
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);

    vector<int> v = {2, 12, 1, 23, 2, 52, 5, 12};

    bubbleSort(v); 

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " "; 
    }

    return 0;
}