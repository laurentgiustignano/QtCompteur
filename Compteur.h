//
// Created by Laurent Giustignano on 08/11/2022.
//

#ifndef QTCOMPTEUR_COMPTEUR_H
#define QTCOMPTEUR_COMPTEUR_H

#include <QLabel>
#include <QPushButton>
#include <QWidget>

class Compteur : public QWidget
{
public:
    Compteur(QWidget *parent = nullptr);

private:
    QLabel *affichageCompteur;
    QPushButton *plusUn;
    short valeurCompteur;
};

#endif //QTCOMPTEUR_COMPTEUR_H
