Este repositório contém uma coleção de exercícios desenvolvidos em C++, abordando manipulação de strings, arquivos e efeitos visuais no terminal.

📂 Estrutura do Projeto
Exercicio 1.cpp → Efeito visual de "cascata" com texto
Exercicio 2.cpp → Verificador de palíndromos
Exercicio 3.cpp → Formatação de nomes (agenda telefônica)
Exercicio 4.cpp → Conversão de nomes para citação bibliográfica
nomes.txt → Arquivo de entrada utilizado nos exercícios 3 e 4
🧪 Descrição dos Exercícios
🟢 Exercício 1 – Efeito Cascata

Recebe uma mensagem do usuário e:

Centraliza o texto na linha 5 do terminal
Simula uma animação onde cada letra "cai" até a linha 20
Ao final, toda a mensagem aparece na linha 20

📌 Observação:
Utiliza windows.h, portanto funciona apenas no Windows.

🔵 Exercício 2 – Verificador de Palíndromo

Recebe uma mensagem e:

Remove espaços e converte para maiúsculas
Verifica se o texto é um palíndromo
Exibe o resultado na tela

✔ Exemplo:

Entrada: "Ame a ema"  
Saída: SIM (é palíndromo)
🟡 Exercício 3 – Formato de Agenda

Lê nomes de um arquivo nomes.txt e:

Converte para o formato:
Sobrenome, Nome(s)

✔ Exemplo:

Entrada: João Silva  
Saída: Silva, João
🔴 Exercício 4 – Citação Bibliográfica

Lê nomes de um arquivo nomes.txt e:

Converte para formato de citação acadêmica

✔ Exemplo:

Entrada: João Pedro da Silva  
Saída: SILVA, João P. D.
⚙️ Como Compilar e Executar
🔧 Requisitos
Compilador C++ (g++, MinGW, etc.)
💻 Compilação
g++ "Exercicio 1.cpp" -o ex1
g++ "Exercicio 2.cpp" -o ex2
g++ "Exercicio 3.cpp" -o ex3
g++ "Exercicio 4.cpp" -o ex4
▶️ Execução
./ex1
./ex2
./ex3
./ex4
📄 Arquivo nomes.txt

Para os exercícios 3 e 4, crie um arquivo nomes.txt na mesma pasta do programa:

Exemplo:

João Silva
Maria Oliveira Santos
Carlos Souza
