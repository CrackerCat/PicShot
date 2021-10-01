﻿//
// Created by xmuli on 2021/9/29.
//

#ifndef PICSHOT_WINFULLSCREEN_H
#define PICSHOT_WINFULLSCREEN_H

#include <QWidget>
#include <QList>
#include <QColor>
#include "../rectcalcu.h"

QT_BEGIN_NAMESPACE
class QScreen;
class QPixmap;
QT_END_NAMESPACE

class WinFullScreen : public  QWidget
{
    Q_OBJECT
public:
    explicit WinFullScreen(QWidget *parent = nullptr);
    ~WinFullScreen() override;

	void display();
	double getDevicePixelRatio();
	double getDevicePixelRatio(QScreen *screen);
	double getScale();
	double getScale(QScreen *screen);
	QPixmap* getBasePixmap();

private:
	void getVirtualScreen();
	QPixmap* getblurPixmap(QColor color = QColor(255, 255, 255, 0.2 * 255));
	


protected:
	virtual void paintEvent(QPaintEvent *event) override;
	virtual void keyReleaseEvent(QKeyEvent *event) override;
	virtual void mousePressEvent(QMouseEvent *event) override;
	virtual void mouseMoveEvent(QMouseEvent *event) override;
	virtual void mouseReleaseEvent(QMouseEvent *event) override;

private:
	QList<QScreen *> m_screens;  // 所有屏幕
	QScreen* m_primaryScreen;    // 主屏幕

	QPixmap* m_currPixmap;       // 当前屏幕截图
	QPixmap* m_blurPixmap;       // 遮罩
	QPixmap* m_basePixmap;       // 当前屏幕截图 + 遮罩

	RectCalcu m_rectCalcu;        // 选中矩形区域
	CursorType m_cursorType;     // 光标类型（对应此时鼠标的操作类型）
	CursorArea m_cursorArea;     // 光标所在区域
};


#endif //PICSHOT_WINFULLSCREEN_H
