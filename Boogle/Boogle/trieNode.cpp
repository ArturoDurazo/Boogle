#include "trieNode.h"
#include <iostream>
#include <fstream>
#include <algorithm>



//Adds the word to the tree, decomposing the word in chars and marks last as leaf
void trieNode::insert(trieNode* root, std::string key)
{
	int n = key.length();
	trieNode* pChild = root;

	for (int i = 0; i < n; i++)
	{
		int index = char_int(key[i]);

		if (pChild->Child[index] == NULL)
			pChild->Child[index] = getNode();

		pChild = pChild->Child[index];
	}

	pChild->leaf = true;
}

//checks if the node exists in boggle and if we havent visited it
bool trieNode::isSafe(int i, int j, bool visited[C][R]) {
	return (i >= 0 && i < C && j >= 0 &&
		j < R && !visited[i][j]);
}

trieNode* trieNode::getNode() {
	trieNode* newNode = new trieNode;
	newNode->leaf = false;
	for (int i = 0; i < sizeAlph; i++)
		newNode->Child[i] = NULL;
	return newNode;
}


void trieNode::searchWord(trieNode* root, char boggle[C][R], int i,
	int j, bool visited[C][R], std::string str, int& totalWords)
{	//        
	// A B G A
	// Z E F K
	// E K S M
	// E B O U
	int found = false;
	// if it found a word, add 1 to the totalwords and add to vector
	if (root->leaf == true) {
		
		for each (std::string word in arrWordsInBoard) {
			if (str == word) {
				found = true;
			}
		}
		if (!found) {
			arrWordsInBoard.push_back(str);
			totalWords++;
		}

	}
		

	//if it hasnt been visited:
	if (!visited[i][j]) {
		// marked as visited
		visited[i][j] = true;

		// traverse all childs of current root 
		for (int K = 0; K < sizeAlph; K++) {
			if (root->Child[K] != NULL) {
				// current character after conversion
				char ch = (char)K + (char)'A';

				//It checks that its in the range of the letter. (8 adjacent nodes)
				if (isSafe(i + 1, j + 1, visited) && boggle[i + 1][j + 1] == ch)
					searchWord(root->Child[K], boggle, i + 1, j + 1, visited, str + ch, totalWords);
				if (isSafe(i, j + 1, visited) && boggle[i][j + 1] == ch)
					searchWord(root->Child[K], boggle, i, j + 1, visited, str + ch, totalWords);
				if (isSafe(i - 1, j + 1, visited) && boggle[i - 1][j + 1] == ch)
					searchWord(root->Child[K], boggle, i - 1, j + 1, visited, str + ch, totalWords);
				if (isSafe(i + 1, j, visited) && boggle[i + 1][j] == ch)
					searchWord(root->Child[K], boggle, i + 1, j, visited, str + ch, totalWords);
				if (isSafe(i + 1, j - 1, visited) && boggle[i + 1][j - 1] == ch)
					searchWord(root->Child[K], boggle, i + 1, j - 1, visited, str + ch, totalWords);
				if (isSafe(i, j - 1, visited) && boggle[i][j - 1] == ch)
					searchWord(root->Child[K], boggle, i, j - 1, visited, str + ch, totalWords);
				if (isSafe(i - 1, j - 1, visited) && boggle[i - 1][j - 1] == ch)
					searchWord(root->Child[K], boggle, i - 1, j - 1, visited, str + ch, totalWords);
				if (isSafe(i - 1, j, visited) && boggle[i - 1][j] == ch)
					searchWord(root->Child[K], boggle, i - 1, j, visited, str + ch, totalWords);
			}
		}
		// make it unvisited so we actually run through this path again
		visited[i][j] = false;
	}
}

int trieNode::findWords(char boggle[C][R], trieNode* root) {
	arrWordsInBoard.clear();
	int totalWords = 0;
	// init all to unvisited 
	bool visited[C][R];
	memset(visited, false, sizeof(visited));

	trieNode* pChild = root;

	std::string str = "";

	// traverse all matrix elements 
	for (int i = 0; i < C; i++) {
		for (int j = 0; j < R; j++) {
			// we start searching for word in dictionary 
			// if we found a character which is child of Trie root 
			// A B G A
			// Z E F K
			// E K S M
			// E B O U
			int p = char_int(boggle[i][j]);
			if (pChild->Child[p]) {
				str = str + boggle[i][j];
				searchWord(pChild->Child[p],
					boggle, i, j, visited, str, totalWords);
				str = "";
			}
		}
	}
	//return the total of words found
	return totalWords;
}

//load the dic in CAPS because the tree is in caps
std::vector<std::string> trieNode::loadDic() {
	std::ifstream File("dictionary4x4.txt");
	std::string Word;
	while (File >> Word)
	{
		if (Word.size() > 2) {
			arrDic.push_back(Word);
		}
	}
	return arrDic;
}

bool trieNode::wordIsInBoard(std::string word) {

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

//sends in a vector the missing words
std::vector<std::string> trieNode::sendRemaining() {
	std::vector<std::string> notFound;
	bool found = false;
	int maxWords = arrWordsInBoard.size();
	for each (std::string w in arrWordsInBoard) {
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