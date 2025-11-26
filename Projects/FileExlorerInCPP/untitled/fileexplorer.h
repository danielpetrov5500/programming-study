#ifndef FILEEXPLORER_H
#define FILEEXPLORER_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class FileExplorer;
}
QT_END_NAMESPACE

class FileExplorer : public QMainWindow
{
    Q_OBJECT

public:
    FileExplorer(QWidget *parent = nullptr);
    ~FileExplorer();

private:
    Ui::FileExplorer *ui;
};
#endif // FILEEXPLORER_H
