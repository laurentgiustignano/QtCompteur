//
// Created by Laurent Giustignano on 08/11/2022.
//

#include "Compteur.h"

Compteur::Compteur(QWidget *parent) : QWidget(parent) {
    valeurCompteur = 0;
    plusUn = new QPushButton("Plus Un", this);
    remiseAZero = new QPushButton("Remise à zéro", this);
    affichageCompteur = new QLabel("valeur compteur : " + QString::number(valeurCompteur), this);
    laGrille = new QGridLayout();
    laGrille->addWidget(plusUn);
    laGrille->addWidget(affichageCompteur);
    laGrille->addWidget(remiseAZero);

    connect(plusUn, SIGNAL(clicked()), this, SLOT(etDUn()));
    connect(remiseAZero, SIGNAL(clicked()), this, SLOT(raz()));

    this->setLayout(laGrille);
}

void Compteur::etDUn() {
    valeurCompteur++;
    affichageCompteur->setText("valeur compteur : " + QString::number(valeurCompteur));
}

void Compteur::raz() {
    valeurCompteur = 0;
    affichageCompteur->setText("valeur compteur : " + QString::number(valeurCompteur));
}

