#ifndef TANIMLAR_H
#define TANIMLAR_H

#include <QtCore>
#include <QString>
#include <QDate>
#include <QTime>
#include <QDateTime>

typedef qint64 IdTuru ;
typedef quint32 TamSayi ;

typedef double ReelSayi ;

typedef float ParaBirimi ;

typedef QString Metin ;

typedef QDate Tarih ;
typedef QTime Saat ;
typedef QDateTime TarihSaat ;

typedef enum
{
    PTAnakart=1,
    PTCPU=2,
    PTEkranKart=4,
    PTRam=8,
    PTHDD=16,
    PTKasa=32,
    PTGucKaynak=64,
    PTMonitor=128,
    PTKlavye=256,
    PTFare=512
} ParcaTuru ;
typedef enum
{
    PTEvet=1,
    PTHayir=2,

} ParcaEvetHayir ;

typedef enum
{
    PTVar=1,
    PTYok=2,

} ParcaVarYok ;



typedef QByteArray KareKodResim ;

// Pointer Tanımları

class TKNAlisBilgileri;
class TKNAlisFatura;
class TKNMusteriBilgileri;
class TKNParcaBilgileri;
class TKNSatisBilgileri;
class TKNSatisFaturasi;
class TKNTedarikci;
class TKNUretilenParca;

#include <memory> //burda pointerleri tanımladık

typedef std::shared_ptr<TKNAlisBilgileri> TKNAlisBilgileriPtr;
typedef std::shared_ptr<TKNAlisFatura> TKNAlisFaturaPtr;
typedef std::shared_ptr<TKNMusteriBilgileri> TKNMusteriBilgileriPtr;
typedef std::shared_ptr<TKNParcaBilgileri> TKNParcaBilgileriPtr;
typedef std::shared_ptr<TKNSatisBilgileri> TKNSatisBilgileriPtr;
typedef std::shared_ptr<TKNSatisFaturasi> TKNSatisFaturasiPtr;
typedef std::shared_ptr<TKNTedarikci> TKNTedarikciPtr;
typedef std::shared_ptr<TKNUretilenParca> TKNUretilenParcaPtr;

QDataStream &operator<<(QDataStream &stream, const TKNAlisFaturaPtr &veri);
QDataStream &operator>>(QDataStream &stream, TKNAlisFaturaPtr &veri);

QDataStream &operator<<(QDataStream &stream, const TKNMusteriBilgileriPtr &veri);
QDataStream &operator>>(QDataStream &stream, TKNMusteriBilgileriPtr &veri);

QDataStream &operator<<(QDataStream &a, const TKNParcaBilgileriPtr &b);
QDataStream &operator>>(QDataStream &a, TKNParcaBilgileriPtr &b);

#endif // TANIMLAR_H
