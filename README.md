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
