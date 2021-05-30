#include "tknalisfaturasiyoneticisi.h"
#include <Veri/VeriSiniflari/tknalisfatura.h>

TKNAlisFaturasiYoneticisi::TKNAlisFaturasiYoneticisi(QObject *parent) : QObject(parent)
{

}

TKNAlisFaturasiYoneticisi::Ptr TKNAlisFaturasiYoneticisi::kopyaOlustur(TKNAlisFaturasiYoneticisi::Ptr kaynak) const
{
    Ptr kopya=yeni();
    kopya->setId(kaynak->getId());
    kopya->setFaturaNo(kaynak->getFaturaNo());
    kopya->setFaturaTarihi(kaynak->getFaturaTarihi());

    return kopya;
}
