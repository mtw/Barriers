/* global structures */
#include "hash_util.h"
typedef struct {
  int father;        /* which lmin do I merge with */
  char *saddle;      /* structure of saddle point */
  float E_saddle;    /* energy of saddle point */
  char *structure;   /* structure and */
  float energy;      /* .. energy of local min */
  float Z;           /* partition function for structures in basin */
  float Zg;          /* partition function for structures in basin */
  long my_GradPool;  /* for Gradient Basins */     
  long my_pool;      /* # of structures attracted by this lmin */
  long fathers_pool; /* # of structures attracted by father-lmin */
  hash_entry *left;
  hash_entry *right;
  int *POV;          /* only for the partial order */
  char global;       /* mark global Pareto points */
} loc_min;

typedef struct {
  int print_saddles;
  int bsize;
  int ssize;
  int shut_up;
  int max_print;
  double minh;
  double kT;
  int want_quiet;
  int want_verbose;
  char *GRAPH, *MOVESET;
  FILE *INFILE;
  char *seq;
  int poset;
  int label;
  int rates;
  int microrates;
} barrier_options;

typedef struct {
  hash_entry *hp;
  char key[128];
  short num;
} path_entry;
