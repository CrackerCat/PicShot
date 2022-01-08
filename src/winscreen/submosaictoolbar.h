#ifndef SUBMOSAICTOOLBAR_H
#define SUBMOSAICTOOLBAR_H

#include "subabstoolbar.h"
#include <QObject>

class SubMosaicToolBar : public SubAbsToolBar
{
    Q_OBJECT
public:
    SubMosaicToolBar(QWidget *parent = nullptr);

    virtual void initUI() override;

//    void setMosaic()

	QImage setMosaicSmooth(QPixmap* pixmap, int px);      // ë����������
	static QImage setMosaicPixlelated(QPixmap* pixmap, int px = 20);  // ���ؼ�������

};

#endif // SUBMOSAICTOOLBAR_H
