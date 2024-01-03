/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "myParser.y"


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int yylex();
extern int yyparse();
extern FILE *yyin;
extern FILE *yyout;
extern int yylineno;
extern int yywrap;

int yylex();
void yyerror(const char* s);

#line 88 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    T_Q = 258,                     /* T_Q  */
    T_CONTENT = 259,               /* T_CONTENT  */
    T_CONTENTLOOP = 260,           /* T_CONTENTLOOP  */
    T_LAST = 261,                  /* T_LAST  */
    T_COLON = 262,                 /* T_COLON  */
    T_INTEGER = 263,               /* T_INTEGER  */
    T_IDENTIFIER = 264,            /* T_IDENTIFIER  */
    T_FLOAT = 265,                 /* T_FLOAT  */
    T_GAMEID = 266,                /* T_GAMEID  */
    T_DRAWID = 267,                /* T_DRAWID  */
    T_DRAWTIME = 268,              /* T_DRAWTIME  */
    T_STATUS = 269,                /* T_STATUS  */
    T_DRAWBREAK = 270,             /* T_DRAWBREAK  */
    T_VISUALDRAW = 271,            /* T_VISUALDRAW  */
    T_PRICEPOINTS = 272,           /* T_PRICEPOINTS  */
    T_AMOUNT = 273,                /* T_AMOUNT  */
    T_WINNINGNUMBERS = 274,        /* T_WINNINGNUMBERS  */
    T_PRIZECATEGORIES = 275,       /* T_PRIZECATEGORIES  */
    T_WAGERSTATISTICS = 276,       /* T_WAGERSTATISTICS  */
    T_LIST = 277,                  /* T_LIST  */
    T_BONUS = 278,                 /* T_BONUS  */
    T_ID = 279,                    /* T_ID  */
    T_DIVIDENT = 280,              /* T_DIVIDENT  */
    T_WINNERS = 281,               /* T_WINNERS  */
    T_DISTRIBUTED = 282,           /* T_DISTRIBUTED  */
    T_JACKPOT = 283,               /* T_JACKPOT  */
    T_FIXED = 284,                 /* T_FIXED  */
    T_CATEGORYTYPE = 285,          /* T_CATEGORYTYPE  */
    T_GAMETYPE = 286,              /* T_GAMETYPE  */
    T_MINIMUMDISTRIBUTED = 287,    /* T_MINIMUMDISTRIBUTED  */
    T_COLUMNS = 288,               /* T_COLUMNS  */
    T_WAGERS = 289,                /* T_WAGERS  */
    T_ADDON = 290,                 /* T_ADDON  */
    T_TOTALPAGES = 291,            /* T_TOTALPAGES  */
    T_TOTALELEMENTS = 292,         /* T_TOTALELEMENTS  */
    T_FIRST = 293,                 /* T_FIRST  */
    T_NUMBEROFELEMENTS = 294,      /* T_NUMBEROFELEMENTS  */
    T_SORT = 295,                  /* T_SORT  */
    T_SIZE = 296,                  /* T_SIZE  */
    T_NUMBER = 297,                /* T_NUMBER  */
    T_DIRECTION = 298,             /* T_DIRECTION  */
    T_PROPERTY = 299,              /* T_PROPERTY  */
    T_IGNORECASE = 300,            /* T_IGNORECASE  */
    T_NULLHANDLING = 301,          /* T_NULLHANDLING  */
    T_DESCENDING = 302,            /* T_DESCENDING  */
    T_ASCENDING = 303,             /* T_ASCENDING  */
    T_BOOLEAN1 = 304,              /* T_BOOLEAN1  */
    T_PROPERTY1 = 305,             /* T_PROPERTY1  */
    T_COMMA = 306,                 /* T_COMMA  */
    T_LBRUCKET = 307,              /* T_LBRUCKET  */
    T_RBRUCKET = 308,              /* T_RBRUCKET  */
    T_LCURLY = 309,                /* T_LCURLY  */
    T_RCURLY = 310,                /* T_RCURLY  */
    T_ACTIVE = 311,                /* T_ACTIVE  */
    T_IDDIGIT = 312,               /* T_IDDIGIT  */
    T_BOOLEAN = 313,               /* T_BOOLEAN  */
    T_MINID = 314,                 /* T_MINID  */
    T_DIGIT = 315,                 /* T_DIGIT  */
    T_REAL = 316                   /* T_REAL  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define T_Q 258
#define T_CONTENT 259
#define T_CONTENTLOOP 260
#define T_LAST 261
#define T_COLON 262
#define T_INTEGER 263
#define T_IDENTIFIER 264
#define T_FLOAT 265
#define T_GAMEID 266
#define T_DRAWID 267
#define T_DRAWTIME 268
#define T_STATUS 269
#define T_DRAWBREAK 270
#define T_VISUALDRAW 271
#define T_PRICEPOINTS 272
#define T_AMOUNT 273
#define T_WINNINGNUMBERS 274
#define T_PRIZECATEGORIES 275
#define T_WAGERSTATISTICS 276
#define T_LIST 277
#define T_BONUS 278
#define T_ID 279
#define T_DIVIDENT 280
#define T_WINNERS 281
#define T_DISTRIBUTED 282
#define T_JACKPOT 283
#define T_FIXED 284
#define T_CATEGORYTYPE 285
#define T_GAMETYPE 286
#define T_MINIMUMDISTRIBUTED 287
#define T_COLUMNS 288
#define T_WAGERS 289
#define T_ADDON 290
#define T_TOTALPAGES 291
#define T_TOTALELEMENTS 292
#define T_FIRST 293
#define T_NUMBEROFELEMENTS 294
#define T_SORT 295
#define T_SIZE 296
#define T_NUMBER 297
#define T_DIRECTION 298
#define T_PROPERTY 299
#define T_IGNORECASE 300
#define T_NULLHANDLING 301
#define T_DESCENDING 302
#define T_ASCENDING 303
#define T_BOOLEAN1 304
#define T_PROPERTY1 305
#define T_COMMA 306
#define T_LBRUCKET 307
#define T_RBRUCKET 308
#define T_LCURLY 309
#define T_RCURLY 310
#define T_ACTIVE 311
#define T_IDDIGIT 312
#define T_BOOLEAN 313
#define T_MINID 314
#define T_DIGIT 315
#define T_REAL 316

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 18 "myParser.y"

char* str;

#line 267 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_T_Q = 3,                        /* T_Q  */
  YYSYMBOL_T_CONTENT = 4,                  /* T_CONTENT  */
  YYSYMBOL_T_CONTENTLOOP = 5,              /* T_CONTENTLOOP  */
  YYSYMBOL_T_LAST = 6,                     /* T_LAST  */
  YYSYMBOL_T_COLON = 7,                    /* T_COLON  */
  YYSYMBOL_T_INTEGER = 8,                  /* T_INTEGER  */
  YYSYMBOL_T_IDENTIFIER = 9,               /* T_IDENTIFIER  */
  YYSYMBOL_T_FLOAT = 10,                   /* T_FLOAT  */
  YYSYMBOL_T_GAMEID = 11,                  /* T_GAMEID  */
  YYSYMBOL_T_DRAWID = 12,                  /* T_DRAWID  */
  YYSYMBOL_T_DRAWTIME = 13,                /* T_DRAWTIME  */
  YYSYMBOL_T_STATUS = 14,                  /* T_STATUS  */
  YYSYMBOL_T_DRAWBREAK = 15,               /* T_DRAWBREAK  */
  YYSYMBOL_T_VISUALDRAW = 16,              /* T_VISUALDRAW  */
  YYSYMBOL_T_PRICEPOINTS = 17,             /* T_PRICEPOINTS  */
  YYSYMBOL_T_AMOUNT = 18,                  /* T_AMOUNT  */
  YYSYMBOL_T_WINNINGNUMBERS = 19,          /* T_WINNINGNUMBERS  */
  YYSYMBOL_T_PRIZECATEGORIES = 20,         /* T_PRIZECATEGORIES  */
  YYSYMBOL_T_WAGERSTATISTICS = 21,         /* T_WAGERSTATISTICS  */
  YYSYMBOL_T_LIST = 22,                    /* T_LIST  */
  YYSYMBOL_T_BONUS = 23,                   /* T_BONUS  */
  YYSYMBOL_T_ID = 24,                      /* T_ID  */
  YYSYMBOL_T_DIVIDENT = 25,                /* T_DIVIDENT  */
  YYSYMBOL_T_WINNERS = 26,                 /* T_WINNERS  */
  YYSYMBOL_T_DISTRIBUTED = 27,             /* T_DISTRIBUTED  */
  YYSYMBOL_T_JACKPOT = 28,                 /* T_JACKPOT  */
  YYSYMBOL_T_FIXED = 29,                   /* T_FIXED  */
  YYSYMBOL_T_CATEGORYTYPE = 30,            /* T_CATEGORYTYPE  */
  YYSYMBOL_T_GAMETYPE = 31,                /* T_GAMETYPE  */
  YYSYMBOL_T_MINIMUMDISTRIBUTED = 32,      /* T_MINIMUMDISTRIBUTED  */
  YYSYMBOL_T_COLUMNS = 33,                 /* T_COLUMNS  */
  YYSYMBOL_T_WAGERS = 34,                  /* T_WAGERS  */
  YYSYMBOL_T_ADDON = 35,                   /* T_ADDON  */
  YYSYMBOL_T_TOTALPAGES = 36,              /* T_TOTALPAGES  */
  YYSYMBOL_T_TOTALELEMENTS = 37,           /* T_TOTALELEMENTS  */
  YYSYMBOL_T_FIRST = 38,                   /* T_FIRST  */
  YYSYMBOL_T_NUMBEROFELEMENTS = 39,        /* T_NUMBEROFELEMENTS  */
  YYSYMBOL_T_SORT = 40,                    /* T_SORT  */
  YYSYMBOL_T_SIZE = 41,                    /* T_SIZE  */
  YYSYMBOL_T_NUMBER = 42,                  /* T_NUMBER  */
  YYSYMBOL_T_DIRECTION = 43,               /* T_DIRECTION  */
  YYSYMBOL_T_PROPERTY = 44,                /* T_PROPERTY  */
  YYSYMBOL_T_IGNORECASE = 45,              /* T_IGNORECASE  */
  YYSYMBOL_T_NULLHANDLING = 46,            /* T_NULLHANDLING  */
  YYSYMBOL_T_DESCENDING = 47,              /* T_DESCENDING  */
  YYSYMBOL_T_ASCENDING = 48,               /* T_ASCENDING  */
  YYSYMBOL_T_BOOLEAN1 = 49,                /* T_BOOLEAN1  */
  YYSYMBOL_T_PROPERTY1 = 50,               /* T_PROPERTY1  */
  YYSYMBOL_T_COMMA = 51,                   /* T_COMMA  */
  YYSYMBOL_T_LBRUCKET = 52,                /* T_LBRUCKET  */
  YYSYMBOL_T_RBRUCKET = 53,                /* T_RBRUCKET  */
  YYSYMBOL_T_LCURLY = 54,                  /* T_LCURLY  */
  YYSYMBOL_T_RCURLY = 55,                  /* T_RCURLY  */
  YYSYMBOL_T_ACTIVE = 56,                  /* T_ACTIVE  */
  YYSYMBOL_T_IDDIGIT = 57,                 /* T_IDDIGIT  */
  YYSYMBOL_T_BOOLEAN = 58,                 /* T_BOOLEAN  */
  YYSYMBOL_T_MINID = 59,                   /* T_MINID  */
  YYSYMBOL_T_DIGIT = 60,                   /* T_DIGIT  */
  YYSYMBOL_T_REAL = 61,                    /* T_REAL  */
  YYSYMBOL_YYACCEPT = 62,                  /* $accept  */
  YYSYMBOL_start = 63,                     /* start  */
  YYSYMBOL_last = 64,                      /* last  */
  YYSYMBOL_active = 65,                    /* active  */
  YYSYMBOL_contentLoop = 66,               /* contentLoop  */
  YYSYMBOL_content = 67,                   /* content  */
  YYSYMBOL_integer = 68,                   /* integer  */
  YYSYMBOL_boolean = 69,                   /* boolean  */
  YYSYMBOL_gameId = 70,                    /* gameId  */
  YYSYMBOL_drawId = 71,                    /* drawId  */
  YYSYMBOL_drawTime = 72,                  /* drawTime  */
  YYSYMBOL_status = 73,                    /* status  */
  YYSYMBOL_drawBreak = 74,                 /* drawBreak  */
  YYSYMBOL_visualDraw = 75,                /* visualDraw  */
  YYSYMBOL_pricePoints = 76,               /* pricePoints  */
  YYSYMBOL_winningNumbers = 77,            /* winningNumbers  */
  YYSYMBOL_bonus = 78,                     /* bonus  */
  YYSYMBOL_prizeCategories = 79,           /* prizeCategories  */
  YYSYMBOL_minPrizeCategories = 80,        /* minPrizeCategories  */
  YYSYMBOL_defaultPrizeCategories = 81,    /* defaultPrizeCategories  */
  YYSYMBOL_id = 82,                        /* id  */
  YYSYMBOL_minID = 83,                     /* minID  */
  YYSYMBOL_minGameType = 84,               /* minGameType  */
  YYSYMBOL_divident = 85,                  /* divident  */
  YYSYMBOL_winners = 86,                   /* winners  */
  YYSYMBOL_distributed = 87,               /* distributed  */
  YYSYMBOL_jackpot = 88,                   /* jackpot  */
  YYSYMBOL_fixed = 89,                     /* fixed  */
  YYSYMBOL_categoryType = 90,              /* categoryType  */
  YYSYMBOL_gameType = 91,                  /* gameType  */
  YYSYMBOL_minimumDistributed = 92,        /* minimumDistributed  */
  YYSYMBOL_wagerStatistics = 93,           /* wagerStatistics  */
  YYSYMBOL_columns = 94,                   /* columns  */
  YYSYMBOL_wagers = 95,                    /* wagers  */
  YYSYMBOL_addOn = 96,                     /* addOn  */
  YYSYMBOL_emptyJson = 97,                 /* emptyJson  */
  YYSYMBOL_list = 98,                      /* list  */
  YYSYMBOL_arrayOfList = 99,               /* arrayOfList  */
  YYSYMBOL_jsonElement = 100,              /* jsonElement  */
  YYSYMBOL_totalPages = 101,               /* totalPages  */
  YYSYMBOL_totalElements = 102,            /* totalElements  */
  YYSYMBOL_lastBoolean = 103,              /* lastBoolean  */
  YYSYMBOL_numberOfElements = 104,         /* numberOfElements  */
  YYSYMBOL_number = 105,                   /* number  */
  YYSYMBOL_size = 106,                     /* size  */
  YYSYMBOL_first = 107,                    /* first  */
  YYSYMBOL_sort = 108,                     /* sort  */
  YYSYMBOL_direction = 109,                /* direction  */
  YYSYMBOL_property = 110,                 /* property  */
  YYSYMBOL_ignoreCase = 111,               /* ignoreCase  */
  YYSYMBOL_nullHandling = 112,             /* nullHandling  */
  YYSYMBOL_descending = 113,               /* descending  */
  YYSYMBOL_ascending = 114                 /* ascending  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   387

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  53
/* YYNRULES -- Number of rules.  */
#define YYNRULES  69
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  313

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   316


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    90,    90,    91,    96,   101,   105,   108,   114,   120,
     121,   122,   123,   129,   130,   135,   140,   144,   148,   149,
     153,   157,   161,   165,   169,   174,   187,   193,   199,   205,
     211,   216,   220,   224,   228,   232,   236,   240,   244,   248,
     252,   256,   260,   261,   265,   269,   273,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   294,   297,   301,   305,
     310,   313,   316,   320,   326,   329,   332,   335,   338,   341
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "T_Q", "T_CONTENT",
  "T_CONTENTLOOP", "T_LAST", "T_COLON", "T_INTEGER", "T_IDENTIFIER",
  "T_FLOAT", "T_GAMEID", "T_DRAWID", "T_DRAWTIME", "T_STATUS",
  "T_DRAWBREAK", "T_VISUALDRAW", "T_PRICEPOINTS", "T_AMOUNT",
  "T_WINNINGNUMBERS", "T_PRIZECATEGORIES", "T_WAGERSTATISTICS", "T_LIST",
  "T_BONUS", "T_ID", "T_DIVIDENT", "T_WINNERS", "T_DISTRIBUTED",
  "T_JACKPOT", "T_FIXED", "T_CATEGORYTYPE", "T_GAMETYPE",
  "T_MINIMUMDISTRIBUTED", "T_COLUMNS", "T_WAGERS", "T_ADDON",
  "T_TOTALPAGES", "T_TOTALELEMENTS", "T_FIRST", "T_NUMBEROFELEMENTS",
  "T_SORT", "T_SIZE", "T_NUMBER", "T_DIRECTION", "T_PROPERTY",
  "T_IGNORECASE", "T_NULLHANDLING", "T_DESCENDING", "T_ASCENDING",
  "T_BOOLEAN1", "T_PROPERTY1", "T_COMMA", "T_LBRUCKET", "T_RBRUCKET",
  "T_LCURLY", "T_RCURLY", "T_ACTIVE", "T_IDDIGIT", "T_BOOLEAN", "T_MINID",
  "T_DIGIT", "T_REAL", "$accept", "start", "last", "active", "contentLoop",
  "content", "integer", "boolean", "gameId", "drawId", "drawTime",
  "status", "drawBreak", "visualDraw", "pricePoints", "winningNumbers",
  "bonus", "prizeCategories", "minPrizeCategories",
  "defaultPrizeCategories", "id", "minID", "minGameType", "divident",
  "winners", "distributed", "jackpot", "fixed", "categoryType", "gameType",
  "minimumDistributed", "wagerStatistics", "columns", "wagers", "addOn",
  "emptyJson", "list", "arrayOfList", "jsonElement", "totalPages",
  "totalElements", "lastBoolean", "numberOfElements", "number", "size",
  "first", "sort", "direction", "property", "ignoreCase", "nullHandling",
  "descending", "ascending", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-241)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -48,    26,    23,    24,    28,   -13,   -11,  -241,    -7,    -8,
      40,    -5,  -241,     9,    37,    10,  -241,    37,    -4,    47,
      53,    37,    53,    15,    -6,    60,    55,    53,    55,    33,
    -241,  -241,  -241,  -241,    19,    -6,    65,    59,    55,    59,
      67,    38,  -241,    25,    -6,    70,    63,    59,    63,    -6,
      72,    74,  -241,    30,     5,    75,    68,    63,    68,    32,
      -6,    78,    48,  -241,    35,    39,    -6,    81,    76,    68,
      76,  -241,    41,    42,    82,    54,  -241,  -241,    44,    -6,
      89,    80,    76,    80,  -241,    46,    -6,    93,    64,  -241,
      50,    49,    98,    86,    86,    86,  -241,    56,    57,   101,
      69,  -241,    94,    61,   104,    95,    95,    95,  -241,    66,
      73,   107,    77,   110,    96,    71,   114,    79,    83,    84,
      85,    90,    -6,   117,  -241,   115,   119,   108,    88,    91,
      92,  -241,    97,   123,   100,  -241,    99,    -6,   102,   103,
     125,   105,   111,   109,   116,  -241,     9,   127,   130,   106,
    -241,  -241,   113,    -6,   118,   120,   133,   122,   128,   121,
     146,   124,  -241,   126,   129,   149,   132,  -241,   131,   112,
      -6,  -241,   134,   152,   135,   159,   122,   109,    -6,   160,
     139,  -241,   136,   140,   161,   137,    -6,   141,   138,   143,
     165,   162,   153,   142,   135,   144,   145,    -6,   169,   147,
    -241,   154,   172,   176,   150,   155,  -241,  -241,  -241,   156,
      -6,   178,   175,   157,   153,   109,  -241,   158,   148,  -241,
    -241,   163,   164,   181,   166,    -6,  -241,   167,   180,   190,
     182,  -241,   175,   168,  -241,    -1,  -241,   171,   174,   151,
     173,  -241,   177,   200,   205,   185,   182,   109,   179,   184,
    -241,   186,   187,   183,   188,  -241,  -241,   189,    -6,  -241,
     191,   206,   210,   194,   185,   192,    -1,    -1,    -1,    -1,
    -241,  -241,  -241,   193,  -241,   195,   -25,   213,   197,   196,
     109,  -241,  -241,  -241,  -241,    -6,  -241,  -241,  -241,   198,
     217,   224,   199,   225,   201,   202,  -241,  -241,   204,   223,
     207,   230,  -241,   109,  -241,  -241,  -241,  -241,   208,   109,
     209,   212,  -241
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     1,     0,     0,
       0,     0,     3,     0,     0,     0,     2,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       9,    11,    12,    10,     0,     0,     0,     0,     0,     0,
       0,     0,    15,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    16,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    17,     0,     0,     0,     0,     0,     0,
       0,    56,     0,     0,     0,     0,    18,    19,     0,     0,
       0,     0,     0,     0,    57,     0,     0,     0,     0,    20,
       0,     0,     0,     0,     0,     0,    58,     0,     0,     0,
       0,    21,     0,     0,     0,     0,     0,     0,    59,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     8,     0,     0,     0,     0,     0,
       0,     5,     7,     0,     0,    62,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     4,     0,     0,     0,     0,
      61,    60,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     6,     0,     0,     0,     0,    22,     0,     0,
       0,    23,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    64,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      65,     0,     0,     0,     0,     0,    45,    24,    29,     0,
       0,     0,     0,     0,     0,     0,    40,     0,     0,    39,
      66,     0,     0,     0,     0,     0,    31,     0,     0,     0,
       0,    28,     0,     0,    41,    44,    67,     0,     0,     0,
       0,    32,     0,     0,     0,     0,     0,     0,    51,    53,
      55,    54,    52,     0,     0,    68,    69,     0,     0,    33,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      43,    42,    63,     0,    34,     0,     0,     0,     0,     0,
       0,    47,    49,    50,    48,     0,    35,    14,    13,     0,
       0,     0,     0,     0,     0,     0,    46,    36,     0,     0,
       0,     0,    27,     0,    30,    38,    26,    37,     0,     0,
       0,     0,    25
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -241,  -241,  -241,  -241,   170,  -241,   -24,  -241,     0,    -3,
     -16,   -29,   -44,   -53,   -67,   203,  -241,   -57,  -241,  -176,
    -241,  -241,  -241,   211,    51,    34,    18,     1,   -12,  -241,
    -241,   -66,  -241,  -241,  -241,  -241,  -241,  -241,  -240,  -241,
    -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,
    -241,  -241,  -241
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     5,    11,    18,     6,   252,   289,    20,    26,
      37,    46,    56,    68,    81,    93,   141,   105,   143,   159,
     176,   157,   278,   174,   192,   212,   230,   245,   263,   294,
     292,   117,   161,   180,   199,   253,   127,   169,   254,    41,
      51,    62,    75,   124,   112,   100,    88,   134,   149,   166,
     185,   204,   224
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      34,   195,    30,    83,    58,    70,     1,    30,   248,   249,
      48,    43,    39,    69,    64,    94,    82,    22,    57,    28,
      53,    27,    47,     7,    38,    59,   281,   282,   283,   284,
       3,     8,     4,   287,   288,     9,    72,   106,   107,   233,
     118,   119,    78,    10,    12,    13,    14,    15,    19,    23,
      16,    31,    32,    33,    24,    90,    31,    32,    33,   250,
     251,    65,    97,    17,    21,    25,    29,    35,    36,    40,
      42,   265,    44,    45,    49,    50,    52,    54,    55,    60,
      61,    63,    66,    71,    67,    73,    76,    74,    79,    86,
      77,    85,    84,    80,    87,    89,    91,    96,   136,    92,
      98,   101,    99,   102,   295,   103,   104,   108,   110,   109,
     111,   115,   113,   151,   122,   114,   116,   125,   126,   123,
     120,   129,   121,   128,   137,   138,   139,   308,   133,   168,
     147,   140,   154,   310,   130,   156,   163,   164,   131,   132,
     172,   135,   142,   145,   148,   144,   188,   173,   146,   160,
     150,   165,   175,   178,   196,   153,   183,   152,   179,   190,
     155,   191,   205,   158,   167,   187,   193,   197,   202,   210,
     170,   171,   177,   217,   198,   209,   218,   181,   184,   182,
     211,   221,   186,   222,   203,   228,   227,   200,   238,   201,
     242,   207,   206,   189,   208,   215,   216,   243,   223,   213,
     235,   240,   219,   229,   257,   220,   225,   226,   231,   234,
     260,   244,   261,   237,   236,   262,   275,   276,   241,   247,
     290,   239,   255,   256,   258,   277,   298,   293,   259,   291,
     266,   299,   301,   305,   273,   267,   270,   268,   269,   307,
     272,   271,   274,   280,   285,   214,   286,   264,   232,   297,
     246,     0,   279,   303,   300,   304,   302,     0,   306,   309,
       0,   296,   311,   312,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    95,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   162,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   194
};

static const yytype_int16 yycheck[] =
{
      24,   177,     8,    70,    48,    58,    54,     8,     9,    10,
      39,    35,    28,    57,     9,    82,    69,    17,    47,    22,
      44,    21,    38,     0,    27,    49,   266,   267,   268,   269,
       4,     7,     6,    58,    59,     7,    60,    94,    95,   215,
     106,   107,    66,    56,    55,    52,    54,     7,    11,    53,
      55,    57,    58,    59,     7,    79,    57,    58,    59,    60,
      61,    56,    86,    54,    54,    12,    51,     7,    13,    36,
      51,   247,     7,    14,     7,    37,    51,     7,    15,     7,
       6,    51,     7,    51,    16,     7,    51,    39,     7,     7,
      51,    49,    51,    17,    40,    51,     7,    51,   122,    19,
       7,    51,    38,    54,   280,     7,    20,    51,     7,    52,
      41,     7,    18,   137,     7,    54,    21,     7,    22,    42,
      54,     7,    49,    52,     7,    10,     7,   303,    43,   153,
       7,    23,     7,   309,    55,    24,     9,     7,    55,    55,
       7,    51,    54,    51,    44,    54,   170,    25,    51,    33,
      51,    45,    24,     7,   178,    52,     7,    55,    34,     7,
      55,    26,   186,    54,    51,    53,     7,     7,     7,     7,
      52,    51,    51,   197,    35,    10,     7,    51,    46,    50,
      27,     9,    51,     7,    47,     7,   210,    51,     7,    49,
      10,    53,    51,    59,    51,    51,    51,     7,    48,    57,
      52,   225,    55,    28,    53,    51,    51,    51,    51,    51,
      10,    29,     7,    49,    51,    30,    10,     7,    51,    51,
       7,    55,    51,    49,    51,    31,     9,    31,    51,    32,
      51,     7,     7,    10,   258,    51,    53,    51,    51,     9,
      51,    53,    51,    51,    51,   194,    51,   246,   214,    51,
     232,    -1,   264,    51,    55,    51,    55,    -1,    51,    51,
      -1,   285,    53,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   146,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   176
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    54,    63,     4,     6,    64,    67,     0,     7,     7,
      56,    65,    55,    52,    54,     7,    55,    54,    66,    11,
      70,    54,    70,    53,     7,    12,    71,    70,    71,    51,
       8,    57,    58,    59,    68,     7,    13,    72,    71,    72,
      36,   101,    51,    68,     7,    14,    73,    72,    73,     7,
      37,   102,    51,    68,     7,    15,    74,    73,    74,    68,
       7,     6,   103,    51,     9,    56,     7,    16,    75,    74,
      75,    51,    68,     7,    39,   104,    51,    51,    68,     7,
      17,    76,    75,    76,    51,    49,     7,    40,   108,    51,
      68,     7,    19,    77,    76,    77,    51,    68,     7,    38,
     107,    51,    54,     7,    20,    79,    79,    79,    51,    52,
       7,    41,   106,    18,    54,     7,    21,    93,    93,    93,
      54,    49,     7,    42,   105,     7,    22,    98,    52,     7,
      55,    55,    55,    43,   109,    51,    68,     7,    10,     7,
      23,    78,    54,    80,    54,    51,    51,     7,    44,   110,
      51,    68,    55,    52,     7,    55,    24,    83,    54,    81,
      33,    94,    66,     9,     7,    45,   111,    51,    68,    99,
      52,    51,     7,    25,    85,    24,    82,    51,     7,    34,
      95,    51,    50,     7,    46,   112,    51,    53,    68,    59,
       7,    26,    86,     7,    85,    81,    68,     7,    35,    96,
      51,    49,     7,    47,   113,    68,    51,    53,    51,    10,
       7,    27,    87,    57,    86,    51,    51,    68,     7,    55,
      51,     9,     7,    48,   114,    51,    51,    68,     7,    28,
      88,    51,    87,    81,    51,    52,    51,    49,     7,    55,
      68,    51,    10,     7,    29,    89,    88,    51,     9,    10,
      60,    61,    68,    97,   100,    51,    49,    53,    51,    51,
      10,     7,    30,    90,    89,    81,    51,    51,    51,    51,
      53,    53,    51,    68,    51,    10,     7,    31,    84,    90,
      51,   100,   100,   100,   100,    51,    51,    58,    59,    69,
       7,    32,    92,    31,    91,    81,    68,    51,     9,     7,
      55,     7,    55,    51,    51,    10,    51,     9,    81,    51,
      81,    53,    51
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    62,    63,    63,    64,    65,    66,    66,    67,    68,
      68,    68,    68,    69,    69,    70,    71,    72,    73,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    96,    97,    98,    99,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     3,    15,    13,    14,    12,    14,     1,
       1,     1,     1,     1,     1,     4,     4,     4,     4,     4,
       4,     4,     8,     7,     5,    19,    12,    10,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     3,     3,     7,
       4,     4,     5,     5,     0,     6,     9,     3,     3,     3,
       3,     1,     1,     1,     1,     1,     4,     4,     4,     4,
       3,     4,     4,    13,     4,     4,     4,     4,     4,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* start: T_LCURLY last active T_RCURLY  */
#line 90 "myParser.y"
                                  {printf("\t~~~\t\t\nParsed successfully!\n\t~~~");}
#line 1571 "y.tab.c"
    break;

  case 3: /* start: T_LCURLY content T_RCURLY  */
#line 91 "myParser.y"
                                  {printf("\t~~~\t\t\nParsed successfully!\n\t~~~");}
#line 1577 "y.tab.c"
    break;


#line 1581 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 344 "myParser.y"


// Find the faulty line
void yyerror(const char* s)
  {
	fprintf(stderr, "\t!!!\nParser error in line %d.\n\t!!!", yylineno);
	exit(1);
  }


// Main function
int main (int argc, char **argv)  {

  yyin = fopen(argv[1], "r"); // read permission
  yyparse ();

  return 0;
}
