#ifndef TKNALISFATURA_H
#define TKNALISFATURA_H

#include <QObject>
#include <Veri/tanimlar.h>

class TKNAlisFatura : public QObject
{
    Q_OBJECT
public:
    explicit TKNAlisFatura(QObject *parent = nullptr);
    Q_PROPERTY(IdTuru AlisFaturaId READ getAlisFaturaId WRITE setAlisFaturaId NOTIFY AlisFaturaIdDegisti)
    Q_PROPERTY(TarihSaat faturaTarihi READ getFaturaTarihi WRITE setFaturaTarihi NOTIFY FaturaTarihiDegisti)
    Q_PROPERTY(Metin faturaNo READ getFaturaNo WRITE setFaturaNo NOTIFY FaturaNoDegisti)

    IdTuru getAlisFaturaId() const;

    TarihSaat getFaturaTarihi() const;

    Metin getFaturaNo() const;

signals:
    void AlisFaturaIdDegisti(const IdTuru &value);
    void FaturaTarihiDegisti(const TarihSaat &value);
    void FaturaNoDegisti(const Metin &value);
public slots:
    void setAlisFaturaId(const IdTuru &value);
    void setFaturaTarihi(const TarihSaat &value);
    void setFaturaNo(const Metin &value);
private:
    IdTuru AlisFaturaId;
    TarihSaat faturaTarihi;
    Metin faturaNo;

};

#endif // TKNALISFATURA_H
