#ifndef MWHRCONTROLLER_GLOBAL_H
#define MWHRCONTROLLER_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(MWHRCONTROLLER_LIBRARY)
#  define MWHRCONTROLLERSHARED_EXPORT Q_DECL_EXPORT
#else
#  define MWHRCONTROLLERSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // MWHRCONTROLLER_GLOBAL_H
