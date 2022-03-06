
#include "ncwin.h"
#include "RCDialog.h"
#include "patchmesh_dialog.h"
#include "ui_patchmesh_dialog.h"

PatchMesh_Dialog::PatchMesh_Dialog(HANDLE parent, HANDLE rcparent, int f):
	PatchMesh_Dialog((QWidget *)parent, (Dialog *)rcparent, (Qt::WindowFlags) f)
{}
PatchMesh_Dialog::PatchMesh_Dialog(QWidget *parent,Dialog *rcparent, Qt::WindowFlags f) :
    RCDialog(rcparent,parent,f),
    ui(new Ui::PatchMesh_Dialog)
{
  ui->setupUi(this);

  initDialog(this);

  connect(ui->_1,  SIGNAL(clicked(bool)),  this,  SLOT(on_accept()));
  connect(ui->_2,  SIGNAL(clicked(bool)),  this,  SLOT(reject()));
}

PatchMesh_Dialog::~PatchMesh_Dialog()
{
    delete ui;
}

void PatchMesh_Dialog::on__102_clicked(bool checked)
{
    // using the dialog callback function
    UINT msg;
    WPARAM wParam;
    LPARAM lParam;

    msg = WM_COMMAND;

    // click 102
    wParam = MAKEWPARAM((WORD)102,(WORD)BN_CLICKED);
    lParam = (LPARAM)ui->_102;
    dialogcb((HWND)this,msg,wParam,lParam);
}

void PatchMesh_Dialog::on_accept()
{
    // using the dialog callback function
    UINT msg;
    WPARAM wParam;
    LPARAM lParam;

    msg = WM_COMMAND;

    // click OK
    wParam = MAKEWPARAM((WORD)IDOK,(WORD)0);
    lParam = (LPARAM)ui->_1;
    dialogcb((HWND)this,msg,wParam,lParam);

    QDialog::accept();
}
