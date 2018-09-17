#include "netutils.h"

QHostAddress parseHostAddress(const QString &hostAddress)
{
    static const QMap<QString, QHostAddress> specialHostAddresses {
        { QStringLiteral("QHostAddress::Null"), QHostAddress::Null },
        { QStringLiteral("QHostAddress::Broadcast"), QHostAddress::Broadcast },
        { QStringLiteral("QHostAddress::LocalHost"), QHostAddress::LocalHost },
        { QStringLiteral("QHostAddress::LocalHostIPv6"), QHostAddress::LocalHostIPv6 },
        { QStringLiteral("QHostAddress::Any"), QHostAddress::Any },
        { QStringLiteral("QHostAddress::AnyIPv6"), QHostAddress::AnyIPv6 },
        { QStringLiteral("QHostAddress::AnyIPv4"), QHostAddress::AnyIPv4 }
    };

    const auto iter = specialHostAddresses.find(hostAddress);
    if(iter != specialHostAddresses.constEnd())
        return *iter;

    return QHostAddress(hostAddress);
}
