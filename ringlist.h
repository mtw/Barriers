/* Last changed Time-stamp: <2001-03-08 15:41:26 ivo> */
/* ringlist.h */

#ifndef _ringlist_h
#define _ringlist_h

extern void RNA_init(char *sequence, int shift, int nolp);
extern void RNA_move_it(char *struc);
extern void RNA_free_rl(void);

extern void SPIN_move_it(char *struc);

extern void NNI_move_it(char *struc);

extern void Transpos_move_it(char *);
extern void CTranspos_move_it(char *);
extern void Reversal_move_it(char *);
#endif
