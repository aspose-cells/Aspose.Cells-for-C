#ifndef _SYSTEM_DRAWING_CHARACTERRANGE_H_
#define _SYSTEM_DRAWING_CHARACTERRANGE_H_

#include "System/Object.h"
namespace Aspose {
	namespace Cells {
		namespace System{
			namespace Drawing{
				class ASPOSE_CELLS_API CharacterRange : public Object
				{
				private:
					int first;
					int length;
				public:
					CharacterRange();
					CharacterRange(int First, int Length);
					int  GetFirst();
					void SetFirst(int value);
					int  GetLength();
					void SetLength(int value);
				}; 
			}
		}
	}
}
#endif//_SYSTEM_DRAWING_CHARACTERRANGE_H_
