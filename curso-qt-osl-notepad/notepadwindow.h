#ifndef NOTEPADWINDOW_H
#define NOTEPADWINDOW_H

#include <QMainWindow>
//Incluimos librerias necesarias
#include <QMenuBar>
#include <QMenu>
#include <QAction>
#include <QPlainTextEdit>
#include <QFileDialog>
#include <QFile>
#include <QFontDialog>
#include <QClipboard>
#include <QKeySequence>
#include <QMessageBox>
#include <QToolBar>

class NotepadWindow : public QMainWindow
{
    Q_OBJECT //utilizar funcionalidades

public:
    NotepadWindow(QWidget *parent = 0);
    ~NotepadWindow();


private slots:
    void alAbrir();
    void alGuardar();
    void alFuente();
    void alSalir();
    void alAbout();


private:
    QMenuBar*       mainMenu_;
    QMenu*          mnuArchivo_;
    QAction*        actArchivoAbrir_;
    QAction*        actArchivoGuardar_;
    QAction*        actArchivoSalir_;
    QMenu*          mnuFormato_;
    QAction*        actFormatoFuente_;
    QMenu*          mnuEditar_;
    QAction*        actEditarCopiar_;
    QAction*        actEditarPegar_;
    QAction*        actEditarCortar_;
    QAction*        actEditarDeshacer_;
    QAction*        actEditarRehacer_;
    QPlainTextEdit* txtEditor_;
    QClipboard *    portapapeles_;
    QMenu*          mnuHelp_;
    QAction*        actHelpAbout_;
    QToolBar*       toolbar_;


};

#endif // NOTEPADWINDOW_H
