#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> &vetor, int target){
    int left = 0, right = vetor.size() - 1;

    while(left <= right){
        int mid = (left + right)/2; 
        if(vetor[mid] == target){
            return mid;
        } else if (vetor[mid] < target){
            left = mid + 1; 
        } else {
            right = mid - 1; 
        }
    }
    return - 1; 
}

int main(){
    ios::sync_with_stdio(false);

//                   0  1  2  3   4   5   6   7    8
    vector<int> v = {1, 2, 3, 12, 12, 23, 43, 233, 300};


    int target; 
    cout << "Digite o elemento que procura: ";
    cin >> target; 

    if(binarySearch(v, target) != -1){
        cout << "O valor procurado está no indice " << binarySearch(v, target) << endl;
    } else {
        cout << "O valor procurado não esta presente no vetor. " << endl; 
    }

    return 0;
}