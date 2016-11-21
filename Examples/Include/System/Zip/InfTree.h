#ifndef _SYSTEM_ZIP_INFTREE_H_
#define _SYSTEM_ZIP_INFTREE_H_

#include "System/IO/Stream.h"

using namespace Aspose::Cells::System;
using namespace Aspose::Cells::System::IO;

namespace Aspose {
	namespace Cells {
		namespace OpenXML
		{
			class ZlibCodec;

			class InfTree : public reference_counter {
			public:
				InfTree();
				virtual ~InfTree();

				int32_t inflate_trees_bits(int32_t* c, int32_t* bb, int32_t* tb, int32_t* hp, intrusive_ptr<ZlibCodec> z);
				int32_t inflate_trees_dynamic(int32_t nl, int32_t nd, int32_t* c, int32_t* bl, int32_t* bd, int32_t* tl, int32_t* td, int32_t* hp, intrusive_ptr<ZlibCodec> z);
				static int32_t inflate_trees_fixed(int32_t* bl, int32_t* bd, int32_t** tl, int32_t** td, intrusive_ptr<ZlibCodec> z);

			private:
				int32_t huft_build(int32_t* b, int32_t bindex, int32_t n, int32_t s, int32_t* d, int32_t* e, int32_t* t, int32_t* m, int32_t* hp, int32_t* hn, int32_t* v);
				void initWorkArea(int32_t vsize);

			private:
				static const int32_t MANY = 1440;
				static const int32_t Z_OK = 0;
				static const int32_t Z_STREAM_END = 1;
				static const int32_t Z_NEED_DICT = 2;
				static const int32_t Z_ERRNO = -1;
				static const int32_t Z_STREAM_ERROR = -2;
				static const int32_t Z_DATA_ERROR = -3;
				static const int32_t Z_MEM_ERROR = -4;
				static const int32_t Z_BUF_ERROR = -5;
				static const int32_t Z_VERSION_ERROR = -6;

				static const int32_t fixed_bl = 9;
				static const int32_t fixed_bd = 5;

				static const int32_t fixed_tl[];
				static const int32_t fixed_td[];
				static const int32_t cplens[];
				static const int32_t cplext[];
				static const int32_t cpdist[];
				static const int32_t cpdext[];

				// If BMAX needs to be larger than 16, then h and x[] should be uLong.
				const int32_t BMAX = 15; // maximum bit length of any code

				int32_t* hn; // hufts used in space
				int32_t* v; // work area for huft_build 
				int32_t	 v_len;
				int32_t* c; // bit length count table
				int32_t* r; // table entry for structure assignment
				int32_t* u; // table stack
				int32_t* x; // bit offsets, then code stack
			};
		}
	}
}
#endif//_SYSTEM_ZIP_INFTREE_H_
