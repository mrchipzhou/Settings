#include <QMainWindow>
#include <QWidget>
#include <QPushButton>
#include <QDebug>

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow();
    ~MainWindow();
private:
    QPushButton * m_button;
    
};
