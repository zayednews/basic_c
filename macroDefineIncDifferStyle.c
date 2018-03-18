#define INC1(a) ((a)+1)

#define INC2 (a) ((a)+1)
//error

#define INC3( a ) (( a ) + 1)

#define INC4 ( a ) (( a ) + 1)
//error

/*In C, for macros with arguments, there can’t be any space between macro name and open parenthesis.
That’s why only INC1 and INC3 are correct. Basically,
“#define INC2 (a) ((a)+1)” results in “INC2” expansion to “(a) ((a)+1)” which is not the desired expansion.*/
