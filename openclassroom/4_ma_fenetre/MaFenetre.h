#ifndef DEF_MAFENETRE
#define DEF_MAFENETRE
 
#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLCDNumber>
#include <QSlider>
#include <QProgressBar>

// Add the custom 'reset()' slot to slider widget
class MonSlider : public QSlider
{
    Q_OBJECT

    public:
    MonSlider (Qt::Orientation orientation, QWidget *parent = Q_NULLPTR) :
      QSlider (orientation, parent)
    {
    }

    public slots:
    void reset ()
    {
      setValue (0);
    }
};

class MaFenetre : public QWidget
{
    public:
    MaFenetre();
 
    private:
    // Use the custom class 'MonSlider'
    MonSlider * m_slider;
    QProgressBar * m_progress;
    QPushButton *m_bouton; 
};
 
#endif
