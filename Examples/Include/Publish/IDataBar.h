#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Drawing/Color.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/Array1D.h"
#include "Aspose.Cells.Systems/Byte.h"

namespace Aspose {
	namespace Cells {
		enum DataBarAxisPosition;
		enum DataBarFillType;
		enum TextDirectionType;
		class IDataBarBorder;
		class INegativeBarFormat;
		class IConditionalFormattingValue;
		class ICell;
	}
}
namespace Aspose {
	namespace Cells {
		namespace Rendering {
			class IImageOrPrintOptions;
		}
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Describe the DataBar conditional formatting rule. 
			/// This conditional formatting rule displays a gradated
			/// data bar in the range of cells.
			/// </summary>
			/// <example><code>
			/// 
			/// [C++]
			/// 
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
			/// int idx = fcs->AddCondition(FormatConditionType::FormatConditionType_DataBar);
			/// fcs->AddArea(ca);	  
			/// intrusive_ptr<IFormatCondition> cond = fcs->GetObjectByIndex(idx);  
			/// //Get Databar
			/// intrusive_ptr<IDataBar> dataBar = cond->GetIDataBar();  
			/// dataBar->SetColor(Color::GetOrange());  
			/// //Set Databar properties
			/// dataBar->GetMinICfvo()->SetType(FormatConditionValueType::FormatConditionValueType_Percentile);  
			/// Int32 n = 30;
			/// ObjectPtr obj = NEW Primitive<Int32>(n);
			/// dataBar->GetMinICfvo()->SetValue(obj); 
			/// dataBar->SetShowValue(false); 
			/// dataBar->GetIBarBorder()->SetType(DataBarBorderType::DataBarBorderType_DataBarBorderSolid);  
			/// dataBar->GetIBarBorder()->SetColor(Color::GetPlum());  
			/// dataBar->SetBarFillType(DataBarFillType::DataBarFillType_DataBarFillSolid);  
			/// dataBar->SetAxisColor(Color::GetRed()); 
			/// dataBar->SetAxisPosition(DataBarAxisPosition::DataBarAxisPosition_DataBarAxisMidpoint);   
			/// dataBar->GetINegativeBarFormat()->SetColorType(DataBarNegativeColorType::DataBarNegativeColorType_DataBarColor);   
			/// dataBar->GetINegativeBarFormat()->SetColor(Color::GetWhite());   
			/// dataBar->GetINegativeBarFormat()->SetBorderColorType(DataBarNegativeColorType::DataBarNegativeColorType_DataBarColor);   
			/// dataBar->GetINegativeBarFormat()->SetBorderColor(Color::GetYellow());   
			/// //Put Cell Values
			/// intrusive_ptr<ICell> cell1 = sheet->GetICells()->GetObjectByIndex(new String("A1"));  
			/// cell1->PutValue(10); 
			/// intrusive_ptr<ICell> cell2 = sheet->GetICells()->GetObjectByIndex(new String("A2")); 
			/// cell2->PutValue(120);
			/// intrusive_ptr<ICell> cell3 = sheet->GetICells()->GetObjectByIndex(new String("A3")); 
			/// cell3->PutValue(260);
			/// //Saving the Excel file
			/// workbook->Save(new String("D:\\book1.xlsx"));
			/// 
			/// </code>
			/// </example>
	class ASPOSE_CELLS_API IDataBar : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Gets the color of the axis for cells with conditional formatting as data bars.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Drawing::Color> GetAxisColor()=0;
			/// <summary>
			/// Sets the color of the axis for cells with conditional formatting as data bars.
			/// </summary>
			 virtual void SetAxisColor(intrusive_ptr<Aspose::Cells::Systems::Drawing::Color> value)=0;
			/// <summary>
			/// Gets the position of the axis of the data bars specified by a conditional formatting rule.
			/// </summary>
			 virtual Aspose::Cells::DataBarAxisPosition GetAxisPosition()=0;
			/// <summary>
			/// Sets the position of the axis of the data bars specified by a conditional formatting rule.
			/// </summary>
			 virtual void SetAxisPosition(Aspose::Cells::DataBarAxisPosition value)=0;
			/// <summary>
			/// Gets how a data bar is filled with color.
			/// </summary>
			 virtual Aspose::Cells::DataBarFillType GetBarFillType()=0;
			/// <summary>
			/// Sets how a data bar is filled with color.
			/// </summary>
			 virtual void SetBarFillType(Aspose::Cells::DataBarFillType value)=0;
			/// <summary>
			/// Gets the direction the databar is displayed.
			/// </summary>
			 virtual Aspose::Cells::TextDirectionType GetDirection()=0;
			/// <summary>
			/// Sets the direction the databar is displayed.
			/// </summary>
			 virtual void SetDirection(Aspose::Cells::TextDirectionType value)=0;
			/// <summary>
			/// Gets an object that specifies the border of a data bar.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::IDataBarBorder> 		GetIBarBorder()=0;
			/// <summary>
			/// Gets the NegativeBarFormat object associated with a data bar conditional formatting rule.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::INegativeBarFormat> 		GetINegativeBarFormat()=0;
			/// <summary>
			/// Get this DataBar's min value object.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::IConditionalFormattingValue> 		GetMinICfvo()=0;
			/// <summary>
			/// Set this DataBar's max value object.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::IConditionalFormattingValue> 		GetMaxICfvo()=0;
			/// <summary>
			/// Get this DataBar's Color.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Drawing::Color> GetColor()=0;
			/// <summary>
			/// Set this DataBar's Color.
			/// </summary>
			 virtual void SetColor(intrusive_ptr<Aspose::Cells::Systems::Drawing::Color> value)=0;
			/// <summary>
			/// Represents the min length of data bar . 
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetMinLength()=0;
			/// <summary>
			/// Represents the min length of data bar . 
			/// </summary>
			 virtual void SetMinLength(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Represents the max length of data bar . 
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetMaxLength()=0;
			/// <summary>
			/// Represents the max length of data bar . 
			/// </summary>
			 virtual void SetMaxLength(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Get the flag indicating whether to show the values of the cells on which this data bar is applied.
			/// Default value is true.
			/// </summary>
			 virtual bool GetShowValue()=0;
			/// <summary>
			/// Set the flag indicating whether to show the values of the cells on which this data bar is applied.
			/// Default value is true.
			/// </summary>
			 virtual void SetShowValue(bool value)=0;
			/// <summary>
			/// Render data bar in cell to image byte array.
			/// </summary>
			/// <param name="cell" >Indicate the data bar in which cell to be rendered</param>
			/// <param name="imgOpts" >ImageOrPrintOptions contains some property of output image</param>
			/// <returns/>
			/// 
			 virtual intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Byte>> 		ToImage(intrusive_ptr<Aspose::Cells::ICell> cell , intrusive_ptr<Aspose::Cells::Rendering::IImageOrPrintOptions> imgOpts)=0;

	};
}
}
