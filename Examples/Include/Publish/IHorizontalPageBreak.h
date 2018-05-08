#pragma once
#include "System/Object.h"
#include "System/Int32.h"

namespace Aspose{
namespace Cells{
			/// <summary>
			/// Encapsulates the object that represents a horizontal page break. 
			/// </summary>
			/// <example><code>
			/// 
			/// [C++]
			/// 
			/// //Instantiating a Workbook object
			/// intrusive_ptr<Aspose::Cells::IWorkbook> workbook = Factory::CreateIWorkbook();
			/// 
			/// //Obtaining the reference of the newly added worksheet by passing its sheet index
			/// intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);
			/// 
			/// //Add a page break at cell Y30
			/// int Index = worksheet->GetIHorizontalPageBreaks()->Add(new String("Y30"));
			/// 
			/// //get the newly added horizontal page break
			/// intrusive_ptr<IHorizontalPageBreak> hPageBreak = worksheet->GetIHorizontalPageBreaks()->GetObjectByIndex(Index);
			/// 
			/// </code>
			/// </example>
	class ASPOSE_CELLS_API IHorizontalPageBreak : public Aspose::Cells::System::Object
	{
		public:
			/// <summary>
			/// Gets the start column index of this horizontal page break.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetStartColumn()=0;
			/// <summary>
			/// Gets the end column index of this horizontal page break.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetEndColumn()=0;
			/// <summary>
			/// Gets the zero based row index.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetRow()=0;

	};
}
}
