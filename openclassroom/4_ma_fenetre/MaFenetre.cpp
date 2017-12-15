#include "MaFenetre.h"
 
MaFenetre::MaFenetre() : QWidget()
{
    setFixedSize(200, 120);
 
    m_progress = new QProgressBar (this);
    m_progress->setGeometry (10, 60, 150, 20);
    m_progress->move (20, 10);

    m_slider = new MonSlider (Qt::Horizontal, this);
    m_slider->setGeometry (10, 60, 150, 20);

    m_bouton = new QPushButton ("Reset", this);
    m_bouton->move (30, 80);

    // When the value of the slider changes, the progression bar follows it
    QObject::connect (m_slider, SIGNAL (valueChanged (int)), m_progress, SLOT (setValue (int))) ;

    // When the "Reset" button is pressed, the progression bar and the slider are reseted
    QObject::connect (m_bouton, SIGNAL (clicked ()), m_progress, SLOT(reset())) ;
    QObject::connect (m_bouton, SIGNAL (clicked ()), m_slider, SLOT (reset())) ;
}
