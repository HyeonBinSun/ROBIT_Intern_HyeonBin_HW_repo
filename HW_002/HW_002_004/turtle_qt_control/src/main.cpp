/**
 * @file /src/main.cpp
 *
 * @brief Qt based gui.
 *
 * @date November 2010
 **/
/*****************************************************************************
** Includes
*****************************************************************************/

#include <QtGui>
#include <QApplication>
#include "../include/turtle_qt_control/main_window.hpp"

/*****************************************************************************
** Main
*****************************************************************************/

int main(int argc, char** argv)
{
  /*********************
  ** Qt
  **********************/
  QApplication app(argc, argv);
  turtle_qt_control::MainWindow w(argc, argv);
  w.show();
  app.connect(&app, SIGNAL(lastWindowClosed()), &app, SLOT(quit()));
  int result = app.exec();

  return result;
}
