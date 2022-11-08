//
// Created by Laurent Giustignano on 08/11/2022.
//

#ifndef QTCOMPTEUR_COMPTEUR_H
#define QTCOMPTEUR_COMPTEUR_H

#include <QGridLayout>
#include <QLabel>
#include <QPushButton>
#include <QWidget>

class Compteur : public QWidget
{
    Q_OBJECT
public:
    Compteur(QWidget *parent = nullptr);

private:
    QLabel *affichageCompteur;
    QPushButton *plusUn;
    QGridLayout *laGrille;
    short valeurCompteur;

private slots:
    void etDUn();

};
#endif //QTCOMPTEUR_COMPTEUR_H
