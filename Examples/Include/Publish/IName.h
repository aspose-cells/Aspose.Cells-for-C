#pragma once
#include "System/Object.h"
#include "System/String.h"
#include "System/Int32.h"
#include "System/Array1D.h"

namespace Aspose {
	namespace Cells {
		class IRange;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			///  Represents a defined name for a range of cells.
			///  </summary>
			/// <example>
			///  <code>
			///  
			///  [C++]
			///  
			///  //Instantiating a Workbook object
			///  intrusive_ptr<Aspose::Cells::IWorkbook> workbook = Factory::CreateIWorkbook();
			///  //Accessing the first worksheet in the Excel file
			///  intrusive_ptr<Aspose::Cells::IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);
			///  //Creating a named range
			///  intrusive_ptr<IRange> range = worksheet->GetICells()->CreateIRange(new String("B4"), new String("G14"));
			///  //Setting the name of the named range
			///  range->SetName(new String("TestRange"));
			///  //Saving the modified Excel file in default (that is Excel 2000) format
			///  workbook->Save(new String("C:\\INameTestOutput.xls")); 
			/// 
			///  </code>
			/// 
			///  </example>
	class ASPOSE_CELLS_API IName : public Aspose::Cells::System::Object
	{
		public:
			/// <summary>
			/// Gets the comment of the name.
			/// Only applies for Excel 2007.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetComment()=0;
			/// <summary>
			/// Sets the comment of the name.
			/// Only applies for Excel 2007.
			/// </summary>
			 virtual void SetComment(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Gets the name text of the object.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetText()=0;
			/// <summary>
			/// Gets the name text of the object.
			/// </summary>
			 virtual void SetText(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Gets the name full text of the object with the scope setting.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetFullText()=0;
			/// <summary>
			/// Returns or sets the formula that the name is defined to refer to, beginning with an equal sign.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetRefersTo()=0;
			/// <summary>
			/// Returns or sets the formula that the name is defined to refer to, beginning with an equal sign.
			/// </summary>
			 virtual void SetRefersTo(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			///  Gets a R1C1 reference of the <see cref="IName" />
			/// .
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetR1C1RefersTo()=0;
			/// <summary>
			///  Sets a R1C1 reference of the <see cref="IName" />
			/// .
			/// </summary>
			 virtual void SetR1C1RefersTo(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Indicates whether this name is referred by other formulas.
			/// </summary>
			 virtual bool IsReferred()=0;
			/// <summary>
			/// Indicates whether the name is visible. 
			/// </summary>
			 virtual bool IsVisible()=0;
			/// <summary>
			/// Indicates whether the name is visible. 
			/// </summary>
			 virtual void SetIsVisible(bool value)=0;
			/// <summary>
			/// Indicates this name belongs to Workbook or Worksheet.
			/// 0 = Global name, otherwise index to sheet (one-based)
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetSheetIndex()=0;
			/// <summary>
			/// Indicates this name belongs to Workbook or Worksheet.
			/// 0 = Global name, otherwise index to sheet (one-based)
			/// </summary>
			 virtual void SetSheetIndex(Aspose::Cells::System::Int32 value)=0;
			/// <summary>
			/// Returns a string represents the current Range object.
			/// </summary>
			/// <returns/>
			/// 
			  virtual intrusive_ptr<Aspose::Cells::System::String> ToString()=0;
			/// <summary>
			/// Gets all ranges which referred by this name.
			/// </summary>
			/// <returns>All ranges.</returns>
			 virtual intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::IRange*>> 		GetIRanges()=0;
			/// <summary>
			/// Gets the range if this name refers to a range.
			/// </summary>
			/// <returns>The range.</returns>
			 virtual intrusive_ptr<Aspose::Cells::IRange> 		GetIRange()=0;
			/// <summary>
			/// Gets the range if this name refers to a range.
			/// If the reference is not absolute reference, the range will be different in different cell.
			/// </summary>
			/// <param name="sheetIndex" >The according sheet index.</param>
			/// <param name="row" >The according row index.</param>
			/// <param name="column" >The according column index</param>
			/// <returns>The range.</returns>
			 virtual intrusive_ptr<Aspose::Cells::IRange> 		GetIRange(Aspose::Cells::System::Int32 sheetIndex , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column)=0;

	};
}
}
