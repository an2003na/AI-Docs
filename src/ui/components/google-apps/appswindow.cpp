#include "appswindow.h"
#include <QDebug>
#include <QMessageBox>
#include <QVBoxLayout>

AppsWindow::AppsWindow(QWidget *parent)
    : QWidget(parent)
{
    setupUI();
}

AppsWindow::~AppsWindow()
{

}

void AppsWindow::setupUI()
{
    mainLayout = new QGridLayout(this);
    setFixedSize(300, 500);

    accountLayout = new QVBoxLayout;
    accountLayout->setSpacing(0);
    accountButton = new QPushButton(this);
    accountButton->setIcon(QIcon("/home/anna/AI-Docs/src/ui/components/icons/account.png"));
    accountButton->setFixedSize(50, 50);
    accountLayout->addWidget(accountButton);
    accountLabel = new QLabel("Account");
    accountLayout->addWidget(accountLabel);
    accountLayout->addStretch(1);
    connect(accountButton, &QPushButton::clicked, this, &AppsWindow::openAccount);

    searchLayout = new QVBoxLayout;
    searchLayout->setSpacing(0);
    searchButton = new QPushButton(this);
    searchButton->setIcon(QIcon("/home/anna/AI-Docs/src/ui/components/icons/search.png"));
    searchButton->setFixedSize(50, 50);
    searchButton->setFixedSize(50, 50);
    searchLayout->addWidget(searchButton);
    searchLabel = new QLabel("Search");
    searchLayout->addWidget(searchLabel);
    searchLayout->addStretch(1);
    connect(searchButton, &QPushButton::clicked, this, &AppsWindow::openSearch);

    mapLayout = new QVBoxLayout;
    mapLayout->setSpacing(0);
    mapButton = new QPushButton(this);
    mapButton->setIcon(QIcon("/home/anna/AI-Docs/src/ui/components/icons/google-maps.png"));
    mapButton->setFixedSize(50, 50);
    mapLayout->addWidget(mapButton);
    mapLabel = new QLabel("Map");
    mapLayout->addWidget(mapLabel);
    mapLayout->addStretch(1);
    connect(mapButton, &QPushButton::clicked, this, &AppsWindow::openMap);

    playLayout = new QVBoxLayout;
    playLayout->setSpacing(0);
    playButton = new QPushButton(this);
    playButton->setIcon(QIcon("/home/anna/AI-Docs/src/ui/components/icons/google-play.png"));
    playButton->setFixedSize(50, 50);
    playLayout->addWidget(playButton);
    playLabel = new QLabel("Play");
    playLayout->addWidget(playLabel);
    playLayout->addStretch(1);
    connect(playButton, &QPushButton::clicked, this, &AppsWindow::openPlay);

    newsLayout = new QVBoxLayout;
    newsLayout->setSpacing(0);
    newsButton = new QPushButton(this);
    newsButton->setIcon(QIcon("/home/anna/AI-Docs/src/ui/components/icons/google.png"));
    newsButton->setFixedSize(50, 50);
    newsLayout->addWidget(newsButton);
    newsLabel = new QLabel("News");
    newsLayout->addWidget(newsLabel);
    newsLayout->addStretch(1);
    connect(newsButton, &QPushButton::clicked, this, &AppsWindow::openNews);

    gmailLayout = new QVBoxLayout;
    gmailLayout->setSpacing(0);
    gmailButton = new QPushButton(this);
    gmailButton->setIcon(QIcon("/home/anna/AI-Docs/src/ui/components/icons/gmail.png"));
    gmailButton->setFixedSize(50, 50);
    gmailLayout->addWidget(gmailButton);
    gmailLabel = new QLabel("Gmail");
    gmailLayout->addWidget(gmailLabel);
    gmailLayout->addStretch(1);
    connect(gmailButton, &QPushButton::clicked, this, &AppsWindow::openGmail);

    meetLayout = new QVBoxLayout;
    meetLayout->setSpacing(0);
    meetButton = new QPushButton(this);
    meetButton->setIcon(QIcon("/home/anna/AI-Docs/src/ui/components/icons/meet.png"));
    meetButton->setFixedSize(50, 50);
    meetLayout->addWidget(meetButton);
    meetLabel = new QLabel("Meet");
    meetLayout->addWidget(meetLabel);
    meetLayout->addStretch(1);
    connect(meetButton, &QPushButton::clicked, this, &AppsWindow::openMeet);

    chatLayout = new QVBoxLayout;
    chatLayout->setSpacing(0);
    chatButton = new QPushButton(this);
    chatButton->setIcon(QIcon("/home/anna/AI-Docs/src/ui/components/icons/google-chat.png"));
    chatButton->setFixedSize(50, 50);
    chatLayout->addWidget(chatButton);
    chatLabel = new QLabel("Chat");
    chatLayout->addWidget(chatLabel);
    chatLayout->addStretch(1);
    connect(chatButton, &QPushButton::clicked, this, &AppsWindow::openChat);

    contactsLayout = new QVBoxLayout;
    contactsLayout->setSpacing(0);
    contactsButton = new QPushButton(this);
    contactsButton->setIcon(QIcon("/home/anna/AI-Docs/src/ui/components/icons/google-contact.png"));
    contactsButton->setFixedSize(50, 50);
    contactsLayout->addWidget(contactsButton);
    contactsLabel = new QLabel("Contacts");
    contactsLayout->addWidget(contactsLabel);
    contactsLayout->addStretch(1);
    connect(contactsButton, &QPushButton::clicked, this, &AppsWindow::openContacts);

    driveLayout = new QVBoxLayout;
    driveLayout->setSpacing(0);
    driveButton = new QPushButton(this);
    driveButton->setIcon(QIcon("/home/anna/AI-Docs/src/ui/components/icons/google-drive.png"));
    driveButton->setFixedSize(50, 50);
    driveLayout->addWidget(driveButton);
    driveLabel = new QLabel("Drive");
    driveLayout->addWidget(driveLabel);
    driveLayout->addStretch(1);
    connect(driveButton, &QPushButton::clicked, this, &AppsWindow::openDrive);

    calendarLayout = new QVBoxLayout;
    calendarLayout->setSpacing(0);
    calendarButton = new QPushButton(this);
    calendarButton->setIcon(QIcon("/home/anna/AI-Docs/src/ui/components/icons/google-calendar.png"));
    calendarButton->setFixedSize(50, 50);
    calendarLayout->addWidget(calendarButton);
    calendarLabel = new QLabel("Calendar");
    calendarLayout->addWidget(calendarLabel);
    calendarLayout->addStretch(1);
    connect(calendarButton, &QPushButton::clicked, this, &AppsWindow::openCalendar);

    translateLayout = new QVBoxLayout;
    translateLayout->setSpacing(0);
    translateButton = new QPushButton(this);
    translateButton->setIcon(QIcon("/home/anna/AI-Docs/src/ui/components/icons/google-translate.png"));
    translateButton->setFixedSize(50, 50);
    translateLayout->addWidget(translateButton);
    translateLabel = new QLabel("Translate");
    translateLayout->addWidget(translateLabel);
    translateLayout->addStretch(1);
    connect(translateButton, &QPushButton::clicked, this, &AppsWindow::openTranslate);

    photoLayout = new QVBoxLayout;
    photoLayout->setSpacing(0);
    photoButton = new QPushButton(this);
    photoButton->setIcon(QIcon("/home/anna/AI-Docs/src/ui/components/icons/google-photo.png"));
    photoButton->setFixedSize(50, 50);
    photoLayout->addWidget(photoButton);
    photoLabel = new QLabel("Photo");
    photoLayout->addWidget(photoLabel);
    photoLayout->addStretch(1);
    connect(photoButton, &QPushButton::clicked, this, &AppsWindow::openPhoto);

    chromeLayout = new QVBoxLayout;
    chromeLayout->setSpacing(0);
    chromeButton = new QPushButton(this);
    chromeButton->setIcon(QIcon("/home/anna/AI-Docs/src/ui/components/icons/chrome.png"));
    chromeButton->setFixedSize(50, 50);
    chromeLayout->addWidget(chromeButton);
    chromeLabel = new QLabel("Chrome");
    chromeLayout->addWidget(chromeLabel);
    chromeLayout->addStretch(1);
    connect(chromeButton, &QPushButton::clicked, this, &AppsWindow::openChrome);

    xButton = new QPushButton(this);
    xButton->setIcon(QIcon("/home/anna/AI-Docs/src/ui/components/icons/x.png"));
    xButton->setFixedSize(20, 20);
    connect(xButton, &QPushButton::clicked, this, &AppsWindow::closeWindow);


    mainLayout->addLayout(accountLayout, 0, 0);
    mainLayout->addLayout(searchLayout, 0, 1);
    mainLayout->addLayout(mapLayout, 0, 2);
    mainLayout->addLayout(playLayout, 1, 0);
    mainLayout->addLayout(newsLayout, 1, 1);
    mainLayout->addLayout(gmailLayout, 1, 2);
    mainLayout->addLayout(meetLayout, 2, 0);
    mainLayout->addLayout(chatLayout, 2, 1);
    mainLayout->addLayout(contactsLayout, 2, 2);
    mainLayout->addLayout(driveLayout, 3, 0);
    mainLayout->addLayout(calendarLayout, 3, 1);
    mainLayout->addLayout(translateLayout, 3, 2);
    mainLayout->addLayout(photoLayout, 4, 0);
    mainLayout->addLayout(chromeLayout, 4, 1);
    mainLayout->addWidget(xButton, 0, 3);


    setLayout(mainLayout);

}

void AppsWindow::closeWindow()
{
    this->close();
}

void AppsWindow::openAccount()
{
    QMessageBox::information(this, "Account", "Opening Account...");
}

void AppsWindow::openSearch()
{
    QMessageBox::information(this, "Search", "Opening Search...");
}

void AppsWindow::openMap()
{
    QMessageBox::information(this, "Map", "Opening Map...");
}

void AppsWindow::openPlay()
{
    QMessageBox::information(this, "Play", "Opening Play...");
}

void AppsWindow::openNews()
{
    QMessageBox::information(this, "News", "Opening News...");
}

void AppsWindow::openGmail()
{
    QMessageBox::information(this, "Gmail", "Opening Gmail...");
}

void AppsWindow::openMeet()
{
    QMessageBox::information(this, "Meet", "Opening Meet...");
}

void AppsWindow::openChat()
{
    QMessageBox::information(this, "Chat", "Opening Chat...");
}

void AppsWindow::openContacts()
{
    QMessageBox::information(this, "Contacts", "Opening Contacts...");
}

void AppsWindow::openDrive()
{
    QMessageBox::information(this, "Drive", "Opening Drive...");
}

void AppsWindow::openCalendar()
{
    QMessageBox::information(this, "Calendar", "Opening Calendar...");
}

void AppsWindow::openTranslate()
{
    QMessageBox::information(this, "Translate", "Opening Translate...");
}

void AppsWindow::openPhoto()
{
    QMessageBox::information(this, "Photo", "Opening Photo...");
}

void AppsWindow::openChrome()
{
    QMessageBox::information(this, "Chrome", "Opening Chrome...");
}

