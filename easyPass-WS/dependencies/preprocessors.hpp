#ifdef LOG
#define LOG (Data) std::cout << Data << " ";
#endif

#ifdef NEWLINE
#define NEWLINE () std::cout << '\n';
#endif

#ifndef ERROR 
#define ERROR (Data) std::cerr << Data << " ";
#endif

#ifndef ZERO
#define ZERO 0
#endif
