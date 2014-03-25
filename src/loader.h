#ifndef LOADER_H
#define LOADER_H

#include <QThread>

#include "mesh.h"

class Loader : public QThread
{
    Q_OBJECT
public:
    explicit Loader(QObject* parent, const QString& filename);
    void run();

signals:
    void loaded_file(QString filename);
    void got_mesh(Mesh* m);
    void error_ascii_stl();

private:
    const QString filename;

};

#endif // LOADER_H
