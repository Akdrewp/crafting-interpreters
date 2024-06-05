## Process this file with automake to produce Makefile.in

TESTS = check_doublyLinkedList
check_PROGRAMS = check_doublyLinkedList
check_doublyLinkedList_SOURCES = check_doublyLinkedList.c $(top_builddir)/src/doublyLinkedList.h
check_doublyLinkedList_CFLAGS = @CHECK_CFLAGS@
check_doublyLinkedList_LDADD = $(top_builddir)/src/libDoublyLinkedList.la @CHECK_LIBS@