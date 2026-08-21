#include<iostream>
#include<vector>
using namespace std;

void selectionSort(vector<int> &vetor){
    int size = vetor.size(); 

    for(int i = 0; i < size - 1; i++){
        int minIndex = i;
        for(int j = i + 1; j < size; j++){
            if(vetor[j] < vetor[minIndex]){
                minIndex = j;
            }
        }
        swap(vetor[i], vetor[minIndex]); 
    }
}

int main(){
    ios::sync_with_stdio(false);

    vector<int> v = {2, 12, 1, 23, 2, 52, 5, 12};

    selectionSort(v); 

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " "; 
    }

    return 0;
}