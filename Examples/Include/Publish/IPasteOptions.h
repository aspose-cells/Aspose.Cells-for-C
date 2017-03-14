#pragma once
#include "System/Object.h"

namespace Aspose {
	namespace Cells {
		enum PasteType;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Represents the paste special options.
			/// </summary>
	class ASPOSE_CELLS_API IPasteOptions : public Aspose::Cells::System::Object
	{
		public:
			/// <summary>
			/// The paste special type.
			/// </summary>
			 virtual Aspose::Cells::PasteType GetPasteType()=0;
			/// <summary>
			/// The paste special type.
			/// </summary>
			 virtual void SetPasteType(Aspose::Cells::PasteType value)=0;
			/// <summary>
			/// Indicates whether skips blank cells.
			/// </summary>
			 virtual bool GetSkipBlanks()=0;
			/// <summary>
			/// Indicates whether skips blank cells.
			/// </summary>
			 virtual void SetSkipBlanks(bool value)=0;
			/// <summary>
			/// True means only copying visible cells.
			/// </summary>
			 virtual bool GetOnlyVisibleCells()=0;
			/// <summary>
			/// True means only copying visible cells.
			/// </summary>
			 virtual void SetOnlyVisibleCells(bool value)=0;
			/// <summary>
			///  True to transpose rows and columns when the range is pasted. The default value is False.
			/// </summary>
			 virtual bool GetTranspose()=0;
			/// <summary>
			///  True to transpose rows and columns when the range is pasted. The default value is False.
			/// </summary>
			 virtual void SetTranspose(bool value)=0;

	};
}
}
