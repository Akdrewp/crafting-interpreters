AC_PREREQ([2.59])
AC_INIT([doublyLinkedList], [0.3], [check-devel AT lists.sourceforge.net])
AM_PROG_AR

# unique source file --- primitive safety check
AC_CONFIG_SRCDIR([src/doublyLinkedList.c])

# fairly severe build strictness
# change foreign to gnu or gnits to comply with gnu standards
AM_INIT_AUTOMAKE([-Wall -Werror foreign 1.11.2])

# Checks for programs.
AC_PROG_CC

LT_INIT

# Checks for libraries.

PKG_CHECK_MODULES([CHECK], [check >= 0.9.6])
AM_PROG_CC_C_O

# Checks for header files.
AC_CHECK_HEADERS([stdlib.h])

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.
AC_FUNC_MALLOC

# Output files
AC_CONFIG_HEADERS([config.h])

AC_CONFIG_FILES([Makefile
                 src/Makefile
                 tests/Makefile])

AC_OUTPUT