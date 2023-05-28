#ifndef STUDENTM_H
#define STUDENTM_H

#include <QWidget>
#include <student.h>

QT_BEGIN_NAMESPACE
namespace Ui { class StudentM; }
QT_END_NAMESPACE

class StudentM : public QWidget
{
    Q_OBJECT

public:
    StudentM(QWidget *parent = nullptr);
    ~StudentM();
void DisplayStudent(QList<Student *> arrStu);
private slots:
    void on_pbInsert_clicked();

    void on_pbDelete_clicked();

 //   void on_lstStu_indexesMoved(const QModelIndexList &indexes);

    void on_lstStu_clicked(const QModelIndex &index);

    void on_pbFind_clicked();

    void on_pbUpdate_clicked();

private:
    Ui::StudentM *ui;
};
#endif // STUDENTM_H
