# Lista de Exercícios -- Ponteiros em C

Este repositório contém a resolução de uma lista de exercícios sobre
**ponteiros em C**, proposta na disciplina de Estrutura de Dados.

------------------------------------------------------------------------

## 🔎 O que são ponteiros em C?

Um **ponteiro** é uma variável especial que armazena o **endereço de
memória** de outra variável.\
Com ponteiros podemos acessar, modificar valores indiretamente e
trabalhar com estruturas dinâmicas de dados.

Exemplo simples:

``` c
int x = 10;
int *ptr = &x;

printf("Valor: %d\n", *ptr);  // imprime 10
printf("Endereco: %p\n", ptr); // imprime o endereço de x
```

No código acima: - `&x` → pega o endereço da variável `x`.\
- `*ptr` → acessa o valor armazenado nesse endereço.

------------------------------------------------------------------------

## 📚 Exercícios resolvidos

Cada exercício foi implementado em um arquivo separado:

1.  **ex1.c** → Cofrinho do João: variável inteira e ponteiro exibindo
    valor e endereço.\
2.  **ex2.c** → Idade do aluno: leitura de idade e impressão do valor e
    endereço.\
3.  **ex3.c** → Preços de 5 produtos: vetor com ponteiros e cálculo de
    10% de desconto.\
4.  **ex4.c** → Horas de trabalho: vetor dinâmico (`malloc`) preenchido
    com ponteiros e soma total.\
5.  **ex5.c** → Notas de 6 alunos: inversão de vetor usando ponteiros.\
6.  **ex6.c** → Matriz 3x3 de notas: exibição com ponteiros e soma da
    diagonal principal.\
7.  **ex7.c** → Partida de vôlei (matriz 4x4): cálculos diversos
    (pares/ímpares, totais, médias e jogador mais regular).

------------------------------------------------------------------------

## ▶️ Como compilar e executar

Para compilar qualquer exercício, use o **gcc** (ou outro compilador C):

``` bash
gcc ex1.c -o ex1
./ex1
```

Substitua `ex1.c` pelo nome do arquivo do exercício que deseja rodar.

------------------------------------------------------------------------

## 📌 Observações

-   Todos os exercícios utilizam **ponteiros** em alguma parte da
    lógica.\
-   O projeto foi estruturado com um arquivo `.c` para cada questão,
    facilitando a leitura e manutenção.
