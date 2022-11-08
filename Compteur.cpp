//
// Created by Laurent Giustignano on 08/11/2022.
//

#include "Compteur.h"

Compteur::Compteur(QWidget *parent) : QWidget(parent) {
    valeurCompteur = 0;
    plusUn = new QPushButton("Plus Un", this);
    affichageCompteur = new QLabel("valeur compteur : ", this);
    laGrille = new QGridLayout();
    laGrille->addWidget(plusUn);
    laGrille->addWidget(affichageCompteur);

    this->setLayout(laGrille);
}
