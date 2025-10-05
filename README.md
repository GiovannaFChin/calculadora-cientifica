# Calculadora Científica em C
Uma calculadora científica simples desenvolvida em **C** que realiza as seguintes operações:
- Soma
- Subtração
- Multiplicação
- Divisão
- Potenciação
- Radiciação
- Fatorial

O projeto foi feito para estudo e prática de programação em C, modularização com múltiplos arquivos (`main.c` e `operacoes.c`/`operacoes.h`), e manejo de entradas do usuário.

## Estrutura do projeto:
├─ main.c # Menu principal e interação com o usuário  
├─ operacoes.c # Implementação das operações matemáticas  
├─ operacoes.h # Protótipos das funções

## Como compilar

Certifique-se de ter o **GCC** instalado (MinGW no Windows, ou GCC no Linux/macOS).
No terminal, estando na pasta do projeto, rode:

```bash
gcc main.c operacoes.c -o calculadora.exe
./calculadora
```
Após isso, o menu será exibido:
--------------------------
CALCULADORA CIENTÍFICA
 1 - Soma  
 2 - Subtração  
 3 - Multiplicação
 4 - Divisão
 5 - Potenciação
 6 - Radiciação
 7 - Fatorial
 8 - Sair
Digite a opção:
------------------------

Digite a opção da operação desejada e siga as intruções para inserir os números dos cálculos.

## Observações:
- Certifique-se de digitar números inteiros para operações de fatorial e radiciação de inteiros.
- O programa usa UTF-8 para acentuação correta em terminais compatíveis.
