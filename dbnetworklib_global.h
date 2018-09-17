#pragma once

#include <QtGlobal>

#if defined(DBNETWORKLIB_LIBRARY)
#  define DBNETWORKLIB_EXPORT Q_DECL_EXPORT
#else
#  define DBNETWORKLIB_EXPORT Q_DECL_IMPORT
#endif
