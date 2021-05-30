#ifndef TKNSATISFATURASI_H
#define TKNSATISFATURASI_H

#include <QObject>
#include <Veri/tanimlar.h>

class TKNSatisFaturasi : public QObject
{
    Q_OBJECT
public:
    explicit TKNSatisFaturasi(QObject *parent = nullptr);
    Q_PROPERTY(IdTuru id READ getId WRITE setId NOTIFY IdDegisti)
    Q_PROPERTY(TarihSaat faturaTarihi READ getFaturaTarihi WRITE setFaturaTarihi NOTIFY FaturaTarihiDegisti)
    Q_PROPERTY(Metin faturaNo READ getFaturaNo WRITE setFaturaNo NOTIFY FaturaNoDegisti)

    IdTuru getId() const;
    TarihSaat getFaturaTarihi() const;
    Metin getFaturaNo() const;

signals:
    void IdDegisti(const IdTuru &value);
    void FaturaTarihiDegisti(const TarihSaat &value);
    void FaturaNoDegisti(const Metin &value);
public slots:
    void setId(const IdTuru &value);
    void setFaturaTarihi(const TarihSaat &value);
    void setFaturaNo(const Metin &value);
private:
    IdTuru satisFaturaId;
    TarihSaat faturaTarihi;
    Metin faturaNo;

};
QDataStream &operator<<(QDataStream &stream, TKNSatisFaturasiPtr &veri);
QDataStream &operator>>(QDataStream &stream, TKNSatisFaturasiPtr &veri);

#endif // TKNSATISFATURASI_H
