#pragma once
#include "System/Object.h"

namespace Aspose {
	namespace Cells {
		class IConditionalFormattingIconCollection;
		class IConditionalFormattingValueCollection;
		enum IconSetType;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Describe the IconSet conditional formatting rule. 
			/// This conditional formatting rule applies icons to cells
			/// according to their values.
			/// </summary>
			/// <example><code>
			/// 
			/// [C++]
			/// //Instantiating a Workbook object
			/// intrusive_ptr<IWorkbook> workbook = Factory::CreateIWorkbook();
			/// intrusive_ptr<IWorksheet> sheet = workbook->GetIWorksheets()->GetObjectByIndex(0);
			/// //Adds an empty conditional formatting
			/// int index = sheet->GetIConditionalFormattings()->Add();
			/// intrusive_ptr<IFormatConditionCollection> fcs = sheet->GetIConditionalFormattings()->GetObjectByIndex(index);
			/// //Sets the conditional format range.
			/// intrusive_ptr<ICellArea> ca = Factory::CreateICellArea();
			/// ca->SetstartRow(0);
			/// ca->SetendRow(2);
			/// ca->SetstartColumn(0);
			/// ca->SetendColumn(0);
			/// fcs->AddArea(ca);
			/// //Adds condition.
			/// int idx = fcs->AddCondition(FormatConditionType_IconSet);
			/// fcs->AddArea(ca);
			/// intrusive_ptr<IFormatCondition> cond = fcs->GetObjectByIndex(idx);
			/// //Get Icon Set
			/// intrusive_ptr<IIconSet> iconSet = cond->GetIIconSet(); 
			/// //Set Icon Type
			/// iconSet->SetType(IconSetType_Arrows3);
			/// //Put Cell Values
			/// intrusive_ptr<ICell> cell1 = sheet->GetICells()->GetObjectByIndex(new String("A1"));  
			/// cell1->PutValue(10);
			/// intrusive_ptr<ICell> cell2 = sheet->GetICells()->GetObjectByIndex(new String("A2"));
			/// cell2->PutValue(120);
			/// intrusive_ptr<ICell> cell3 = sheet->GetICells()->GetObjectByIndex(new String("A3"));
			/// cell3->PutValue(260);
			/// //Saving the Excel file
			/// workbook->Save(new String("D:\\book1.xlsx"));
			/// </code>
			/// </example>
	class ASPOSE_CELLS_API IIconSet : public Aspose::Cells::System::Object
	{
		public:
			/// <summary>
			/// Get the<see cref="IConditionalFormattingIcon" />
			///  from the collection
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::IConditionalFormattingIconCollection> 		GetICfIcons()=0;
			/// <summary>
			/// Get the CFValueObjects instance.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::IConditionalFormattingValueCollection> 		GetICfvos()=0;
			/// <summary>
			/// Gets the icon set type to display.
			/// </summary>
			 virtual Aspose::Cells::IconSetType GetType()=0;
			/// <summary>
			/// Sets the icon set type to display.
			/// Setting the type will auto check if the current Cfvos's count is
			/// accord with the new type. If not accord, old Cfvos will be cleaned and 
			/// default Cfvos will be added.
			/// </summary>
			 virtual void SetType(Aspose::Cells::IconSetType value)=0;
			/// <summary>
			/// Indicates whether the icon set is custom.
			/// Default value is false.
			/// </summary>
			 virtual bool IsCustom()=0;
			/// <summary>
			/// Gets the flag indicating whether to show the values of the cells on which this icon set is applied.
			/// Default value is true.
			/// </summary>
			 virtual bool GetShowValue()=0;
			/// <summary>
			/// Sets the flag indicating whether to show the values of the cells on which this icon set is applied.
			/// Default value is true.
			/// </summary>
			 virtual void SetShowValue(bool value)=0;
			/// <summary>
			/// Gets the flag indicating whether to reverses the default order of the icons in this icon set.
			/// Default value is false.
			/// </summary>
			 virtual bool GetReverse()=0;
			/// <summary>
			/// Sets the flag indicating whether to reverses the default order of the icons in this icon set.
			/// Default value is false.
			/// </summary>
			 virtual void SetReverse(bool value)=0;

	};
}
}
