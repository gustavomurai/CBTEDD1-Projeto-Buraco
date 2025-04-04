#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <ctime>

// Código realizado em dupla por Gustavo e Igor Murai

using namespace std;

// Estrutura para representar uma carta
struct Carta {
    int naipe;   // 1 - Copas, 2 - Paus, 3 - Ouro, 4 - Espada
    int numero;  // 1 - Ás, 2-10, 11 - Valete, 12 - Dama, 13 - Rei
    int baralho; // 1 ou 2

    string toString() const {
        return to_string(naipe) + "-" + (numero < 10 ? "0" : "") + to_string(numero) + "-" + to_string(baralho);
    }
};

// Função para criar um baralho duplo
vector<Carta> criarBaralho() {
    vector<Carta> baralho;
    for (int b = 1; b <= 2; b++) {
        for (int n = 1; n <= 4; n++) {
            for (int c = 1; c <= 13; c++) {
                baralho.push_back({n, c, b});
            }
        }
    }
    return baralho;
}

// Função para embaralhar o baralho
void embaralhar(vector<Carta>& baralho) {
    random_device rd;
    mt19937 g(rd());
    shuffle(baralho.begin(), baralho.end(), g);
}

// Função para distribuir cartas para os jogadores
void distribuirCartas(const vector<Carta>& baralho, vector<vector<Carta>>& maos) {
    int index = 0;
    for (int j = 0; j < 4; j++) {
        for (int c = 0; c < 11; c++) {
            maos[j][c] = baralho[index++];
        }
    }
}

// Função para exibir as mãos dos jogadores
void mostrarMaos(const vector<vector<Carta>>& maos) {
    for (int j = 0; j < 4; j++) {
        cout << "Jogador " << j + 1 << ": ";
        for (const auto& carta : maos[j]) {
            cout << carta.toString() << " ";
        }
        cout << endl;
    }
}

int main() {
    vector<Carta> baralho = criarBaralho();
    embaralhar(baralho);

    vector<vector<Carta>> maos(4, vector<Carta>(11)); // 4 jogadores com 11 cartas cada
    distribuirCartas(baralho, maos);
    
    mostrarMaos(maos);

    return 0;
}
