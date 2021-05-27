#ifndef TKNSATISFATURASI_H
#define TKNSATISFATURASI_H

#include <QObject>
#include <Veri/tanimlar.h>

class TKNSatisFaturasi : public QObject
{
    Q_OBJECT
public:
    explicit TKNSatisFaturasi(QObject *parent = nullptr);

    IdTuru getSatisFaturaId() const;

    TarihSaat getFaturaTarihi() const;

    Metin getFaturaNo() const;

signals:
    void SatisFaturaIdDegisti(const IdTuru &value);
    void FaturaTarihiDegisti(const TarihSaat &value);
    void FaturaNoDegisti(const Metin &value);
public slots:
    void setSatisFaturaId(const IdTuru &value);
    void setFaturaTarihi(const TarihSaat &value);
    void setFaturaNo(const Metin &value);
private:
    IdTuru satisFaturaId;
    TarihSaat faturaTarihi;
    Metin faturaNo;

};

#endif // TKNSATISFATURASI_H
