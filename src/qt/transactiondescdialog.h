#ifndef TRANSACTIONDWCDIALOG_H
#define TRANSACTIONDWCDIALOG_H

#include <QDialog>

namespace Ui {
    class TransactionDescDialog;
}
QT_BEGIN_NAMESPACE
class QModelIndex;
QT_END_NAMESPACE

/** Dialog showing transaction details. */
class TransactionDescDialog : public QDialog
{
    Q_OBJECT

public:
    explicit TransactionDescDialog(const QModelIndex &idx, QWidget *parent = 0);
    ~TransactionDescDialog();

private slots:
    void on_pushButton1_clicked(bool checked);

private:
    Ui::TransactionDescDialog *ui;
};

#endif // TRANSACTIONDWCDIALOG_H
