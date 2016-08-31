#ifndef _SYSTEM_COLLECTIONS_HASHCODEHELPER_H_
#define _SYSTEM_COLLECTIONS_HASHCODEHELPER_H_

#include "System/BaseNumber.h"
#include "System/Boolean.h"
#include "System/String.h"
//#include "System/Boxing.h"

//#ifdef BOX_ENUM_TYPE
#include "ExternalCellValueType.h"
#include "ErrorType.h"
#include "RawCellValueType.h"
#include "WeekEndType.h"
#include "DataKeepType.h"
#include "System/Drawing/FontStyle.h"
//#include "FunctionIndex.h"
//#endif

namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Collections {
				class ASPOSE_CELLS_API HashCodeHelper {
				public:

					static int GetHashcode(Byte value);
					static int GetHashcode(SByte value);
					static int GetHashcode(Int16 value);
					static int GetHashcode(UInt16 value);
					static int GetHashcode(Int32 value);
					static int GetHashcode(UInt32 value);
					static int GetHashcode(Int64 value);
					static int GetHashcode(UInt64 value);
					static int GetHashcode(Double value);
					static int GetHashcode(Single value);
					static int GetHashcode(Decimal value);
					static int GetHashcode(Boolean value);
					static int GetHashcode(StringPtr value);
//#ifdef BOX_ENUM_TYPE
					static int GetHashcode(Aspose::Cells::ExternalCellValueType value) { return (int)value; }
					static int GetHashcode(Aspose::Cells::ErrorType value) { return (int)value; }
					static int GetHashcode(Aspose::Cells::CellsSs::RawCellValueType value) { return (int)value; }
					static int GetHashcode(Aspose::Cells::System::Drawing::FontStyle value) { return (int)value; }
					static int GetHashcode(Aspose::Cells::FormulaUtility::WeekEndType value) { return (int)value; }
					static int GetHashcode(Aspose::Cells::OpenXML::DataKeepType value) { return (int)value; }
//#endif
				};
			}
		}
	}
}
#endif//_SYSTEM_COLLECTIONS_HASHCODEHELPER_H_