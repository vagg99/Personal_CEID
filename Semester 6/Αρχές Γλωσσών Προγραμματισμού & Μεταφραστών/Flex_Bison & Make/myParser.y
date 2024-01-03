%{

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
%}

%union {
char* str;
}

%token T_Q
%token T_CONTENT
%token T_CONTENTLOOP
%token T_LAST
%token T_COLON
%token T_INTEGER
%token T_IDENTIFIER
%token T_FLOAT
%token T_GAMEID
%token T_DRAWID
%token T_DRAWTIME
%token T_STATUS
%token T_DRAWBREAK
%token T_VISUALDRAW
%token T_PRICEPOINTS
%token T_AMOUNT
%token T_WINNINGNUMBERS
%token T_PRIZECATEGORIES
%token T_WAGERSTATISTICS
%token T_LIST
%token T_BONUS
%token T_ID
%token T_DIVIDENT
%token T_WINNERS
%token T_DISTRIBUTED
%token T_JACKPOT
%token T_FIXED
%token T_CATEGORYTYPE
%token T_GAMETYPE
%token T_MINIMUMDISTRIBUTED
%token T_COLUMNS
%token T_WAGERS
%token T_ADDON


%token T_TOTALPAGES
%token T_TOTALELEMENTS
%token T_FIRST
%token T_NUMBEROFELEMENTS
%token T_SORT
%token T_SIZE
%token T_NUMBER
%token T_DIRECTION
%token T_PROPERTY
%token T_IGNORECASE
%token T_NULLHANDLING
%token T_DESCENDING
%token T_ASCENDING
%token T_BOOLEAN1
%token T_PROPERTY1

%token T_COMMA
%token T_LBRUCKET
%token T_RBRUCKET
%token T_LCURLY
%token T_RCURLY
%token T_ACTIVE
%token T_IDDIGIT
%token T_BOOLEAN
%token T_MINID
%token T_DIGIT
%token T_REAL


%%

// JSON initialization
start:
  T_LCURLY last active T_RCURLY   {printf("\t~~~\t\t\nParsed successfully!\n\t~~~");} 
  | T_LCURLY content  T_RCURLY    {printf("\t~~~\t\t\nParsed successfully!\n\t~~~");} 
  ;

// main tokens
last:
  T_LAST T_COLON T_LCURLY gameId drawId drawTime status drawBreak
   visualDraw pricePoints winningNumbers prizeCategories wagerStatistics 
   T_RCURLY T_COMMA
  ;
active:
  T_ACTIVE T_COLON T_LCURLY gameId drawId drawTime status
   drawBreak visualDraw pricePoints prizeCategories wagerStatistics T_RCURLY
  ;
contentLoop:
  T_LCURLY gameId drawId drawTime status drawBreak
  visualDraw pricePoints winningNumbers prizeCategories
  wagerStatistics T_RCURLY T_COMMA contentLoop
  | T_LCURLY gameId drawId drawTime status drawBreak
  visualDraw pricePoints winningNumbers prizeCategories
  wagerStatistics T_RCURLY 
  ;

content:
  T_CONTENT T_COLON  T_LBRUCKET contentLoop T_RBRUCKET T_COMMA  totalPages  
  totalElements lastBoolean numberOfElements sort first size number
  ;

// separately declared Integer function
integer:
  T_INTEGER
  | T_MINID
  | T_IDDIGIT
  | T_BOOLEAN
  ;


// separately declared boolean function 
boolean:
  T_MINID
  | T_BOOLEAN
  ;
  
// nested Declarations
gameId:
  T_GAMEID T_COLON integer T_COMMA 
  ;


drawId:
  T_DRAWID T_COLON integer T_COMMA
  ;

drawTime:
  T_DRAWTIME T_COLON integer T_COMMA
  ;

status:
  T_STATUS T_COLON T_IDENTIFIER T_COMMA 
  | T_STATUS T_COLON T_ACTIVE T_COMMA 
  ;

drawBreak:
  T_DRAWBREAK T_COLON integer T_COMMA
  ;

visualDraw:
  T_VISUALDRAW T_COLON integer T_COMMA
  ;

pricePoints:
  T_PRICEPOINTS T_COLON T_LCURLY T_AMOUNT T_COLON T_FLOAT T_RCURLY T_COMMA
  ;

winningNumbers:
  T_WINNINGNUMBERS T_COLON T_LCURLY list bonus T_RCURLY T_COMMA
  ;

bonus:
  T_BONUS T_COLON T_LBRUCKET integer T_RBRUCKET
  ;

// precisely 1 minimum + 7 default
prizeCategories:
  T_PRIZECATEGORIES T_COLON T_LBRUCKET minPrizeCategories
  defaultPrizeCategories T_COMMA
  defaultPrizeCategories T_COMMA
  defaultPrizeCategories T_COMMA
  defaultPrizeCategories T_COMMA
  defaultPrizeCategories T_COMMA
  defaultPrizeCategories T_COMMA
  defaultPrizeCategories 
  T_RBRUCKET T_COMMA
  ;

// id = 1 strictly
minPrizeCategories: 
  T_LCURLY minID divident winners distributed jackpot fixed
  categoryType minGameType minimumDistributed T_RCURLY T_COMMA
  ;

// id 2-8
defaultPrizeCategories: 
  T_LCURLY id divident winners distributed jackpot fixed
  categoryType gameType T_RCURLY
  ;


id:
  T_ID T_COLON T_IDDIGIT T_COMMA
  ;

// Special case for id = 1 
// minimumDistributed is also included
minID:  
  T_ID T_COLON T_MINID T_COMMA
  ;

// Special case for id = 1
// minimumDistributed is also included 
minGameType:
  T_GAMETYPE T_COLON T_IDENTIFIER T_COMMA
  ;


divident:
  T_DIVIDENT T_COLON T_FLOAT T_COMMA
  ;

winners:
  T_WINNERS T_COLON integer T_COMMA
  ;

distributed:
  T_DISTRIBUTED T_COLON T_FLOAT T_COMMA
  ;

jackpot:
  T_JACKPOT T_COLON T_FLOAT T_COMMA
  ;

fixed:
  T_FIXED T_COLON T_FLOAT T_COMMA
  ;

categoryType:
  T_CATEGORYTYPE T_COLON boolean T_COMMA
  ;

gameType:
  T_GAMETYPE T_COLON T_IDENTIFIER 
  ;

minimumDistributed:
  T_MINIMUMDISTRIBUTED T_COLON T_FLOAT 
  ;

wagerStatistics:
  T_WAGERSTATISTICS T_COLON T_LCURLY columns wagers addOn T_RCURLY
  ;

columns:
  T_COLUMNS T_COLON integer T_COMMA
  ;

wagers:
  T_WAGERS T_COLON integer T_COMMA
  ;

addOn:
  T_ADDON T_COLON T_LBRUCKET jsonElement T_RBRUCKET
  | T_ADDON T_COLON T_LBRUCKET emptyJson T_RBRUCKET
  ;

// exclusively empty JSON array
emptyJson:
  ;

list:
  T_LIST T_COLON T_LBRUCKET arrayOfList T_RBRUCKET T_COMMA
  ;
// accepted format for JSON int-array
arrayOfList:
  integer T_COMMA   
  integer T_COMMA
  integer T_COMMA
  integer T_COMMA 
  integer
  ;

jsonElement:
  T_IDENTIFIER T_COMMA jsonElement
  | integer T_COMMA jsonElement
  | T_FLOAT T_COMMA  jsonElement
  | T_REAL T_COMMA jsonElement
  | T_IDENTIFIER 
  | integer 
  | T_FLOAT   
  | T_REAL
  | T_DIGIT
  ;


totalPages:
  T_TOTALPAGES T_COLON integer T_COMMA
  ;
totalElements:
  T_TOTALELEMENTS T_COLON integer T_COMMA
  ;

lastBoolean: 
  T_LAST T_COLON T_BOOLEAN1 T_COMMA
  ;

numberOfElements:
  T_NUMBEROFELEMENTS T_COLON integer T_COMMA
  ;


number:
  T_NUMBER T_COLON integer 
  ;
size:
  T_SIZE T_COLON integer T_COMMA
  ;
first:
  T_FIRST T_COLON T_BOOLEAN1 T_COMMA
  ;

sort:
  T_SORT T_COLON T_LBRUCKET T_LCURLY direction 
  property ignoreCase nullHandling descending 
  ascending T_RCURLY T_RBRUCKET T_COMMA
  ;

direction:
  T_DIRECTION T_COLON T_IDENTIFIER T_COMMA
  ;
property:
  T_PROPERTY T_COLON T_PROPERTY1 T_COMMA
  ;
ignoreCase:
  T_IGNORECASE T_COLON T_BOOLEAN1 T_COMMA
  ;
nullHandling:
  T_NULLHANDLING T_COLON T_IDENTIFIER T_COMMA
  ;
descending:
  T_DESCENDING T_COLON T_BOOLEAN1 T_COMMA
  ;
ascending:
  T_ASCENDING T_COLON T_BOOLEAN1
  ;

%%

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