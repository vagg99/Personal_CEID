/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

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

#line 193 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
