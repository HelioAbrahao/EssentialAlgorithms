#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int>& vetor, int inicio, int meio, int fim) {
    int tamanhoEsquerda = meio - inicio + 1;
    int tamanhoDireita = fim - meio;

    vector<int> esquerda(tamanhoEsquerda);
    vector<int> direita(tamanhoDireita);

    // Copia a primeira metade
    for (int i = 0; i < tamanhoEsquerda; i++) {
        esquerda[i] = vetor[inicio + i];
    }

    // Copia a segunda metade
    for (int i = 0; i < tamanhoDireita; i++) {
        direita[i] = vetor[meio + 1 + i];
    }

    int i = 0;
    int j = 0;
    int k = inicio;

    // Intercala as duas metades ordenadas
    while (i < tamanhoEsquerda && j < tamanhoDireita) {

        if (esquerda[i] <= direita[j]) {
            vetor[k] = esquerda[i];
            i++;
        } else {
            vetor[k] = direita[j];
            j++;
        }

        k++;
    }

    // Caso ainda existam elementos na esquerda
    while (i < tamanhoEsquerda) {
        vetor[k] = esquerda[i];
        i++;
        k++;
    }

    // Caso ainda existam elementos na direita
    while (j < tamanhoDireita) {
        vetor[k] = direita[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int>& vetor, int inicio, int fim) {

    // Caso base: um vetor com 0 ou 1 elemento já está ordenado
    if (inicio >= fim) {
        return;
    }

    int meio = inicio + (fim - inicio) / 2;

    // Ordena a metade esquerda
    mergeSort(vetor, inicio, meio);

    // Ordena a metade direita
    mergeSort(vetor, meio + 1, fim);

    // Junta as duas metades ordenadas
    merge(vetor, inicio, meio, fim);
}

int main() {

    vector<int> vetor = {38, 27, 43, 10};

    mergeSort(vetor, 0, vetor.size() - 1);

    for (int numero : vetor) {
        cout << numero << " ";
    }

    cout << endl;

    return 0;
}