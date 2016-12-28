AC_PREREQ([2.69])
AC_INIT([latinitas], [0.1], [shilling.jake@gmail.com])

AC_CONFIG_SRCDIR([config.h.in])
AC_CONFIG_HEADERS([include/config.h])

AM_INIT_AUTOMAKE([-Wall -Werror subdir-objects])

PKG_CHECK_MODULES([CHECK], [check >= 0.9.4])

# Checks for programs.
AC_PROG_CC

AM_PROG_AR
LT_INIT
LT_PREREQ([2.4.6])

# Checks for libraries.

# Checks for header files.
AC_CHECK_HEADERS([stdint.h stdlib.h])

# Checks for typedefs, structures, and compiler characteristics.
AC_TYPE_UINT16_T

# Checks for library functions.
AC_FUNC_MALLOC

AC_CONFIG_FILES([Makefile
		 src/Makefile
		 tests/Makefile])
AC_OUTPUT
