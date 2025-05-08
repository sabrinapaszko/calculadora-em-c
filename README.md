# calculadora-em-c
Uma calculadora simples em linguagem C que permite realizar operações matemáticas básicas, como adição, subtração, multiplicação e divisão, diretamente do terminal.
![Status](https://img.shields.io/badge/status-finalizado-brightgreen)
![License](https://img.shields.io/badge/license-MIT-blue)

---

##  Demonstração![demo](assets/demo.png)
> *Imagem de exemplo da calculadora em execução no terminal*

---

## Pré-requisitos e Instalação

Antes de executar o projeto, vocẽ precisa ter:

- **CodeBlocks** instalado (que inclui o compilador C) - **Terminal ou 
prompt de comando** (caso queira rodar fora do CodeBlocks)


## Para compilar no CodeBlocks:

1. Abra o CodeBlocks e carregue o arquivo `calculadora.c`.
2. Clique no botão "Build" ou pressione **F9** para compilar o código.

## Para rodar no CodeBlocks:

1. Após compilar, clique em "Run" ou pressione **Ctrl+F10"** para executar u
o programa.

SE você preferir rodar a partir do terminal, você pode usar o `gcc`(caso tenha o complilador instalado), no terminal, execute:

## Como Usar 

Após executar o programa, vocẽ verá um menu no terminal para escolher a operação desejada.

### Exemplo:

Escolha a operação:
1. Soma
2. Subtração
3. Multiplicação
4. Divisão 
   Opção: 1
   Digite o primeiro número: 10
   Digite o segundo número: 5
   Resultado: 15

## Estrutura do Projeto

calculadora-em-c/
|---calculadora.c
|---README.md
|---LICENSE
|---assets/
|---demo.png

### Principais Arquivos

- `calculadora.c` : Código-fonte principal da calculadora.
- `README.md` : Documento explicativo do projeto.
- `LICENSE` : Arquivo com a licença de uso do projeto.
- `assets/` : Contém imagens utilizadas no README.
 
## Licença

Esse projeto está licenciado sob Licença MIT - veja o arquivo [LICENSE](LICENSE) para mais detalhes.

```bash
gcc calculadora.c -o calculadora
./calculadora


