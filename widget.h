/**
  * @file widget.h
  * @title Widget
  * @brief Extiende de QWidget, provee la interfaz gráfica que facilita el envio y recibo de información por parte del servidor
  * @version 1.0
  * @author JoseSol
  * @date 02/03/2020
  */

#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTcpSocket>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    /**
     * @brief Constructor de Widget
     * @param parent
     */
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    /**
     * @brief Función que se ejecuta cinado el botón "Enviar" se presiona
     */
    void on_send_clicked();

    /**
     * @brief Función que se ejecuta cinado el botón "Conectar" se presiona
     */
    void on_bind_clicked();

private:
    Ui::Widget *ui;
    QTcpSocket *mSocket;
};

#endif // WIDGET_H
