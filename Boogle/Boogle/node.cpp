#include "node.h"
#include <algorithm>


node::node() {
	letter = " ";
}

std::string node::getData() {
	return letter;
}

void node::setData(std::string st) {
	letter = st;
}

