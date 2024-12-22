# Embarcatech_Grupo8

Repositório criado para atividade da unidade 3 do subgrupo 8 - Embarcatech

## 1 - Função de Conversão de Unidade de Volume

A função de conversão de unidades de volume permite que o usuário converta valores entre diferentes unidades de volume, como litro, mililitro e metro cúbico. O processo é simples e envolve as seguintes etapas:

1. **Seleção da unidade de origem**: O usuário escolhe a unidade de origem, como Litro, Mililitro ou Metro Cúbico.
2. **Seleção da unidade de destino**: O usuário escolhe a unidade para a qual deseja converter o valor fornecido.
3. **Entrada de valor**: O usuário insere o valor a ser convertido.
4. **Cálculo da conversão**: O valor informado é convertido com base nos fatores de conversão predefinidos entre as unidades.
5. **Exibição do resultado**: O resultado da conversão é exibido, mostrando o valor convertido entre as unidades selecionadas.

Exemplo de funcionamento:

- Se o usuário selecionar "Litro" como unidade de origem e "Metro Cúbico" como unidade de destino, e inserir o valor de 1000, o programa calculará que 1000 Litros equivale a 1 Metro Cúbico.

---





## 4 - Função de Conversão de Unidade de Temperatura

A função de conversão de unidades de temperatura permite que o usuário converta valores entre diferentes escalas de temperatura: Celsius, Fahrenheit e Kelvin. O processo funciona de maneira simples e clara:

1- Seleção da conversão desejada: O usuário escolhe uma das opções no menu, como Celsius para Fahrenheit, Celsius para Kelvin, etc.
2- Entrada de valor: O usuário insere a temperatura que deseja converter.
3- Cálculo da conversão: O programa realiza a conversão com base nas fórmulas específicas para cada escala.
4-Exibição do resultado: O resultado da conversão é exibido, mostrando a temperatura na escala desejada.

Exemplo de funcionamento:
Se o usuário selecionar "Celsius para Fahrenheit" e inserir o valor de 25, o programa calculará que 25°C equivale a 77°F.




## 8. Conversão de Unidades de Tempo

Este programa em C permite converter valores entre segundos, minutos e horas. Ele solicita ao usuário uma opção de entrada e realiza os cálculos de conversão com base na unidade escolhida.

## Funcionalidades

- **Opção 1:** Converte segundos para minutos e horas.  
- **Opção 2:** Converte minutos para segundos e horas.  
- **Opção 3:** Converte horas para minutos e segundos.  

## Como Usar

1. Compile o programa utilizando um compilador C, como `gcc`:  
   ```bash
   gcc -o tarefa3 main.c funcoes.c
   ```
2. Execute o programa:  
   ```bash
   ./tarefa3
   ```
3. Escolha uma das opções fornecidas no menu:
   - **1:** Inserir segundos.
   - **2:** Inserir minutos.
   - **3:** Inserir horas.

4. O programa exibirá os valores correspondentes nas outras unidades.

## Exemplo de Uso

### Entrada:
```
Escolha uma opção:
1 Para segundos
2 Para minutos
3 Para horas
1
Digite os segundos: 3600
```

### Saída:
```
Tempo em segundos: 3600
Tempo em minutos: 60
Tempo em horas: 1
```

## Observações

- O programa valida a entrada, exibindo uma mensagem de erro para opções inválidas.  
- As conversões utilizam fatores simples:
  - 1 minuto = 60 segundos.
  - 1 hora = 3600 segundos ou 60 minutos.



