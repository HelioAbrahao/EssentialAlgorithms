#include<iostream>
using namespace std;
   
// 1, 1, 2, 3, 5, 8, 13,...
// Encontrar a soma dos n primeiros termos da sequência de fibonacci utilizando recursão. 
// f(n) = n + f(n - 1) + f(n - 2)
// f(5) = f(4) + f(3)
// n == 0 -> return 0

int fibonacci(int number){
    if(number - 1 == 0 || number - 2 == (-1)){
        return 1; 
    } else {
        return fibonacci(number - 1) + fibonacci(number - 2); 
    }
}



int main(){
    ios::sync_with_stdio(false);
    
    int number;
    cin >> number;

    cout << fibonacci(number) << endl;

    return 0; 
}