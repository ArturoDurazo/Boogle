#pragma once
#include <iostream>
#include <vector>

//para convertir la letra en su valor int (tabla ascii)
#define char_int(c) ((int)c - (int)'A') 

//26 letras 
const int sizeAlph = 26;
const int C = 4;
const int R = 4;

class trieNode {
public:
	trieNode* Child[sizeAlph];
	bool leaf;
	std::vector<std::string> arrWordsInBoard;
	std::vector<std::string> arrWordsFound;
	std::vector<std::string> arrDic;

	trieNode* getNode();
	std::vector<std::string> loadDic();
	bool wordIsInBoard(std::string word);
	std::vector<std::string> sendRemaining();
	void insert(trieNode* root, std::string key);
	bool isSafe(int i, int j, bool visited[C][R]);
	void searchWord(trieNode* root, char boggle[C][R], int i,
		int j, bool visited[C][R], std::string str, int& totalWords);
	int findWords(char boggle[C][R], trieNode* root);
};
