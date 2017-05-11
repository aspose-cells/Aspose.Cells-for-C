#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "System/Collections/CollectionBase.h"

namespace Aspose {
	namespace Cells {
		class IConditionalFormattingCollection;
		class IFormatConditionCollection;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Encapsulates a collection of <see cref="FormatCondition" />
			///  objects.
			/// </summary>
			/// <example><code>
			/// 
			/// [C++]
			/// 
			///  //Instantiating a Workbook object
			///  intrusive_ptr<IWorkbook> workbook = Factory::CreateIWorkbook();
			///  intrusive_ptr<IWorksheet> sheet = workbook->GetIWorksheets()->GetObjectByIndex(0);   
			///  //Get Conditional Formattings
			///  intrusive_ptr<IConditionalFormattingCollection> cformattings = sheet->GetIConditionalFormattings();	   
			///  //Adds an empty conditional formatting
			///  int index = cformattings->Add();   
			///  //Get newly added Conditional formatting
			///  intrusive_ptr<IFormatConditionCollection> fcs = cformattings->GetObjectByIndex(index);	   
			///  //Sets the conditional format range.
			///  intrusive_ptr<ICellArea> ca = Factory::CreateICellArea();	   
			///  ca->SetstartRow(0);	   
			///  ca->SetendRow(0);   
			///  ca->SetstartColumn(0);   
			///  ca->SetendColumn(0);   
			///  fcs->AddArea(ca);   
			///  ca = Factory::CreateICellArea();   
			///  ca->SetstartRow(1);
			///  ca->SetendRow(1);
			///  ca->SetstartColumn(1);
			///  ca->SetendColumn(1); 
			///  fcs->AddArea(ca);	   
		  ///  //Add condition.
			///  int conditionIndex = fcs->AddCondition(FormatConditionType_CellValue, OperatorType::OperatorType_Between, new String("=A2"), new String("100"));	     
			///  //Add condition.
			///  int conditionIndex2 = fcs->AddCondition(FormatConditionType_CellValue, OperatorType::OperatorType_Between, new String("50"), new String("100"));     
			///  //Sets the background color.
			///  intrusive_ptr<IFormatCondition> fc = fcs->GetObjectByIndex(conditionIndex);     
			///  fc->GetIStyle()->SetBackgroundColor(Color::GetRed());    
			///  //Saving the Excel file
			///  workbook->Save(new String("C:\\output.xls"));
			/// 
			/// </code>
			/// </example>
	class ASPOSE_CELLS_API IConditionalFormattingCollection : public Aspose::Cells::System::Collections::CollectionBase
	{
		public:
			/// <summary>
			/// Remove all conditional formattings in the range.
			/// </summary>
			/// <param name="startRow" >The start row of the range.</param>
			/// <param name="startColumn" >The start column of the range.</param>
			/// <param name="totalRows" >The number of rows of the range.</param>
			/// <param name="totalColumns" >The number of columns of the range.</param>
			 virtual void RemoveArea(Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 totalRows , Aspose::Cells::System::Int32 totalColumns)=0;
			/// <summary>
			/// Copies condtional formattings.
			/// </summary>
			/// <param name="cfs" >The condtional formattings</param>
			 virtual void Copy(intrusive_ptr<Aspose::Cells::IConditionalFormattingCollection> cfs)=0;
			/// <summary>
			/// Gets the FormatConditions element at the specified index.
			/// </summary>
			/// <param name="index" >The zero based index of the element.</param>
			 virtual intrusive_ptr<Aspose::Cells::IFormatConditionCollection> 		GetObjectByIndex(Aspose::Cells::System::Int32 index)=0;
			/// <summary>
			/// Adds a FormatConditions to the collection.
			/// </summary>
			/// <returns>FormatConditions object index.</returns>
			 virtual Aspose::Cells::System::Int32 Add()=0;

	};
}
}
