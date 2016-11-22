#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "System/Collections/CollectionBase.h"

namespace Aspose {
	namespace Cells {
		class IColumn;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Collects the <see also cref="IColumn" />
			/// objects that represent the individual columns in a worksheet.
			/// </summary>
			/// 
			/// <example>
			/// <code>
			/// 
			/// [C++]
			/// 
			/// //Instantiating a Workbook object
			/// intrusive_ptr<IWorkbook> workbook = Factory::CreateIWorkbook();
			/// //Obtaining the reference of the first worksheet
			/// intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);
			/// //Add new Style to Workbook
			/// intrusive_ptr<IStyle> style = workbook->GetIStyles()->GetObjectByIndex(workbook->GetIStyles()->Add());
			/// //Setting the background color to Blue
			/// style->SetForegroundColor(Color::GetBlue());
			/// //setting Background Pattern
			/// style->SetPattern(BackgroundType::BackgroundType_Solid);
			/// //New Style Flag
			/// intrusive_ptr<IStyleFlag> styleFlag = Factory::CreateIStyleFlag();
			/// //Set All Styles
			/// styleFlag->SetAll(true);
			/// //Change the default width of first ten columns
			/// for (int i = 0; i< 10; i++)
			/// {
			/// 	worksheet->GetICells()->GetIColumns()->GetObjectByIndex(i)->SetWidth(20);
			/// }
			/// //Get the Column with non default formatting
			/// intrusive_ptr<IColumnCollection> columns = worksheet->GetICells()->GetIColumns();
			/// for (intrusive_ptr<Aspose::Cells::System::Collections::IEnumerator> iter = columns->GetEnumerator(); iter->MoveNext();)
			/// {
			///   //Apply Style to first ten Columns
			/// 	intrusive_ptr<Aspose::Cells::IColumn> column = dynamic_pointer_cast<Aspose::Cells::IColumn>(iter->GetCurrent());
			/// 	column->ApplyStyle(style, styleFlag);
			/// }
			/// //Saving the Excel file
			/// workbook->Save(new String("D:\\book1.xls"));
			/// 
			/// </code>
			/// 
			/// </example>
			/// 
			/// 
	class ASPOSE_CELLS_API IColumnCollection : public Aspose::Cells::System::Collections::CollectionBase
	{
		public:
			/// <summary>
			/// Gets the column object by the index.
			/// </summary>
			/// 
			/// <param name="index" />
			/// 
			/// <returns>Returns the column object.</returns>
			/// 
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use GetIColumnByIndex(int) method.</remarks>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::IColumn> 		GetByIndex_i(Aspose::Cells::System::Int32 index)=0;
			/// <summary>
			/// Gets the <see cref="IColumn" />
			///  object by the position in the list.
			/// </summary>
			/// 
			/// <param name="index" >The position in the list.</param>
			/// 
			/// <returns>Returns the column object.</returns>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::IColumn> 		GetIColumnByIndex(Aspose::Cells::System::Int32 index)=0;
			/// <summary>
			/// Gets an <see also cref="IColumn" />
			///  object by column index. The Column object of given column index will be instantiated if it does not exist before.
			/// </summary>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::IColumn> 		GetObjectByIndex(Aspose::Cells::System::Int32 columnIndex)=0;

	};
}
}
