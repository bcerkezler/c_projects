/* Exercise 1 */
// Both declarations are legal individually as well as together: the structures' member variables 
// are only accessible with the . operator, and their scope is limited to their structure.

/* Exercise 2 */
// (a): struct {            (b): struct {
//          double real;              double real;
//          double imaginary;         double imaginary;
//      } c1, c2, c3;              } c1 = {0.0, 1.0}, c2 = {1.0, 0.0}, c3;

// (c): c1 = c2;            (d): c3.real = c1.real + c2.real;
//                                 c3.imaginary = c1.imaginary +  c2.imaginary;

/* Exercise 3 */
// (a): struct complex     (b): struct complex c1, c2, c3;    
//      {                  (c): struct complex make_complex(double real, double imaginary) {
//        double real;              return (struct complex) {real, imaginary};
//        double imaginary;     }
//      }
// (d): struct complex add_complex(struct complex a, struct complex b) {
//         return (struct complex) {a.real + b.real, a.imaginary + b.imaginary};
//      }    

/* Exercise 4 */
// (a): typedef struct     (b): Complex c1, c2, c3;    
//      {                  (c): Complex make_complex(double real, double imaginary) {
//        double real;              return (Complex) {real, imaginary};
//        double imaginary;     }
//      } Complex;
// (d): Complex add_complex(Complex a, Complex b) {
//         return (Complex) {a.real + b.real, a.imaginary + b.imaginary};
//      }    

/* Exercise 5 */
// (a): int day_of_year(struct date d) {
//     int res = 0, i;
//     const int days_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//     if (d.month > 1 && ((d.year % 4 == 0 && d.year % 100 != 0) 
//         || d.year % 400 == 0))
//         res++;
//     for (i = 0; i < d.month; i++)
//         res += days_month[i];
//     return res + d.day;
// }
// (b): int compare_dates(struct date d1, struct date d2) {
//     int d1day = day_of_year(d1);
//     int d2day = day_of_year(d2);
//     if (d1day > d2day)
//         return 1;
//     else if (d1day < d2day)
//         return -1;
//     else
//         return 0;
// }

/* Exercise 6 */
// struct time split_time(long total_seconds) {
//     struct time t;
//     t.hours = total_seconds / 3600;
//     total_seconds %= 3600;
//     t.minutes = total_seconds / 60;
//     total_seconds %= 60;
//     t.seconds = total_seconds;
//     return t;
// }

/* Exercise 7 */
// (a): struct fraction reduce_fraction(struct fraction f) {
//     int temp;
//     int n = f.numerator, d = f.denominator;
//     while (n % d != 0) {
//         temp = d;
//         d = n % d;
//         n = temp;
//     }
//     f.numerator /= d;
//     f.denominator /= d;
//     return f;
// }
// (b): struct fraction add_fractions(struct fraction f1, struct fraction f2) {
//        return reduce_fraction((struct fraction) {f1.numerator * f2.denominator +
//               f2.numerator * f1.denominator, f1.denominator * f2.denominator});
// }
// (c): struct fraction subtract_fractions(struct fraction f1, struct fraction f2) {
//     return reduce_fraction((struct fraction) {f1.numerator * f2.denominator -
//         f2.numerator * f1.denominator, f1.denominator * f2.denominator});
// }
// (d): struct fraction multiply_fractions(struct fraction f1, struct fraction f2) {
//     return reduce_fraction((struct fraction) {f1.numerator * f2.numerator,
//         f1.denominator * f2.denominator});
// }
// (e): struct fraction divide_fractions(struct fraction f1, struct fraction f2) {
//     return reduce_fraction((struct fraction) {f1.numerator * f2.denominator,
//         f1.denominator * f2.numerator});
// }
 
/* Exercise 8 */
// (a): const struct color MAGENTA = {255, 0, 255};
// (b): const struct color MAGENTA = {.red = 255, .blue = 255};

/* Exercise 9 */
// (a): struct color make_color(int red, int green, int blue) {
//     if (red < 0)
//         red = 0;
//     else if (red > 255)
//         red = 255;
//     if (green < 0)
//         green = 0;
//     else if (green > 255)
//         green = 255;
//     if (blue < 0)
//         blue = 0;
//     else if (blue > 255)
//         blue = 255;
//     return (struct color) {red, green, blue};
//  }
// (b): int getRed(struct color c) {    (c): bool equal_color(struct color color1, struct color color2) {
//        return c.red;                         return (color1.red == color2.red && color1.green == color2.green &&  
//     }                                            color1.blue == color2.blue);
// (d): struct color brighter(struct color c) {  (e): struct color darker(struct color c) {
//     if (c.red + c.green + c.blue == 0)                  c.red = (int) c.red * 0.7;
//         return (struct color) {3, 3, 3};                c.green = (int) c.green * 0.7;                               
//     if (c.red > 0 && c.red < 3)                         c.blue = (int) c.blue * 0.7;
//         c.red = 3;                                    
//     if (c.green > 0 && c.green < 3)                     return c; 
//         c.green = 3;                                   }
//     if (c.blue > 0 && c.blue < 3)
//         c.blue = 3;

//     c.red = (int) c.red / 0.7;
//     c.green = (int) c.green / 0.7;
//     c.blue = (int) c.blue / 0.7;

//     if (c.red > 255)
//         c.red = 255;
//     if (c.green > 255)
//         c.green = 255;
//     if (c.blue > 255)
//         c.blue = 255;
//     return c;
// }

/* Exercise 10 */
// (a):
// int area_rectangle(struct rectangle r) {
//     return (r.lower_right.x - r.upper_left.x) 
//            * (r.lower_right.y - r.upper_left.y);
// }
// (b):
// struct point rectangle_center(struct rectangle r) {
//     return (struct point) {(r.lower_right.x - r.upper_left.x) / 2,
//                            (r.lower_right.y - r.upper_left.y) / 2};
// }
// (c):
// struct rectangle move_rect(struct rectangle r, int x, int y) {
//     r.upper_left.x += x;
//     r.upper_left.y += y;
//     r.lower_right.x += x;
//     r.lower_right.y += y;
//     return r;
// }
// (d):
// bool is_within_rect(struct rectangle r, struct point p) {
//     return (p.x > r.upper_left.x && p.x < r.lower_right.x
//             && p.y > r.upper_left.y && p.y < r.lower_right.y);
// }

/* Exercise 11 */
// A C compiler will allocate twenty bytes for the s structure, such that e will be allocated eight bytes.

/* Exercise 12 */
// A C compiler will allocate 16 bytes for the u union, such that 
// its largest member e will have 16 bytes allocated for itself.

/* Exercise 13 */
// (a), (b) and (d) are legal statements.
// (c) must be changed to access the rectangle structure in the u union: s.u.rectangle.height = 25;
// (e) must be changed to access the radius member of the circle structure within the u union: s.u.circle.radius = 5; 
// and (f) must do the same: s.u.circle.radius = 5;

/* Exercise 14 */
// (a):
// double shape_area(struct shape s) {
//     if (s.shape_kind == RECTANGLE)
//         return s.u.rectangle.height * s.u.rectangle.width;
//     else
//         return 3.1415 * s.u.circle.radius * s.u.circle.radius;
// }
// (b):
// struct shape shape_move(struct shape s, int x, int y) {
//     s.center.x += x;
//     s.center.y += y;

//     return s;
// }
// (c): 
// struct shape shape_scale(struct shape s, double c) {
//     if (s.shape_kind == RECTANGLE) {
//         s.u.rectangle.height *= c;
//         s.u.rectangle.width *= c;
//     } else
//         s.u.circle.radius *= c;
//     return s;
// }

/* Exercise 15 */
// (a): enum weekdays = {MONDAY, TUESDAY, WEDNESDAY, THURSDAY, 
//                 FRIDAY, SATURDAY, SUNDAY};
// (b): typedef enum {MONDAY, TUESDAY, WEDNESDAY, THURSDAY,
//              FRIDAY, SATURDAY, SUNDAY} Day;

/* Exercise 16 */
// (a), (c) and (e) are true statements. 
// (b) is false because enumeration constants can have block scope and are not evaluated by the preprocessor. 
// (d) is false. They can have same values.

/* Exercise 17 */
// All statements are legal, but (b) and (c) are potentially unsafe, 
// as incrementing b or assigning the value of i to b 
// could result in b having a value outside of its regular range.

/* Exercise 18 */
// (a): typedef enum {EMPTY, PAWN, KNIGHT, BISHOP, ROOK, QUEEN, KING} Piece;
//      typedef enum {BLACK, WHITE} Color;
// (b): typedef struct { Piece; Color; } Square;
// (c): Square[8][8] board;
// (d):
// Square[8][8] board = {
//     {{ROOK,  WHITE}, {KNIGHT, WHITE}, {BISHOP, WHITE}, {QUEEN, WHITE},
//      {KING,  WHITE}, {BISHOP, WHITE}, {KNIGHT, WHITE}, {ROOK,  WHITE}},
//     {{PAWN,  WHITE}, {PAWN,   WHITE}, {PAWN,   WHITE}, {PAWN,  WHITE},
//      {PAWN,  WHITE}, {PAWN,   WHITE}, {PAWN,   WHITE}, {PAWN,  WHITE}},
//     {{EMPTY, BLACK}, {EMPTY,  BLACK}, {EMPTY,  BLACK}, {EMPTY, BLACK},
//      {EMPTY, BLACK}, {EMPTY,  BLACK}, {EMPTY,  BLACK}, {EMPTY, BLACK}},
//     {{EMPTY, BLACK}, {EMPTY,  BLACK}, {EMPTY,  BLACK}, {EMPTY, BLACK},
//      {EMPTY, BLACK}, {EMPTY,  BLACK}, {EMPTY,  BLACK}, {EMPTY, BLACK}},
//     {{EMPTY, BLACK}, {EMPTY,  BLACK}, {EMPTY,  BLACK}, {EMPTY, BLACK},
//      {EMPTY, BLACK}, {EMPTY,  BLACK}, {EMPTY,  BLACK}, {EMPTY, BLACK}},
//     {{PAWN,  BLACK}, {PAWN,   BLACK}, {PAWN,   BLACK}, {PAWN,  BLACK},
//      {PAWN,  BLACK}, {PAWN,   BLACK}, {PAWN,   BLACK}, {PAWN,  BLACK}},
//     {{ROOK,  BLACK}, {KNIGHT, BLACK}, {BISHOP, BLACK}, {QUEEN, BLACK},
//      {KING,  BLACK}, {BISHOP, BLACK}, {KNIGHT, BLACK}, {ROOK,  BLACK}},
// };

/* Exercise 19 */
// struct pinball_machine {
//     char[40] name;
//     int year;
//     enum { EM, SS } type;
//     int players;
// };

/* Exercise 20 */
// switch(direction) {
//     case NORTH: y--;
//                 break;
//     case SOUTH: y++;
//                 break;
//     case EAST:  x++;
//                 break;
//     case WEST:  x--;
//                 break;
//     default:    break;
// }

/* Exercise 21 */
// (a): 0, 1, 2 and 3.
// (b): 11, 12 and 13.
// (c): 14, 15, 16, 24 and 25.
// (d): 45, 46, 47, 37, 38 and 39.

/* Exercise 22 */
// (a): const int piece_value[] = {200, 9, 5, 3, 3, 1};
// (b): 
// const int piece_value[] = {
//     [KING] = 200, 
//     [QUEEN] = 9,
//     [ROOK] = 5, 
//     [BISHOP] = 3,
//     [KNIGHT] = 3,
//     [PAWN] = 1
// };