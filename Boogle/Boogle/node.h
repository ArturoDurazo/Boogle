#pragma once
#include <iostream>


class node {
private:
	std::string letter;

public:
	node();
	std::string getData();
	void setData(std::string st);
};
