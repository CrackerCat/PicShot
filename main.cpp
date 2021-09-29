#include <QApplication>
#include <QPushButton>
#include "WinScreen/winfullscreen.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

	WinFullScreen winFullScreen;
	winFullScreen.display();
	winFullScreen.getBasePixmap();
	//winFullScreen.showFullScreen(); //ֻ����������Ч���Ҳ���˫��ȫ��
	winFullScreen.show();

    return QApplication::exec();
}
