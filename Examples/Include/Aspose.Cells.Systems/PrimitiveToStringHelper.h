#ifndef _SYSTEM_PRIMITIVETOSTRINGHELPER_H_
#define _SYSTEM_PRIMITIVETOSTRINGHELPER_H_

#include "Aspose.Cells.Systems/BaseNumber.h"
#include "Aspose.Cells.Systems/Boolean.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Drawing/FontStyle.h"
#include "Aspose.Cells.Systems/Drawing/Drawing2D/HatchStyle.h"

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
				class ASPOSE_CELLS_API PrimitiveToStringHelper {
				public:

					static StringPtr ToString(Byte value);
					static StringPtr ToString(SByte value);
					static StringPtr ToString(Int16 value);
					static StringPtr ToString(UInt16 value);
					static StringPtr ToString(Int32 value);
					static StringPtr ToString(UInt32 value);
					static StringPtr ToString(Int64 value);
					static StringPtr ToString(UInt64 value);
					static StringPtr ToString(Double value);
					static StringPtr ToString(Single value);
					static StringPtr ToString(Decimal value);
					static StringPtr ToString(Boolean value);

					static StringPtr ToString(Aspose::Cells::ExternalCellValueType value);
					static StringPtr ToString(Aspose::Cells::ErrorType value);
					static StringPtr ToString(Aspose::Cells::CellsSs::RawCellValueType value);
					static StringPtr ToString(Aspose::Cells::Systems::Drawing::FontStyle value);
					static StringPtr ToString(Aspose::Cells::FormulaUtility::WeekEndType value);
					static StringPtr ToString(Aspose::Cells::OpenXML::DataKeepType value);
					static StringPtr ToString(Aspose::Cells::Systems::Drawing::Drawing2D::HatchStyle value);

				};
		}
	}
}
#endif//_SYSTEM_PRIMITIVETOSTRINGHELPER_H_