#ifndef GWRITESTREAMTEST_H
#define GWRITESTREAMTEST_H

#include <QContactManager>
#include <QContact>

QTM_USE_NAMESPACE

class GWriteStreamTest : public QObject
{
    Q_OBJECT

public:

    GWriteStreamTest (QObject* parent = 0);

private slots:

    void testEncodeContact ();

    void testEncodeContacts ();

};

#endif // GWRITESTREAMTEST_H
