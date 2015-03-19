#ifndef _VC4CLIST_CODES_H_INCLUDED_
#define _VC4CLIST_CODES_H_INCLUDED_

#include <stdint.h>

	enum vc4clist_code {
		VC4CLIST_CODE_HALT = 0,
		VC4CLIST_CODE_NOP = 1,
		VC4CLIST_CODE_FLUSH = 4,
		VC4CLIST_CODE_FLUSH_ALL_STATE = 5,
		VC4CLIST_CODE_START_TILE_BINNING = 6,
		VC4CLIST_CODE_INCREMENT_SEMAPHORE = 7,
		VC4CLIST_CODE_WAIT_ON_SEMAPHORE = 8,
		VC4CLIST_CODE_BRANCH = 16,
	};

#endif /* _VC4CLIST_CODES_H_INCLUDED_ */
