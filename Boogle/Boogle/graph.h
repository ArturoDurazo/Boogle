#pragma once
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <fstream>

//graph stuff
template <class Tipo>
class Tipografo
{
public:
	void loadDic();
	void AgregaArista(int nodoInicial, int nodoFinal, int peso = 1);
	void findAllPaths(int s, int d, int maxLength);
	void findAllPathsUtil(int u, int d, bool visited[],
		int path[], int& path_index, int maxLength);
	Tipografo(Tipo nodes[], int size = 100);
	int findAllWords();
	bool wordIsInBoard(std::string word);
	std::vector<std::string> sendRemaining();
	//~Tipografo();
protected:
	int MaximoTamano;          //máximo no. de vértices
	int TamanoGrafo;           //tamano del nodo actual
	int** MatrizDeAdjacencia; //matriz de adjacencia
	std::vector<std::string> arrDic;
	std::vector<std::string> arrWordsInBoard;
	std::vector<std::string> arrWordsFound;
	node* nodes;
};

template <class Tipo>
void Tipografo<Tipo>::loadDic() {
	
	std::ifstream File("dictionary.txt");
	std::string Word;
	int i = 0;
	while (File >> Word)
	{
		if (Word.size() > 2) {
			arrDic.push_back(Word);
		}
	}
}


template <class Tipo>
Tipografo<Tipo>::Tipografo(Tipo nodes[], int size)
{
	this->nodes = nodes;
	int renglon, columna;
	MaximoTamano = size;
	if (size <= 0)
	{
		std::cout << "El tamaño debe de ser un valor positivo " << std::endl;
		std::cout << "Se crea un grafo con  100." << std::endl;
		TamanoGrafo = 100;
	}
	else
		TamanoGrafo = size;  // asigna el valor maximo del grafo
	//Crea  los renglones
	MatrizDeAdjacencia = new int * [TamanoGrafo];
	//Crea las columnas
	for (columna = 0; columna < TamanoGrafo; columna++)
		MatrizDeAdjacencia[columna] = new int[TamanoGrafo];
	// Inicializa los valores en 0, es un grafo no dirigido
	for (renglon = 0; renglon < TamanoGrafo; renglon++)
		for (columna = 0; columna < TamanoGrafo; columna++)
			MatrizDeAdjacencia[renglon][columna] = 0;

	loadDic();
	//Agregar aristas si son 3x3 o 4x4
	if (size == 9) {
		AgregaArista(0, 1);
		AgregaArista(0, 3);
		AgregaArista(0, 4);

		AgregaArista(1, 0);
		AgregaArista(1, 2);
		AgregaArista(1, 3);
		AgregaArista(1, 4);
		AgregaArista(1, 5);

		AgregaArista(2, 4);
		AgregaArista(2, 5);

		AgregaArista(3, 4);
		AgregaArista(3, 6);
		AgregaArista(3, 7);

		AgregaArista(4, 5);
		AgregaArista(4, 6);
		AgregaArista(4, 7);
		AgregaArista(4, 8);

		AgregaArista(5, 7);
		AgregaArista(5, 8);

		AgregaArista(6, 7);
		
		AgregaArista(7, 8);

	}
	else if (size == 16) {
		AgregaArista(0, 1);
		AgregaArista(0, 4);
		AgregaArista(0, 5);

		AgregaArista(1, 2);
		AgregaArista(1, 4);
		AgregaArista(1, 5);
		AgregaArista(1, 6);

		AgregaArista(2, 3);
		AgregaArista(2, 5);
		AgregaArista(2, 6);
		AgregaArista(2, 7);

		AgregaArista(3, 6);
		AgregaArista(3, 7);

		AgregaArista(4, 5);
		AgregaArista(4, 8);
		AgregaArista(4, 9);

		AgregaArista(5, 6);
		AgregaArista(5, 8);
		AgregaArista(5, 9);
		AgregaArista(5, 10);
		
		AgregaArista(6, 7);
		AgregaArista(6, 9);
		AgregaArista(6, 10);
		AgregaArista(6, 11);

		AgregaArista(7, 10);
		AgregaArista(7, 11);

		AgregaArista(8, 9);
		AgregaArista(8, 12);
		AgregaArista(8, 13);

		AgregaArista(9, 10);
		AgregaArista(9, 12);
		AgregaArista(9, 13);
		AgregaArista(9, 14);

		AgregaArista(10, 11);
		AgregaArista(10, 13);
		AgregaArista(10, 14);
		AgregaArista(10, 15);

		AgregaArista(11, 14);
		AgregaArista(11, 15);
		
		AgregaArista(12, 13);

		AgregaArista(13, 14);

		AgregaArista(14, 15);
		
	}
}


// Agrega una arista para un grafo no dirigido
template <class Tipo>
void  Tipografo<Tipo>::AgregaArista(int nodoInicial, int nodoFinal, int peso)
{
	if ((nodoInicial >= 0) && (nodoInicial < TamanoGrafo))
		if ((nodoFinal >= 0) && (nodoFinal < TamanoGrafo))
		{
			MatrizDeAdjacencia[nodoInicial][nodoFinal] = peso;
			MatrizDeAdjacencia[nodoFinal][nodoInicial] = peso;
		}
}


template <class Tipo>
int Tipografo<Tipo>::findAllWords() {
	for (int i = 0; i < TamanoGrafo; i++) {
		for (int j = 0; j < TamanoGrafo; j++) {
			if (i != j) {
				unsigned int maxLength = 0;
				bool found = false;
				for (std::string w : arrDic) {
					std::string first = nodes[i].getData();
					std::for_each(first.begin(), first.end(), [](char& c) {
						c = ::tolower(c);
						});
					std::string second = nodes[j].getData();
					std::for_each(second.begin(), second.end(), [](char& c) {
						c = ::tolower(c);
						});		

					if (w.substr(0, 1) == first && w.substr(w.size() - 1) == second) {
						found = true;
						if (w.size() > maxLength) {
							maxLength = w.size();
						}
					}
				}

				if (found) {
					findAllPaths(i, j, maxLength);
				}
			}
		}
	}
	return arrWordsInBoard.size();
}

//recorre todos los caminos posibles tomando en cuenta el mas largo y lo guarda
template <class Tipo>
void Tipografo<Tipo>::findAllPaths(int s, int d, int maxLength) {
	//marcar todos los vertices como no visitado 
	bool* visited = new bool[MaximoTamano];

	//array para guardar los caminos
	int* path = new int[MaximoTamano];
	int path_index = 0;

	//inicializacion
	for (int i = 0; i < MaximoTamano; i++) {
		visited[i] = false;
	}
	
	findAllPathsUtil(s, d, visited, path, path_index, maxLength);

}

//Recursivamente encuentra cada camino y toma nota de cual ha sido el mas largo
template <class Tipo>
void Tipografo<Tipo>::findAllPathsUtil(int u, int d, bool visited[],
	int path[], int& path_index, int maxLength) {
	// marca el nodo actual como visitado y lo pone en el camino
	visited[u] = true;
	path[path_index] = u;
	path_index++;


	//si el nodo actual es el destino, encontramos un camino
	if (u == d)
	{
		std::string word = "";
		//check if path is a word in dic
		for (int i = 0; i < path_index; i++) {
			word += nodes[path[i]].getData();
		}
		std::for_each(word.begin(), word.end(), [](char& c) {
			c = ::tolower(c);
			});
		for each (std::string w in arrDic){
			std::for_each(w.begin(), w.end(), [](char& c) {
				c = ::tolower(c);
				});
			if (w == word) {
				if (!(std::find(arrWordsInBoard.begin(), arrWordsInBoard.end(), w) != arrWordsInBoard.end())) {
					arrWordsInBoard.push_back(word);
				}
			}
		}
	}
	else // si el nodo actual no es el destino
	{
		// revisar todos los adjacentes para buscar caminos
		for (int c = 0; c < MaximoTamano; c++)
			if (!visited[c] && MatrizDeAdjacencia[u][c] != 0 && path_index < maxLength)
				findAllPathsUtil(c, d, visited, path, path_index, maxLength);
	}

	// quitas el actual del camino y lo marcas como visitado. Esto es para recorrer todos los caminos y no solo el primero que encuentre
	path_index--;
	visited[u] = false;
}

template <class Tipo>
bool Tipografo<Tipo>::wordIsInBoard(std::string word) {

	//1. Check if word has been found already
	//	1.a if Yes, return false because it's a repeat
	//	1.b If No, check if word is in board
	//		1.b.1 

	for each (std::string w in arrWordsFound) {
		if (w == word) {
			return false;
		}
	}

	for each (std::string w in arrWordsInBoard) {
		if (w == word) {
			arrWordsFound.push_back(word);
			return true;
		}
	}
	return false;
}

template <class Tipo>
std::vector<std::string>  Tipografo<Tipo>::sendRemaining() {
	std::vector<std::string> notFound;
	bool found = false;
	int maxWords = arrWordsInBoard.size();
	for each (std::string w in arrWordsInBoard){
		for each (std::string w2 in arrWordsFound) {
			if (w == w2) {
				found = true;
			}
		}
		if (!found) {
			notFound.push_back(w);
		}
		found = false;
	}
	arrWordsInBoard.clear();
	return notFound;
}
