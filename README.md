# Projeto de Lista Encadeada e Lista Sequencial

Este projeto implementa duas estruturas de dados: uma lista encadeada dinâmica e uma lista sequencial estática. O objetivo é fornecer funcionalidades para manipulação de listas de alunos, incluindo inserção, remoção, busca e verificação de estado.

## Estrutura do Projeto

O projeto é composto pelos seguintes arquivos:

- `dinamicaEncadeada.h`: Contém os protótipos das funções e as definições de tipos para a lista encadeada dinâmica.
- `dinamicaEncadeada.c`: Contém a implementação das funções para a lista encadeada dinâmica.
- `listaSequencial.h`: Contém os protótipos das funções e as definições de tipos para a lista sequencial estática.
- `listaSequencial.c`: Contém a implementação das funções para a lista sequencial estática.
- `main.c`: Contém a função principal que interage com o usuário e chama as funções de manipulação da lista.

## Funcionalidades

### Lista Encadeada Dinâmica

- **Criar Lista**: Cria uma lista vazia.
- **Liberar Lista**: Libera a memória alocada para a lista.
- **Inserir no Início**: Insere um aluno no início da lista.
- **Inserir no Final**: Insere um aluno no final da lista.
- **Tamanho da Lista**: Retorna a quantidade de alunos na lista.
- **Verificar se a Lista está Vazia**: Verifica se a lista está vazia.
- **Verificar se a Lista está Cheia**: Verifica se a lista está cheia (sempre retorna 0, pois a lista é dinâmica).

### Lista Sequencial Estática

- **Criar Lista**: Cria uma lista vazia.
- **Liberar Lista**: Libera a memória alocada para a lista.
- **Inserir no Início**: Insere um aluno no início da lista.
- **Inserir no Final**: Insere um aluno no final da lista.
- **Inserção Ordenada**: Insere um aluno de forma ordenada na lista.
- **Remover do Início**: Remove um aluno do início da lista.
- **Remover do Final**: Remove um aluno do final da lista.
- **Remover por Matrícula**: Remove um aluno da lista por matrícula.
- **Buscar por Matrícula**: Busca um aluno na lista por matrícula.
- **Buscar por Posição**: Busca um aluno na lista por posição.
- **Tamanho da Lista**: Retorna a quantidade de alunos na lista.
- **Verificar se a Lista está Vazia**: Verifica se a lista está vazia.
- **Verificar se a Lista está Cheia**: Verifica se a lista está cheia.

## Compilação e Execução

### Compilação

Para compilar o projeto, use o compilador `gcc`. Execute o seguinte comando no terminal:

```sh
gcc main.c dinamicaEncadeada.c [listaSequencial.c](http://_vscodecontentref_/0) -o meu_programa
