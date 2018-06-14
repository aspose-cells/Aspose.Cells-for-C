#pragma once
#include "System/Object.h"
#include "System/String.h"
#include "System/Array1D.h"
#include "System/Int32.h"

namespace Aspose {
	namespace Cells {
		class IWorkbook;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Encapsulates the object that represents a designer spreadsheet.
			/// </summary>
	class ASPOSE_CELLS_API IWorkbookDesigner : public Aspose::Cells::System::Object
	{
		public:
			/// <summary>
			/// Gets and sets the <see cref="IWorkbook" />
			///  object.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::IWorkbook> 		GetIWorkbook()=0;
			/// <summary>
			/// Gets and sets the <see cref="IWorkbook" />
			///  object.
			/// </summary>
			 virtual void 		SetIWorkbook(intrusive_ptr<Aspose::Cells::IWorkbook> value)=0;
			/// <summary>
			/// Clears all data sources.
			/// </summary>
			 virtual void ClearDataSource()=0;
			/// <summary>
			/// Sets data binding to a variable.
			/// </summary>
			/// <param name="variable" >Variable name created using smark marker.</param>
			/// <param name="data" >Source data.</param>
			 virtual void SetDataSource(intrusive_ptr<Aspose::Cells::System::String> variable , intrusive_ptr<Aspose::Cells::System::Object> data)=0;
			/// <summary>
			/// Sets data array binding to a variable.
			/// </summary>
			/// <param name="variable" >Variable name created using smark marker.</param>
			/// <param name="dataArray" >Source data array.</param>
			 virtual void SetDataSource(intrusive_ptr<Aspose::Cells::System::String> variable , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> dataArray)=0;
			/// <summary>
			/// Indicates if references in other worksheets will be updated.
			/// </summary>
			 virtual bool GetUpdateReference()=0;
			/// <summary>
			/// Indicates if references in other worksheets will be updated.
			/// </summary>
			 virtual void SetUpdateReference(bool value)=0;
			/// <summary>
			/// Indicates whether formulas should be calculated.
			/// </summary>
			 virtual bool GetCalculateFormula()=0;
			/// <summary>
			/// Indicates whether formulas should be calculated.
			/// </summary>
			 virtual void SetCalculateFormula(bool value)=0;
			/// <summary>
			/// Processes the smart markers and populates the data source values.
			/// </summary>
			 virtual void Process()=0;
			/// <summary>
			/// Processes the smart markers and populates the data source values.
			/// </summary>
			/// <param name="isPreserved" >True if the unrecognized smart marker is preserved.</param>
			 virtual void Process(bool isPreserved)=0;
			/// <summary>
			/// Processes the smart markers and populates the data source values.
			/// </summary>
			/// <param name="sheetIndex" >Worksheet index.</param>
			/// <param name="isPreserved" >True if the unrecognized smart marker is preserved.</param>
			/// <remarks>This method works on worksheet level.</remarks>
			 virtual void Process(Aspose::Cells::System::Int32 sheetIndex , bool isPreserved)=0;
			/// <summary>
			/// Returns a collection of smart markers in a spreadsheet.
			/// </summary>
			/// <returns>A collection of smart markers</returns>
			/// <remarks>A string array is created on every call. The array is sorted and duplicated values are removed.</remarks>
			 virtual intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> GetSmartMarkers()=0;

	};
}
}
