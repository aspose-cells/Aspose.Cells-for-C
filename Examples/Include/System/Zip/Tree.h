#ifndef _SYSTEM_ZIP_TREE_H_
#define _SYSTEM_ZIP_TREE_H_

#include "System/Zip/ZipOptions.h"
#include "System/Zip/Zlib.h"
#include "System/Zip/DeflateStream.h"

using namespace Aspose::Cells::System;

namespace Aspose {
	namespace Cells {
		namespace OpenXML
		{
			class Tree
			{
			private:
				static const int32_t HEAP_SIZE = (2 * InternalConstants::L_CODES + 1);
					
			public:
				static const int32_t ExtraLengthBits[];
				static const int32_t ExtraDistanceBits[];
				static const int32_t extra_blbits[];
				static const int8_t bl_order[];
				static const int32_t Buf_size = 8 * 2;
				static const int8_t _dist_code[];
				static const int8_t LengthCode[];
				static const int32_t LengthBase[];
				static const int32_t DistanceBase[];

				short*			dyn_tree; // the dynamic tree
				int				max_code; // largest code with non zero frequency
				const StaticTree*		staticTree; // the corresponding static tree
					
			public:
				static int DistanceCode(int dist);
				static void  gen_codes(short* tree, int max_code, short* bl_count);
				static int bi_reverse(int code, int len);

				void  gen_bitlen(intrusive_ptr<DeflateManager> s);
				void  build_tree(intrusive_ptr<DeflateManager> s);

			};
		}
	}
}
#endif//_SYSTEM_ZIP_TREE_H_
