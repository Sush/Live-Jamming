#include "roomdialog.h"
#include "ui_roomdialog.h"
#include "proxy.h"
#include "roomplayeritem.h"

RoomDialog::RoomDialog(QWidget *parent, Proxy* proxy, const QString& name) :
    QDialog(parent),
    ui(new Ui::RoomDialog)
{
    ui->setupUi(this);
    setObjectName(name);

    connect(proxy, SIGNAL(joined(QString)), this, SLOT(joined(QString)), Qt::QueuedConnection);
    connect(proxy, SIGNAL(leaved(QString)), this, SLOT(leaved(QString)), Qt::QueuedConnection);
    connect(proxy, SIGNAL(messageRecv(QString,QString)), this, SLOT(messageRecv(QString,QString)), Qt::QueuedConnection);
}

RoomDialog::~RoomDialog()
{
    delete ui;
}

void RoomDialog::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void    RoomDialog::joined(QString client)
{
    RoomPlayerItem* item = new RoomPlayerItem(this, client, QString("0"));
    players.insert(client, (UiRoomPlayer){item});
}

void    RoomDialog::leaved(QString client)
{
    delete players.value(client).item;
}

void    RoomDialog::messageRecv(QString client, QString msg)
{
    ui->textEdit->setPlainText(client + ":" + msg + "\n");
}
