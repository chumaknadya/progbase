#ifndef STATUSDIALOG_H
#define STATUSDIALOG_H

#include <QDialog>

namespace Ui {
class StatusDialog;
}

class StatusDialog : public QDialog
{
    Q_OBJECT

public:
    explicit StatusDialog(QWidget *parent = 0);
    ~StatusDialog();
    bool get_Status() const;
    QString get_Time() const;
private:
    Ui::StatusDialog *ui;
};

#endif // STATUSDIALOG_H
