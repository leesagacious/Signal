
#define _OUTSTANDING 64
#define _NORMALSIG   64
#define _OUTSTANDING_WORDS (_OUTSTANDING / _NORMALSIG)

typedef _struct {
  unsigned long bitsig[_OUTSTANDING_WORDS];
}outstanding_mask;
