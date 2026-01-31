# 🧠 Lógica de Programação em C

Este diretório contém minha trilha de estudos sobre os fundamentos da linguagem C. O conteúdo foi reorganizado em módulos práticos para facilitar a consulta e o aprendizado progressivo.

---

## 📚 Índice de Módulos

### 📂 [01 - Fundamentos](./01-Fundamentos)
*Conceitos iniciais e manipulação de dados.*
- **Básico:** [Olá Mundo](./01-Fundamentos/OlaMundo.c), [Sintaxe de Variáveis](./01-Fundamentos/Variaveis.c), [Tipos Primitivos](./01-Fundamentos/TiposDadosPrimitivos.c)
- **Entrada e Saída:** [Leitura de Dados (scanf/fgets)](./01-Fundamentos/EntradaDados.c), [Saída de Dados (printf)](./01-Fundamentos/SaidaDados.c)
- **Modificadores:** [Unsigned](./01-Fundamentos/ModificadorUnsignedTiposDados.c), [Long](./01-Fundamentos/ModificadorLongTiposDados.c), [Casting (Conversão)](./01-Fundamentos/ConversaoTipos.c)

### 📂 [02 - Operadores](./02-Operadores)
*Ferramentas matemáticas e lógicas.*
- **Aritméticos:** [Cálculos Básicos](./02-Operadores/OperadoresAritimetico.c)
- **Atribuição:** [Atribuição](./02-Operadores/OperadoresAtribuicao.c)
- **Comparação:** [Relacionais](./02-Operadores/OpeeradoresRelacionais.c), [Ternário](./02-Operadores/OperadorTernario.c)
- **Lógicos:** [AND (&&)](./02-Operadores/OperadoreLogicoAND.c), [OR (||)](./02-Operadores/OperadoreLogicoOR.c), [NOT (!)](./02-Operadores/OperadoreLogicNOT.c)
- **Controle:** [Incremento](./02-Operadores/OperadorIncremento.c), [Decremento](./02-Operadores/OperadorDecremento.c), [Precedência](./02-Operadores/OrdemProcedencia.c)

### 📂 [03 - Decisão](./03-Decisao)
*Controle de fluxo condicional.*
- **If/Else:** [Simples](./03-Decisao/EstruturaCondicionalSimples.c), [Composta](./03-Decisao/EstruturaCondicionalComposta.c), [Encadeada](./03-Decisao/EstruturaCondicionalEncadeada.c), [Aninhada](./03-Decisao/EstruturaCondicionaAninhada.c)
- **Switch Case:** [Estrutura Básica](./03-Decisao/UsoSwitch.c), [Menus Interativos](./03-Decisao/MenusInterativosSwitchCase.c)
- **Prática:** [Integração de Decisões](./03-Decisao/IntegracaoEstruturasDecisao.c)

### 📂 [04 - Loops](./04-Loops)
*Estruturas de repetição.*
- **For:** [Básico](./04-Loops/EstruturaRepeticaoFor.c), [Aninhados](./04-Loops/EstruturaRepeticaoForAninhados.c), [Complexos](./04-Loops/LoopForAtualizacoeComplexas.c)
- **While:** [Básico](./04-Loops/EstruturaRepeticaoWhile.c), [Aninhado](./04-Loops/EstruturaRepeticaoWhileAninhado.c)
- **Do-While:** [Básico](./04-Loops/EstruturaRepeticaoDoWhile.c), [Aninhado](./04-Loops/EstruturaRepeticaoDoWhileAninhado.c)
- **Controle:** [Break e Continue](./04-Loops/LoopsUsoContinueBreak.c)

### 📂 [05 - Modularização](./05-Modularizacao)
*Organização de código em blocos.*
- **Funções e Procedimentos:** [Procedimentos](./05-Modularizacao/Procedimentos.c)
- **Técnicas:** [Recursividade](./05-Modularizacao/Recursividade.c)

### 📂 [06 - Vetores e Matrizes](./06-Vetores-Matrizes)
*Estruturas de dados estáticas.*
- **Vetores (Arrays):** [Declaração](./06-Vetores-Matrizes/Arrays.c), [Percorrendo com Loops](./06-Vetores-Matrizes/VetoresLoops.c), [Soma](./06-Vetores-Matrizes/SomaElementosVetor.c)
- **Matrizes:** [Conceito](./06-Vetores-Matrizes/Matriz.c), [Loops em Matrizes](./06-Vetores-Matrizes/MatrizesLoops.c)
- **Algoritmos:** [Busca](./06-Vetores-Matrizes/BuscaCondicionalMatriz.c), [Substituição](./06-Vetores-Matrizes/SubstituicaoCondicionalElementos.c), [Operações Combinadas](./06-Vetores-Matrizes/OperacoesCombinadasMatrizVetores.c)

---

## 🚀 Como Executar

Navegue até a pasta do módulo desejado para compilar os códigos:

```bash
# Exemplo: Entrando na pasta de Operadores
cd 02-Operadores
gcc OperadoresAritimetico.c -o teste
./teste
