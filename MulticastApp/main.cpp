#include "MulticastWindow.h"
#include <QtWidgets/QApplication>

int main(int argc, char* argv[])
{
   QApplication a(argc, argv);
   MulticastWindow w;
   w.show();
   return a.exec();
}
