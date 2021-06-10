QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    UI/ListeFormlari/tknanakartliste.cpp \
    UI/ListeFormlari/tknekrankartliste.cpp \
    UI/ListeFormlari/tknfareliste.cpp \
    UI/ListeFormlari/tknguckaynakliste.cpp \
    UI/ListeFormlari/tknharddiskliste.cpp \
    UI/ListeFormlari/tknislemciliste.cpp \
    UI/ListeFormlari/tknkasaliste.cpp \
    UI/ListeFormlari/tknklavyeliste.cpp \
    UI/ListeFormlari/tknmonitorliste.cpp \
    UI/ListeFormlari/tknparcalistesi.cpp \
    UI/ListeFormlari/tknramliste.cpp \
    UI/ListeFormlari/tkntumparcalistesi.cpp \
    UI/VeriFormlari/tknanakartpencere.cpp \
    UI/VeriFormlari/tknekrankartipencere.cpp \
    UI/VeriFormlari/tknfarepencere.cpp \
    UI/VeriFormlari/tknguckaynagipencere.cpp \
    UI/VeriFormlari/tknharddiskpencere.cpp \
    UI/VeriFormlari/tknislemcipencere.cpp \
    UI/VeriFormlari/tknkasapencere.cpp \
    UI/VeriFormlari/tknklavyepencere.cpp \
    UI/VeriFormlari/tknmonitorpencere.cpp \
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
    UI/ListeFormlari/tknanakartliste.h \
    UI/ListeFormlari/tknekrankartliste.h \
    UI/ListeFormlari/tknfareliste.h \
    UI/ListeFormlari/tknguckaynakliste.h \
    UI/ListeFormlari/tknharddiskliste.h \
    UI/ListeFormlari/tknislemciliste.h \
    UI/ListeFormlari/tknkasaliste.h \
    UI/ListeFormlari/tknklavyeliste.h \
    UI/ListeFormlari/tknmonitorliste.h \
    UI/ListeFormlari/tknparcalistesi.h \
    UI/ListeFormlari/tknramliste.h \
    UI/ListeFormlari/tkntumparcalistesi.h \
    UI/VeriFormlari/tknanakartpencere.h \
    UI/VeriFormlari/tknekrankartipencere.h \
    UI/VeriFormlari/tknfarepencere.h \
    UI/VeriFormlari/tknguckaynagipencere.h \
    UI/VeriFormlari/tknharddiskpencere.h \
    UI/VeriFormlari/tknislemcipencere.h \
    UI/VeriFormlari/tknkasapencere.h \
    UI/VeriFormlari/tknklavyepencere.h \
    UI/VeriFormlari/tknmonitorpencere.h \
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
    UI/ListeFormlari/tknanakartliste.ui \
    UI/ListeFormlari/tknekrankartliste.ui \
    UI/ListeFormlari/tknfareliste.ui \
    UI/ListeFormlari/tknguckaynakliste.ui \
    UI/ListeFormlari/tknharddiskliste.ui \
    UI/ListeFormlari/tknislemciliste.ui \
    UI/ListeFormlari/tknkasaliste.ui \
    UI/ListeFormlari/tknklavyeliste.ui \
    UI/ListeFormlari/tknmonitorliste.ui \
    UI/ListeFormlari/tknparcalistesi.ui \
    UI/ListeFormlari/tknramliste.ui \
    UI/ListeFormlari/tkntumparcalistesi.ui \
    UI/VeriFormlari/tknanakartpencere.ui \
    UI/VeriFormlari/tknekrankartipencere.ui \
    UI/VeriFormlari/tknfarepencere.ui \
    UI/VeriFormlari/tknguckaynagipencere.ui \
    UI/VeriFormlari/tknharddiskpencere.ui \
    UI/VeriFormlari/tknislemcipencere.ui \
    UI/VeriFormlari/tknkasapencere.ui \
    UI/VeriFormlari/tknklavyepencere.ui \
    UI/VeriFormlari/tknmonitorpencere.ui \
    UI/VeriFormlari/tknparcatanimlama.ui \
    UI/VeriFormlari/tknrampencere.ui \
    tknanapencere.ui

TRANSLATIONS += \
    TKN_Market_tr_TR.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
