#include "tknanapencere.h"

#include <QApplication>
#include <QDataStream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TKNAnaPencere w;
    w.show();
    return a.exec();
}
#include <Veri/tkngenelveriyoneticisi.h>

//void deneme()
//{
//    auto yeniParca=TKNGenelVeriYoneticisi::sec().getParcaBilgisi().yeni();
//    auto yeniMusteri=TKNGenelVeriYoneticisi::sec().getMusteriBilgileri().yeni();
//    auto alisFaturasi=TKNGenelVeriYoneticisi::sec().getAlisFaturalari().yeni();
//
//    TKNGenelVeriYoneticisi::sec().getParcaBilgisi().ekle(yeniParca);
//    TKNGenelVeriYoneticisi::sec().getParcaBilgisi().sil(yeniParca);
//    TKNGenelVeriYoneticisi::sec().getMusteriBilgileri().ekle(yeniMusteri);
//    TKNGenelVeriYoneticisi::sec().getMusteriBilgileri().sil(yeniMusteri);
//    QDataStream dosya;
//    dosya << TKNGenelVeriYoneticisi::sec();
//    dosya >> TKNGenelVeriYoneticisi::sec();
//
//
//}

