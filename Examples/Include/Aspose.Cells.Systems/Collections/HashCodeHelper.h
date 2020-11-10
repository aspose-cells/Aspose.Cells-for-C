#ifndef _SYSTEM_COLLECTIONS_HASHCODEHELPER_H_
#define _SYSTEM_COLLECTIONS_HASHCODEHELPER_H_

#include "Aspose.Cells.Systems/BaseNumber.h"
#include "Aspose.Cells.Systems/Boolean.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Drawing/FontStyle.h"

namespace Aspose {
	namespace Cells {
		enum ExternalCellValueType;
		enum ErrorType;
	}
}
namespace Aspose {
	namespace Cells {
		namespace CellsSs {
			enum RawCellValueType;
		}
	}
}
namespace Aspose {
	namespace Cells {
		namespace FormulaUtility {
			enum WeekEndType;
		}
	}
}
namespace Aspose {
	namespace Cells {
		namespace OpenXML {
			enum DataKeepType;
		}
	}
}

namespace Aspose {
	namespace Cells {
		namespace Systems {
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

					static int GetHashcode(Aspose::Cells::ExternalCellValueType value);
					static int GetHashcode(Aspose::Cells::ErrorType value);
					static int GetHashcode(Aspose::Cells::CellsSs::RawCellValueType value);
					static int GetHashcode(Aspose::Cells::Systems::Drawing::FontStyle value);
					static int GetHashcode(Aspose::Cells::FormulaUtility::WeekEndType value);
					static int GetHashcode(Aspose::Cells::OpenXML::DataKeepType value);

				};
			}
		}
	}
}
#endif//_SYSTEM_COLLECTIONS_HASHCODEHELPER_H_