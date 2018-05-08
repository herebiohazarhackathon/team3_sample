#ifndef TEAM3_GLOBAL_H
#define TEAM3_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(TEAM3_LIBRARY)
#  define TEAM3SHARED_EXPORT Q_DECL_EXPORT
#else
#  define TEAM3SHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // TEAM3_GLOBAL_H
