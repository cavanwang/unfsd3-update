#define PATH 257
#define ID 258
#define OPTVALUE 259
#define WHITE 260
#define IP 261
#define NET 262
#define OLDNET 263
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union {
	char text[NFS_MAXPATHLEN];
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
extern YYSTYPE yylval;
