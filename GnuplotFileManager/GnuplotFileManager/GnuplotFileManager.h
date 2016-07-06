#pragma once

#include <unordered_map>
#include <iostream>

using namespace std;

class CGnuplotFileManager
{
public: enum MODE{
		READONLY,
		WRITE
	};
private:
	static unordered_map<string, iostream> streams;
	CGnuplotFileManager() = default;
	~CGnuplotFileManager() = default;
	CGnuplotFileManager(const CGnuplotFileManager&) = delete;
	CGnuplotFileManager& operator=(const CGnuplotFileManager&) = delete;
	CGnuplotFileManager(CGnuplotFileManager&&) = delete;
	CGnuplotFileManager& operator=(CGnuplotFileManager&&) = delete;
public:
	static CGnuplotFileManager& getInstance();
	void writeData(const string const *fileName, double* data, int size) const;
	void openFile(string fileName,MODE mode) const;
};

