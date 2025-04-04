# **Projeto Buraco**  
Realizado por **Gustavo Murai e Igor Murai**, este projeto implementa um sistema de distribuição de cartas para o jogo de Buraco em **C++**, utilizando **estruturas de dados** para gerenciar um baralho duplo, embaralhamento e distribuição das cartas para os jogadores. O projeto explora conceitos como **vetores, aleatoriedade e manipulação de strings**.  

---

## **📌 Sobre o Projeto**  
Este projeto em C++ simula a distribuição de cartas para um jogo de **Buraco**. O programa:  

✅ Cria um **baralho duplo** (2 baralhos de 52 cartas, totalizando 104 cartas).  
✅ Embaralha as cartas de forma **aleatória**.  
✅ Distribui **11 cartas para cada um dos 4 jogadores**.  
✅ Exibe as **mãos de cada jogador** ao final da execução.  

---

## **🃏 Estrutura do Baralho**  
Cada carta é representada no formato `N-99-B`, onde:  

- **N** → Naipe (1 - Copas / 2 - Paus / 3 - Ouro / 4 - Espadas)  
- **99** → Número da carta (01 - Ás / 02-10 - Numéricas / 11 - Valete / 12 - Dama / 13 - Rei)  
- **B** → Baralho de origem (1 ou 2)  

**Exemplo:**  
- `4-10-2` → Carta **10 de Espadas**, do **2º baralho**.  

---

## **⚙️ Como Usar**  

### **1️⃣ Clonar este repositório**
Se você tiver o Git instalado, use:  
```sh
git clone https://github.com/seu-usuario/buraco-cpp.git


