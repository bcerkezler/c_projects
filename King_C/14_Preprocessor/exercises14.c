/* Exercise 1 */

// #define CUBE(x) ((x)*(x)*(x))
// #define MOD4(n) ((n) % 4)
// #define PRODUCT_LESS_THAN_100(x, y) (((x)*(y)) < 100 ? 1 : 0)

/* Exercise 2 */

// #define NELEMS(a) (sizeof(a) / sizeof(a[0]))

/* Exercise 3 */

// (a) : 4
// (b) : 4
// (c) : #define DOUBLE(x) (2 * (x))

/* Exercise 4 */

// (a) : #define AVG(x,y) (((x)-(y))/2)
// (b) : #define AREA(x,y) ((x)*(y))

/* Exercise 5 */

// (a) : D
// (b) : '3'

/* Exercise 6 */

// (a) #define DISP(f,x) printf((#f) "(%g) = %g\n", (x), (f((x))));
// (b) #define DISP(f,x,y) printf((#f) "(%g, %g) = %g\n", (x), (y), (f((x), (y))));

/* Exercise 7 */

// (a) long long_max(long x, long y) 
//    {
//      return x > y ? x : y;     
//    }

// (b) Types including a space character in their name 
// will not work for this function creation because of the ## operator 
// in the macro definition, illegally creating a function 
// unsigned long unsigned long_max()

// (c) A solution to this issue would be to define 
// an equivalent type which has no spaces in its name, such as :
// typedef unsigned long u_long;

/* Exercise 8 */

// #define STRINGIZE(x) #x
// #define EXPAND_MACRO(x) STRINGIZE(x)
// #define LINE_FILE ("Line " EXPAND_MACRO(__LINE__) " of file " __FILE__)

/* Exercise 9 */

// #define CHECK(x,y,n) (((x)>=0&&(x)<=(n)-1&&(y)>=0&&(y)<=(n)-1)?1:0)
// #define MEDIAN(x,y,z) (((x)>=(y)&&(x)<=(z))?(x):((y)>=(x)&&(y)<=(z))?(y):(z))
// #define POLYNOMIAL(x) (  (3*(x)*(x)*(x)*(x)*(x)) \
                       + (2*(x)*(x)*(x)*(x))     \
                       - (5*(x)*(x)*(x))         \
                       - ((x)*(x))               \
                       + (7*(x))                 \
                       - 6)

/* Exercise 10 */

// Recursive functions and functions with arguments 
// which have side effects have different behaviour as a macro, 
// making a function more suitable.

/* Exercise 11 */

// #define ERROR(s,...) (fprintf(stderr, (s), __VA_ARGS__))

/* Exercise 12 */

// (c) and (e) will fail their tests, as M is defined.

/* Exercise 13 */

// (a) void f(void);

// int main(void)
// {
//     f();



//     return 0;
// }

// void f(void)
// {



//     printf("N is undefined\n");

// }

// (b) N is undefined

/* Exercise 14 */

// int main(void)
// {
//    int a[= 10], i, j, k, m; /* Syntax error */


//    i = j;




//    i = 10 * j+1;
//    i = (x,y) x-y(j, k);     /* Syntax error */
//    i = ((((j)*(j)))*(((j)*(j))));
//    i = (((j)*(j))*(j));
//    i = jk;                  /* Syntax error */
//    puts("i" "j");


//    i = SQR(j);

//    i = (j);

//    return 0;
// } 

/* Exercise 15 */

// #if defined(FRENCH)
// #define INSERT_DISK "Inserez Le Disque 1"
// #
// #elif defined(SPANISH)
// #define INSERT_DISK "Inserte El Disco 1"
// #
// #else
// #define INSERT_DISK "Insert Disk 1"
// printf("%s\n", INSERT_DISK);

/* Exercise 16 */

// #pragma ident "foo"