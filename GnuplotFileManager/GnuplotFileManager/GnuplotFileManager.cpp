#include "GnuplotFileManager.h"

CGnuplotFileManager& CGnuplotFileManager::getInstance() {
	static CGnuplotFileManager obj;

	return obj;
}

void CGnuplotFileManager::writeData(const string const *fileName, double* data, int size) const{
	if (streams.find == streams.end()) {
		//ƒL[‚ªİ’è‚³‚ê‚Ä‚¢‚È‚¢
		
	}
}