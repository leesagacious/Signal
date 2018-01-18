#include <linux/types.h>

/*
#define _OUTSTANDING 64
#define _NORMALSIG   64
#define _OUTSTANDING_WORDS (_OUTSTANDING / _NORMALSIG)

1 ： The corresponding signal in this position is in the pending state
0 ： The corresponding signal in this position is not in the pending state
                                                                    -leesagacious
typedef _struct {
  unsigned long bitsig[_OUTSTANDING_WORDS];
}outstanding_mask;
*/
DECLARE_BITMAP(bitsig, 2)
