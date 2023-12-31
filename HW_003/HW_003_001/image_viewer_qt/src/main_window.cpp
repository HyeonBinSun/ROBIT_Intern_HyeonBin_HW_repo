e/**
 * @file /src/main_window.cpp
 *
 * @brief Implementation for the qt gui.
 *
 * @date February 2011
 **/
/*****************************************************************************
** Includes
*****************************************************************************/

#include <QtGui>
#include <QMessageBox>
#include <iostream>
#include "../include/image_viewer_qt/main_window.hpp"

/*****************************************************************************
** Namespaces
*****************************************************************************/

namespace image_viewer_qt
{
  using namespace Qt;

  /*****************************************************************************
  ** Implementation [MainWindow]
  *****************************************************************************/

  MainWindow::MainWindow(int argc, char** argv, QWidget* parent) : QMainWindow(parent), qnode(eeargc, argv)
  {
    ui.setupUi(this);  // Calling this incidentally connects all ui's triggers to on_...() callbacks in this class.

   // setWindowIcon(QIcon(":/images/icon.png"));

    qnode.init();

    QObject::connect(&qnode, SIGNAL(rosShutdown()), this, SLOT(close()));
  }

  MainWindow::~MainWindow()
  {
  }

  void MainWindow::on_WcomboBox_currentindexChanged(int index){
      //QcomboBox box;
      
  }
  void MainWindow::on_HcomboBox_currentindexChanged(int index){
      
      
  }
  /*****************************************************************************
  ** Functions
  *****************************************************************************/

}  // namespace s


