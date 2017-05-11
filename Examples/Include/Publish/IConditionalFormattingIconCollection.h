#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "System/Collections/CollectionBase.h"

namespace Aspose {
	namespace Cells {
		class IConditionalFormattingIcon;
		enum IconSetType;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			///  Represents  a collection of <see cref="IConditionalFormattingIcon" />
			///  objects.
			///  </summary>
			/// <example>
			///  <code>
			///  
			///  [C++]
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
			///  //Sets condition
			///  int idx = fcs->AddCondition(FormatConditionType::FormatConditionType_IconSet); 
			///  intrusive_ptr<IFormatCondition> cond = fcs->GetObjectByIndex(idx);	      
			///  //Sets condition's type
			///  cond->GetIIconSet()->SetType(IconSetType::IconSetType_ArrowsGray3);	   
			///  //Add custom iconset condition.
			///  intrusive_ptr<IConditionalFormattingIcon> cfIcon = cond->GetIIconSet()->GetICfIcons()->GetObjectByIndex(0);	    
			///  cfIcon->SetType(IconSetType::IconSetType_Arrows3);    
			///  cfIcon->SetIndex(0);    
			///  intrusive_ptr<IConditionalFormattingIcon> cfIcon1 = cond->GetIIconSet()->GetICfIcons()->GetObjectByIndex(1);    
			///  cfIcon1->SetType(IconSetType::IconSetType_ArrowsGray3);	     
			///  cfIcon1->SetIndex(1);	     
			///  intrusive_ptr<IConditionalFormattingIcon> cfIcon2 = cond->GetIIconSet()->GetICfIcons()->GetObjectByIndex(2);	     
			///  cfIcon2->SetType(IconSetType::IconSetType_Boxes5);	     
			///  cfIcon2->SetIndex(2);	   
			///  //Saving the Excel file
			///  workbook->Save(new String("C:\\output.xls"));  
			///  </code>
			/// 
			///  </example>
	class ASPOSE_CELLS_API IConditionalFormattingIconCollection : public Aspose::Cells::System::Collections::CollectionBase
	{
		public:
			/// <summary>
			/// Gets the ConditionalFormattingIcon element at the specified index.
			/// </summary>
			/// <param name="index" >The zero based index of the element.</param>
			/// <returns>The element at the specified index.</returns>
			 virtual intrusive_ptr<Aspose::Cells::IConditionalFormattingIcon> 		GetObjectByIndex(Aspose::Cells::System::Int32 index)=0;
			/// <summary>
			/// Adds <see cref="IConditionalFormattingIcon" />
			///  object.
			/// </summary>
			/// <param name="type" >The value type.</param>
			/// <param name="index" >The Index.</param>
			/// <returns>Returns the index of new object in the list.</returns>
			 virtual Aspose::Cells::System::Int32 Add(Aspose::Cells::IconSetType type , Aspose::Cells::System::Int32 index)=0;
			/// <summary>
			/// Adds <see cref="IConditionalFormattingIcon" />
			///  object.
			/// </summary>
			/// <param name="cficon" >Returns the index of new object in the list.</param>
			 virtual Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::IConditionalFormattingIcon> cficon)=0;

	};
}
}
