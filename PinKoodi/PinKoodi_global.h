#ifndef PINKOODI_GLOBAL_H
#define PINKOODI_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(PINKOODI_LIBRARY)
#  define PINKOODI_EXPORT Q_DECL_EXPORT
#else
#  define PINKOODI_EXPORT Q_DECL_IMPORT
#endif

#endif // PINKOODI_GLOBAL_H
