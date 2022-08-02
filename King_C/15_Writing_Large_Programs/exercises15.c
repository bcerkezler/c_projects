/* Exercise 1 */

// (a) : 1. Information hiding, clutter removal. Only necessary functions would be included in a project source file
//          's header file, and only those necessary functions would be available.
//       2. Compilation, testing and debugging would be simpler. Only necessary compilations would take place rather
//          than compiling everything, testing unneccessary things.
//       3. File size. Many small files are easier to manipulate over one large, memory consuming file.

// (b) : 1. Complexity. Smaller programs split into multiple files can cause unnecessary confusion.
//       2. Incorrect seperation of information. Programs could potentially be split in a chaotic way, 
//          making a program confusing to read, debug and test.
//       3. File count. At a certain point, managing a large list of small files can be more confusing to compile, 
//          link and remain consistent with the program's original philosophy.

/* Exercise 2 */

// Function definitions should not be included in a header file because it would potentially define 
// individual functions multiple times.

/* Exercise 3 */

// Yes. The system normally looks in a predetermined location for system header files, 
// and including a file with the same name as a system header file would only look in the local scope 
// and potentially redefine a system header file as a local header file.

/* Exercise 4 */

// (a) :                                 (b) : Output if DEBUG is not defined:
// Output if DEBUG is defined:                  
// Value of i: 1                         (c) : Because the DEBUG macro was left undefined while debug.h was added     
// Value of j: 2                               to testdebug.c, the PRINT_DEBUG macro was defined as a macro with 
// Value of k: 3                               no effect, and the preprocessor conditional statements also relied   
// Value of i + j: 3                           on the definition of DEBUG. 
// Value of 2 * i + j - k: 1             (d) : Yes. The PRINT_DEBUG macro's definition relies on the definition of DEBUG.
//                                             If DEBUG is defined after PRINT_DEBUG is defined,
//                                             it will have no effect on the definition of PRINT_DEBUG.

/* Exercise 5 */                            /* Exercise 6 */

// demo: main.o f1.o f2.o                   (a) : main.c, f1.c, f2.c
//       gcc -o demo main.o f1.o f2.o       (b) : f1.c                                                
// main.o: main.c f1.h                      (c) : main.c, f1.c, f2.c    
//         gcc -c main.c                    (d) : f1.c, f2.c
// f1.o:   f1.c f1.h f2.h
//         gcc -c f1.c
// f2.o:   f2.c f1.h f2.h 
//         gcc -c f2.c