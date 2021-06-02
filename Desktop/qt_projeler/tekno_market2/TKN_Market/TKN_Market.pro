QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    UI/ListeFormlari/tknparcalistesi.cpp \
    UI/ListeFormlari/tkntumparcalistesi.cpp \
    UI/VeriFormlari/tknanakartpencere.cpp \
    UI/VeriFormlari/tknislemcipencere.cpp \
    UI/VeriFormlari/tknparcatanimlama.cpp \
    UI/VeriFormlari/tknrampencere.cpp \
    Veri/VeriSiniflari/tknalisbilgileri.cpp \
    Veri/VeriSiniflari/tknalisfatura.cpp \
    Veri/VeriSiniflari/tknmusteribilgileri.cpp \
    Veri/VeriSiniflari/tknparcabilgileri.cpp \
    Veri/VeriSiniflari/tknsatisbilgileri.cpp \
    Veri/VeriSiniflari/tknsatisfaturasi.cpp \
    Veri/VeriSiniflari/tkntedarikci.cpp \
    Veri/VeriSiniflari/tknuretilenparca.cpp \
    Veri/VeriYoneticileri/tknalisfaturasiyoneticisi.cpp \
    Veri/VeriYoneticileri/tknmusteribilgileriyoneticisi.cpp \
    Veri/VeriYoneticileri/tknparcabilgisiyoneticisi.cpp \
    Veri/tkngenelveriyoneticisi.cpp \
    main.cpp \
    tknanapencere.cpp

HEADERS += \
    UI/ListeFormlari/tknparcalistesi.h \
    UI/ListeFormlari/tkntumparcalistesi.h \
    UI/VeriFormlari/tknanakartpencere.h \
    UI/VeriFormlari/tknislemcipencere.h \
    UI/VeriFormlari/tknparcatanimlama.h \
    UI/VeriFormlari/tknrampencere.h \
    Veri/VeriSiniflari/tknalisbilgileri.h \
    Veri/VeriSiniflari/tknalisfatura.h \
    Veri/VeriSiniflari/tknmusteribilgileri.h \
    Veri/VeriSiniflari/tknparcabilgileri.h \
    Veri/VeriSiniflari/tknsatisbilgileri.h \
    Veri/VeriSiniflari/tknsatisfaturasi.h \
    Veri/VeriSiniflari/tkntedarikci.h \
    Veri/VeriSiniflari/tknuretilenparca.h \
    Veri/VeriYoneticileri/temel_veri_yoneticisi.h \
    Veri/VeriYoneticileri/tknalisfaturasiyoneticisi.h \
    Veri/VeriYoneticileri/tknmusteribilgileriyoneticisi.h \
    Veri/VeriYoneticileri/tknparcabilgisiyoneticisi.h \
    Veri/tanimlar.h \
    Veri/tkngenelveriyoneticisi.h \
    tknanapencere.h

FORMS += \
    UI/ListeFormlari/tknparcalistesi.ui \
    UI/ListeFormlari/tkntumparcalistesi.ui \
    UI/VeriFormlari/tknanakartpencere.ui \
    UI/VeriFormlari/tknislemcipencere.ui \
    UI/VeriFormlari/tknparcatanimlama.ui \
    UI/VeriFormlari/tknrampencere.ui \
    tknanapencere.ui

TRANSLATIONS += \
    TKN_Market_tr_TR.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
