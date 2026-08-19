# EssentialAlgorithms

Implementações em C++ de algoritmos clássicos de busca, ordenação e estruturas de dados, com foco em estudo e prática.

## Sobre

Repositório usado para praticar e consolidar a lógica por trás de algoritmos fundamentais de ciência da computação. Cada arquivo é uma implementação independente, muitas vezes acompanhada de uma versão "training" com variações, exercícios ou reimplementações do mesmo algoritmo, feitas para reforçar o entendimento.

## Algoritmos abordados

- **Busca**: busca binária
- **Ordenação**: bubble sort, selection sort
- Novos algoritmos são adicionados conforme o estudo avança (ex: merge sort, quick sort, estruturas de dados, etc.)

## Organização

Os arquivos seguem um padrão de nomenclatura simples:

- `algoritmo.cpp` — implementação principal do algoritmo
- `algoritmoTraining.cpp` — exercícios, variações ou uma segunda tentativa de implementação do mesmo algoritmo, sem consultar a versão original

Essa separação ajuda a comparar a evolução do entendimento sobre cada tema ao longo do tempo.

## Requisitos

- Compilador C++ (g++ recomendado)
- Padrão C++11 ou superior

## Como compilar e rodar

Cada arquivo é independente e pode ser compilado individualmente:

\`\`\`bash
g++ -std=c++11 -o nomeDoArquivo nomeDoArquivo.cpp
./nomeDoArquivo
\`\`\`

## Complexidade dos algoritmos

| Algoritmo | Melhor caso | Pior caso | Espaço |
|---|---|---|---|
| Busca binária | O(1) | O(log n) | O(1) |
| Bubble sort | O(n) | O(n²) | O(1) |
| Selection sort | O(n²) | O(n²) | O(1) |

## Objetivo do repositório

Este é um repositório de estudo pessoal, sem pretensão de ser uma biblioteca de produção. O foco está em entender profundamente como cada algoritmo funciona, suas vantagens, limitações e casos de uso, implementando-os do zero.

------------------------------------------------------------------------------------------------------------------------------------------------------------------------

# EssentialAlgorithms

C++ implementations of classic searching, sorting, and data structure algorithms, focused on study and practice.

## About

A repository used to practice and consolidate the logic behind fundamental computer science algorithms. Each file is a standalone implementation, often paired with a "training" version containing variations, exercises, or reimplementations of the same algorithm, done to reinforce understanding.

## Algorithms covered

- **Search**: binary search
- **Sorting**: bubble sort, selection sort
- New algorithms are added as the study progresses (e.g., merge sort, quick sort, data structures, etc.)

## Organization

Files follow a simple naming pattern:

- `algorithm.cpp` — main implementation of the algorithm
- `algorithmTraining.cpp` — exercises, variations, or a second attempt at implementing the same algorithm without referencing the original version

This separation helps track the evolution of understanding on each topic over time.

## Requirements

- C++ compiler (g++ recommended)
- C++11 standard or higher

## How to compile and run

Each file is standalone and can be compiled individually:

\`\`\`bash
g++ -std=c++11 -o fileName fileName.cpp
./fileName
\`\`\`

## Algorithm complexity

| Algorithm | Best case | Worst case | Space |
|---|---|---|---|
| Binary search | O(1) | O(log n) | O(1) |
| Bubble sort | O(n) | O(n²) | O(1) |
| Selection sort | O(n²) | O(n²) | O(1) |

## Repository goal

This is a personal study repository, not intended to be a production-ready library. The focus is on deeply understanding how each algorithm works, its advantages, limitations, and use cases, by implementing them from scratch.
