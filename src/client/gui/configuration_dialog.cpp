#include "ui_configuration_dialog.h"
#include "configuration_dialog.h"

ConfigurationDialog::ConfigurationDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ConfigurationDialog)
{
    ui->setupUi(this);
    ui->inputComboBox->addItems(audio.getIDevices());
    ui->outputComboBox->addItems(audio.getODevices());
}

void ConfigurationDialog::on_pushButton_clicked()
{
audio.testAudio();
}
