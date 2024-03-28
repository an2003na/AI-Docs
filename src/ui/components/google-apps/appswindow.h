#ifndef APPSWINDOW_H
#define APPSWINDOW_H

#include <QWidget>
#include <QPushButton>

#include <QGridLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <QSlider>

class AppsWindow : public QWidget
{
    Q_OBJECT

public:
    explicit AppsWindow(QWidget *parent = nullptr);
    ~AppsWindow();

private:
    void setupUI();

private slots:
    void openAccount();
    void openSearch();
    void openMap();
    void openPlay();
    void openNews();
    void openGmail();
    void openMeet();
    void openChat();
    void openContacts();
    void openDrive();
    void openCalendar();
    void openTranslate();
    void openPhoto();
    void openChrome();

    void closeWindow();

private:

    QVBoxLayout* accountLayout;
    QPushButton* accountButton;
    QLabel* accountLabel;

    QVBoxLayout* searchLayout;
    QPushButton* searchButton;
    QLabel* searchLabel;

    QVBoxLayout* mapLayout;
    QPushButton* mapButton;
    QLabel* mapLabel;

    QVBoxLayout* playLayout;
    QPushButton* playButton;
    QLabel* playLabel;

    QVBoxLayout* newsLayout;
    QPushButton* newsButton;
    QLabel* newsLabel;

    QVBoxLayout* gmailLayout;
    QPushButton* gmailButton;
    QLabel* gmailLabel;

    QVBoxLayout* meetLayout;
    QPushButton* meetButton;
    QLabel* meetLabel;

    QVBoxLayout* chatLayout;
    QPushButton* chatButton;
    QLabel* chatLabel;

    QVBoxLayout* contactsLayout;
    QPushButton* contactsButton;
    QLabel* contactsLabel;

    QVBoxLayout* driveLayout;
    QPushButton* driveButton;
    QLabel* driveLabel;

    QVBoxLayout* calendarLayout;
    QPushButton* calendarButton;
    QLabel* calendarLabel;

    QVBoxLayout* translateLayout;
    QPushButton* translateButton;
    QLabel* translateLabel;

    QVBoxLayout* photoLayout;
    QPushButton* photoButton;
    QLabel* photoLabel;

    QVBoxLayout* chromeLayout;
    QPushButton* chromeButton;
    QLabel* chromeLabel;

    QGridLayout* mainLayout;
    QSlider *slider;

    QPushButton* xButton;

};

#endif // APPSWINDOW_H
