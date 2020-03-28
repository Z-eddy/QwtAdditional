#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(QWTADDITIONAL_LIB)
#  define QWTADDITIONAL_EXPORT Q_DECL_EXPORT
# else
#  define QWTADDITIONAL_EXPORT Q_DECL_IMPORT
# endif
#else
# define QWTADDITIONAL_EXPORT
#endif
