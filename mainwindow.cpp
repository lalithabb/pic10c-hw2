#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//void MainWindow::on_pushButton_2_clicked()
//{
  //  ui->spinBox_hw1->setValue(0);
    //ui->spinBox_hw2->setValue(0);
    //ui->spinBox_hw3->setValue(0);

//}

void MainWindow::on_schemaA_clicked() //grading scheme A
{
    schemaA = true;
    schemaB = false;
}

void MainWindow::on_schemaB_clicked() //grading scheme B
{
    schemaB = true;
    schemaA = false;
}

void MainWindow::on_pic10cbutton_clicked() //Pic10C Grading Scheme
{
    double hw1_score = 0;
    double hw2_score = 0;
    double hw3_score = 0;
    double midterm_score = 0;
    double final_score = 0;
    double finalproject_score = 0;
    double hw_score = 0;
    int num_hw = 3;

    QString hw1 = ui->spinBox_hw1->text();
    QString hw2 = ui->spinBox_hw2->text();
    QString hw3 = ui->spinBox_hw3->text();
    QString midterm = ui->spinBox_midterm1->text();
    QString final_project = ui->spinBox_midterm2->text();
    QString final = ui->spinBox_final->text();

    if(schemaA == true)
    {
        hw1_score = (hw1.toDouble());
        hw2_score = (hw2.toDouble());
        hw3_score = (hw3.toDouble());
        hw_score = ((hw1_score + hw2_score + hw3_score) / num_hw) * 0.15;
        midterm_score = (midterm.toDouble()) * 0.25;
        finalproject_score = (final_project.toDouble()) * 0.35;
        final_score = (final.toDouble()) * 0.30;
    }
    else
    {
        hw1_score = (hw1.toDouble());
        hw2_score = (hw2.toDouble());
        hw3_score = (hw3.toDouble());
        hw_score = ((hw1_score + hw2_score + hw3_score) / num_hw) * 0.15;
        midterm_score = 0;
        finalproject_score = (final_project.toDouble()) * 0.35;
        final_score = (final.toDouble()) * 0.50;
    }

    double total_score = hw_score + midterm_score + finalproject_score + final_score;
    ui->overallscorenumberlabel->setText(QString::number(total_score));
}

void MainWindow::on_pic10bbutton_clicked() //Pic10B Grading Scheme
{
    double hw1_score = 0;
    double hw2_score = 0;
    double hw3_score = 0;
    double hw4_score = 0;
    double hw5_score = 0;
    double hw6_score = 0;
    double hw7_score = 0;
    double hw8_score = 0;
    double midterm1_score = 0;
    double midterm2_score = 0;
    double final_score = 0;
    double hw_score = 0;
    int num_hw = 8;

    QString hw1 = ui->spinBox_hw1->text();
    QString hw2 = ui->spinBox_hw2->text();
    QString hw3 = ui->spinBox_hw3->text();
    QString hw4 = ui->spinBox_hw1->text();
    QString hw5 = ui->spinBox_hw2->text();
    QString hw6 = ui->spinBox_hw3->text();
    QString hw7 = ui->spinBox_hw1->text();
    QString hw8 = ui->spinBox_hw2->text();
    QString midterm1 = ui->spinBox_midterm1->text();
    QString midterm2 = ui->spinBox_midterm2->text();
    QString final = ui->spinBox_final->text();

    if(schemaA == true)
    {
        hw1_score = (hw1.toDouble());
        hw2_score = (hw2.toDouble());
        hw3_score = (hw3.toDouble());
        hw4_score = (hw1.toDouble());
        hw5_score = (hw2.toDouble());
        hw6_score = (hw3.toDouble());
        hw7_score = (hw1.toDouble());
        hw8_score = (hw2.toDouble());
        hw_score = ((hw1_score + hw2_score + hw3_score + hw4_score + hw5_score + hw6_score + hw7_score + hw8_score) / num_hw) * 0.25;
        midterm1_score = (midterm1.toDouble()) * 0.20;
        midterm2_score = (midterm2.toDouble()) * 0.20;
        final_score = (final.toDouble()) * 0.35;
    }
    else
    {
        hw1_score = (hw1.toDouble());
        hw2_score = (hw2.toDouble());
        hw3_score = (hw3.toDouble());
        hw4_score = (hw1.toDouble());
        hw5_score = (hw2.toDouble());
        hw6_score = (hw3.toDouble());
        hw7_score = (hw1.toDouble());
        hw8_score = (hw2.toDouble());
        hw_score = ((hw1_score + hw2_score + hw3_score + hw4_score + hw5_score + hw6_score + hw7_score + hw8_score) / num_hw) * 0.25;
        if(midterm1_score > midterm2_score) //calc highest midterm score
        {
            midterm1_score = (midterm1.toDouble()) * 0.30;
            midterm2_score = 0;
        }
        else
        {
            midterm2_score = (midterm2.toDouble()) * 0.30;
            midterm1_score = 0;
        }
        final_score = (final.toDouble()) * 0.44;
    }
    double total_score = hw_score + midterm1_score + midterm2_score + final_score;
    ui->overallscorenumberlabel->setText(QString::number(total_score));
}
