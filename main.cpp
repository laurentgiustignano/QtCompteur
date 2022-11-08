#include <QApplication>
#include "Compteur.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    Compteur monCompteur;
    monCompteur.show();

    return QApplication::exec();
}
