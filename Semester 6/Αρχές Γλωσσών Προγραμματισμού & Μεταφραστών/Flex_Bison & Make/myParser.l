%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "y.tab.h"
%}

%option noyywrap
%option yylineno

/* regular expressions */

digit       [0-9]
property    (["][a-zA-Z .][a-zA-Z0-9 .]*["])
minID       [1]
IDdigit     [2-8]
boolean     [0-1]
boolean1    true|false
integer     "0"|{digit}+
quotation   ["]
identifier  (["][a-zA-Z][a-zA-Z0-9]*["])
whitespace	[ \t\v\n\f] 
float       ({digit}+.{digit}+)
real        ([-]{float}|[-]{integer})


%%

"\"last\""              {return T_LAST;}             
"\"active\""            {return T_ACTIVE;}
"\"content\""           {return T_CONTENT;}

"\"gameId\""            {return T_GAMEID;}
"\"drawId\""            {return T_DRAWID;}
"\"drawTime\""          {return T_DRAWTIME;}
"\"status\""            {return T_STATUS;}
"\"drawBreak\""         {return T_DRAWBREAK;}
"\"visualDraw\""        {return T_VISUALDRAW;}
"\"pricePoints\""       {return T_PRICEPOINTS;}
"\"amount\""            {return T_AMOUNT;}
"\"winningNumbers\""    {return T_WINNINGNUMBERS;}
"\"prizeCategories\""   {return T_PRIZECATEGORIES;}
"\"wagerStatistics\""   {return T_WAGERSTATISTICS;}

"\"list\""              {return T_LIST;}
"\"bonus\""             {return T_BONUS;}

"\"id\""                {return T_ID;}
"\"divident\""          {return T_DIVIDENT;}
"\"winners\""           {return T_WINNERS;}
"\"distributed\""       {return T_DISTRIBUTED;}
"\"jackpot\""           {return T_JACKPOT;}
"\"fixed\""             {return T_FIXED;}
"\"categoryType\""      {return T_CATEGORYTYPE;}
"\"gameType\""          {return T_GAMETYPE;}
"\"minimumDistributed\"" {return T_MINIMUMDISTRIBUTED;}

"\"columns\""           {return T_COLUMNS;}
"\"wagers\""            {return T_WAGERS;}
"\"addOn\""             {return T_ADDON;}


"\"totalPages\""        {return T_TOTALPAGES;}
"\"totalElements\""     {return T_TOTALELEMENTS;}

"\"first\""             {return T_FIRST;}
"\"numberOfElements\""  {return T_NUMBEROFELEMENTS;}
"\"sort\""              {return T_SORT;}
"\"size\""              {return T_SIZE;}
"\"number\""            {return T_NUMBER;}
"\"direction\""         {return T_DIRECTION;}
"\"property\""          {return T_PROPERTY;}
"\"ignoreCase\""        {return T_IGNORECASE;}
"\"nullHandling\""      {return T_NULLHANDLING;}
"\"descending\""        {return T_DESCENDING;}
"\"ascending\""         {return T_ASCENDING;}

"{"                     {return T_LCURLY;}
"}"                     {return T_RCURLY;}
","                     {return T_COMMA;}
":"                     {return T_COLON;}
"["                     {return T_LBRUCKET;}
"]"                     {return T_RBRUCKET;}

[ \t\n\v\b]             ;       /* skip whitespace */

{minID}                 {return T_MINID;}
{IDdigit}               {return T_IDDIGIT;}
{boolean}               {return T_BOOLEAN;}
{boolean1}              {return T_BOOLEAN1;}
{integer}               {return T_INTEGER;}

{quotation}             {return T_Q;}
{identifier}            {
                            yylval.str = strdup(yytext);
                            return T_IDENTIFIER;
                        }

{property}              {
                            yylval.str = strdup(yytext);
                            return T_PROPERTY1;
                        }

{float}                 {return T_FLOAT;}
{real}                  {return T_REAL;}
   
{whitespace}            {/*ignore whitespace*/}
%%
