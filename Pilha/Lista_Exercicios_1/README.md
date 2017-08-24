#### DISCIPLINA: EDA0001 – Estrutura de Dados
#### SEMESTRE/ANO: 02/2017
#### ALUNO: Leonardo Tadeu Diniz Leal

# Lista de Exercícios 1 – Pilhas #

### 1) Faça um algoritmo para gerenciar as vagas em um estacionamento, onde os veículos estacionados são controlados pelas placas. A retirada dos veículos deve ocorrer na ordem inversa que os veículos são estacionados. Além disto, o estacionamento deve possuir um limite de veículos.

Exemplo:
* Capacidade do estacionamento: 5 veículos
* Adiciona MIX-7891
* Adiciona MAD-1238
* Adiciona QHA-9492
* Remove QHA-9492

Exibe veículos estacionados: MIX-7891 e MAD-1238

### 2) Faça um algoritmo que simule a pilha de execução de funções recursivas, considerando uma função que calcule o fatorial de um dado número. A cada recursão (elemento da pilha), deve ser armazenado o resultado do fatorial até o momento.

Exemplo:
* 5! = [1! = 1] [2! = 2] [3! = 6] [4! = 24] [5! = 120]

### 3) Faça um programa utilizando pilhas dinâmicas que solicite ao usuário uma palavra ou string. Em seguida, o programa deve informar se a palavra ou string é um palíndromo. Devem ser desconsiderados os sinais ortográficos como espaços, letras maiúsculas, pontuação e acentos.

Exemplo:
* Arara – SIM
* Carro – NÃO
* Reviver - SIM
* Socorram-me subi no ônibus em Marrocos – SIM
* A mãe te ama – SIM
* A mãe te amou - NÃO

### 4) Faça um programa utilizando pilhas dinâmicas que solicite uma expressão matemática em string. O programa deve indicar se os parênteses estão dispostos corretamente. A verificação dos parênteses deve considerar o sinal de igualdade.

Exemplo:
* (a + b) * (a – b) – SIM
* (a + b + c) * c) – NÃO
* a² = (b² + c²) – SIM
* (x = y + z) - NÃO

### 5) Faça um programa que controle os itens em estoque de um armazém, validando a quantidade de mercadorias empilháveis. Neste caso, cada pilha deve possuir um tamanho predefinido de acordo com cada tipo de mercadoria. Deve ser possível realizar operações de adição e remoção nas pilhas, considerando o limite predefinido. Ao final, o programa deve exibir um relatório descrevendo as mercadorias no armazém.

Exemplo:
* Quantas pilhas de mercadorias há no armazém: 3
* Qual é a mercadoria e tamanho de cada pilha:
** 3 - caixas de leite
** 5 - cadeiras plásticas
** 8 – caixas de detergente
* Adicionar 1 caixa de leite
* Adicionar 3 cadeiras plásticas
* Adicionar 5 caixas de detergente
* Adicionar 4 cadeiras plásticas (adicionar 2 e informar que o limite da pilha foi excedido)

Exibir relatório:
* 1 – caixa de leite
* 5 – cadeiras plásticas
* 5 – caixas de detergente

### 6) Faça um programa que resolva o problema da Torre de Hanói. Este quebracabeça consiste em uma base contendo três pinos, os quais são dispostos alguns discos empilhados, porém, em ordem crescente de diâmetro, de cima para baixo. O problema consiste em passar todos os discos do primeiro pino para o último, usando um dos pinos como auxiliar, de maneira que um disco maior nunca fique em cima de outro menor em hipótese alguma. O programa deve implementar três pilhas estáticas, cujos discos são representados por valores números.
