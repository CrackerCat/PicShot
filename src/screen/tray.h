//
// Created by xmuli on 2021/10/08.
//

#ifndef TRAY_H
#define TRAY_H

#include <QObject>
#include <QHotkey>
#include "winsetting.h"
#include "screenshot.h"

QT_BEGIN_NAMESPACE
class QSystemTrayIcon;
class QAction;
class QMenu;
QT_END_NAMESPACE


class Tray : public QObject
{
    Q_OBJECT
public:
    explicit Tray(QObject *parent = nullptr);
    virtual ~Tray();

private:
	void init();

public slots:
	void onScreenShot();
	void onShowWinConfig(bool checked);
	
private:
	QAction* m_screenShot;
	QAction* m_showWinConfig;
	QAction* m_quit;
	QMenu* m_menuTary;
	QSystemTrayIcon* m_sysTary;

    WinSetting* m_winMain;
};

#endif // TARY_H
