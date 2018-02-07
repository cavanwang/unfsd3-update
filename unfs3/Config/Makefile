CC = gcc
CFLAGS = -g -O2 -Wall -W -I.. -I$(srcdir) -I$(top_srcdir)
AR = ar
RM = rm -f
LEX = flex
YACC = byacc

top_srcdir = ..
srcdir = .

OBJS = lex.yy.o y.tab.o

all: lib.a

lib.a: $(OBJS)
	$(AR) crs lib.a $(OBJS)

y.tab.h y.tab.c: $(srcdir)/exports.y
	$(YACC) -d $(srcdir)/exports.y

y.tab.o: y.tab.c $(srcdir)/exports.h $(top_srcdir)/nfs.h $(top_srcdir)/mount.h $(top_srcdir)/daemon.h

lex.yy.c: $(srcdir)/exports.l
	$(LEX) $(srcdir)/exports.l

lex.yy.o: lex.yy.c y.tab.h $(top_srcdir)/nfs.h

dep:
	:

clean:
	$(RM) $(OBJS) lib.a
	$(RM) lex.yy.c y.tab.h y.tab.c

distclean:
	$(RM) Makefile
