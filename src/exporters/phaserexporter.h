#ifndef PHASEREXPORTER_H
#define PHASEREXPORTER_H

#include "../abstractexporter.h"

class PhaserExporter : public AbstractExporter
{
    Q_OBJECT
public:
    explicit PhaserExporter(QObject *parent = 0);

    virtual bool Export(QByteArray& out);
signals:

public slots:

};

#endif // PHASEREXPORTER_H
