#ifndef TKNURETILENPARCA_H
#define TKNURETILENPARCA_H

#include <QObject>
#include <Veri/tanimlar.h>

class TKNUretilenParca : public QObject
{
    Q_OBJECT
public:
    explicit TKNUretilenParca(QObject *parent = nullptr);
    Q_PROPERTY(IdTuru id READ getId WRITE setId NOTIFY idDegisti)
    Q_PROPERTY(KareKodResim kareKodu READ getKareKodu WRITE setKareKodu NOTIFY kareKoduDegisti)
    Q_PROPERTY(Metin seriNumarasi READ getSeriNumarasi WRITE setSeriNumarasi NOTIFY seriNumarasiDegisti)

    IdTuru getId() const;
    KareKodResim getKareKodu() const;
    Metin getSeriNumarasi() const;

signals:
    void idDegisti(const IdTuru &value);
    void kareKoduDegisti(const KareKodResim &value);
    void seriNumarasiDegisti(const Metin &value);
public slots:
    void setSeriNumarasi(const Metin &value);
    void setKareKodu(const KareKodResim &value);
    void setId(const IdTuru &value);

private:
    IdTuru uretilenParcaId;
    KareKodResim kareKodu;
    Metin seriNumarasi;

};

#endif // TKNURETILENPARCA_H
