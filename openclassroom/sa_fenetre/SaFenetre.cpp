#include <QApplication>
#include <QPushButton>
 
 
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
 
    QWidget fenetre;
    fenetre.setFixedSize(300, 150);
 
    QPushButton bouton("Pimp mon bouton !", &fenetre);
    bouton.setFont(QFont("Comic Sans MS", 14));
    bouton.setCursor(Qt::PointingHandCursor);
    bouton.setIcon(QIcon("smile.png"));
    bouton.setGeometry(60, 50, 180, 70);
 
    // Création d'un autre bouton ayant pour parent le premier bouton
    QPushButton autreBouton("Autre bouton", &bouton);
    autreBouton.move(30, 15);
 
    fenetre.show();
 
    return app.exec();
}
