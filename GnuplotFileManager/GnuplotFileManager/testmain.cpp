#include "GnuplotFileManager.h"

CGnuplotFileManager out;

void main() {
	string fileName("C:\\common files\\data\\testOutput.txt");
	if (out.openFile(&fileName, CGnuplotFileManager::NEW)
		== CGnuplotFileManager::FILE::NOTOPEN) {
		printf("ファイルオープン失敗\n");
		getchar();
	}

	double data[] ={ 0, 0, 0 };

	int size = sizeof(data)/sizeof(double);
	double speed = 5.0;

	for (double n = 0; n < 50.0; n += 0.1) {
		for (int t = 0; t <= 100; t++) {
			data[0] = (double)t;
			/****************矩形波*****************/
			if (t >= n*speed && t < (n*speed+10)) {
				data[1] = 1;
			}
			else {
				data[1] = 0;
			}
			/***************************************/
			out.writeData(&fileName, data, size);
		}
		out.nextDataBlock(&fileName);
	}

	return;
}