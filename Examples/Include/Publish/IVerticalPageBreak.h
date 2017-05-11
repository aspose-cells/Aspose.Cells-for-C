#pragma once
#include "System/Object.h"
#include "System/Int32.h"

namespace Aspose{
namespace Cells{
			/// <summary>
			/// Encapsulates the object that represents a vertical page break. 
			/// </summary>
			/// <example><code>
			/// [C++]
			/// intrusive_ptr<IWorkbook> excel = Factory::CreateIWorkbook();
			/// //Add a pagebreak at G5
			/// intrusive_ptr<IWorksheet> ws = excel->GetIWorksheets()->GetObjectByIndex(0);
			/// ws->GetIHorizontalPageBreaks()->Add(new String("G5"));
			/// ws->GetIVerticalPageBreaks()->Add(new String("G5"));
			/// 
			/// </code>
			/// </example>
	class ASPOSE_CELLS_API IVerticalPageBreak : public Aspose::Cells::System::Object
	{
		public:
			/// <summary>
			/// Gets the start row index of the vertical page break.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetStartRow()=0;
			/// <summary>
			/// Gets the end row index of the vertical page break.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetEndRow()=0;
			/// <summary>
			/// Gets the column index of the vertical page break.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetColumn()=0;

	};
}
}
