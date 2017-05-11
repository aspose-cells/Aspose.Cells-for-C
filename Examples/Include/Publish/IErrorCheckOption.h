#pragma once
#include "System/Object.h"
#include "System/Int32.h"

namespace Aspose {
	namespace Cells {
		enum ErrorCheckType;
		class ICellArea;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Error check setting applied on certain ranges.
			/// </summary>
			/// <example><code>
			/// 
			/// [C++]
			/// 
			/// intrusive_ptr<IWorkbook> workbook = Factory::CreateIWorkbook();
			/// intrusive_ptr<IErrorCheckOptionCollection> opts = workbook->GetIWorksheets()->GetObjectByIndex(0)->GetIErrorCheckOptions();
			/// int optionIdx = opts->Add();
			/// intrusive_ptr<IErrorCheckOption> opt = opts->GetObjectByIndex(optionIdx);
			/// opt->SetErrorCheck(ErrorCheckType_InconsistFormula, false);
			/// opt->SetErrorCheck(ErrorCheckType_InconsistRange, false);
			/// opt->SetErrorCheck(ErrorCheckType_TextDate, false);
			/// opt->SetErrorCheck(ErrorCheckType_TextNumber, false);
			/// opt->SetErrorCheck(ErrorCheckType_Validation, false);
			/// opt->AddRange(ICellArea::CreateICellArea(new String("A1"), new String("B10")));
			/// workbook->Save(new String("D:\\Book1.xlsx"));
			/// </code>
			/// </example>
	class ASPOSE_CELLS_API IErrorCheckOption : public Aspose::Cells::System::Object
	{
		public:
			/// <summary>
			/// Checks whether given error type will be checked.
			/// </summary>
			/// <param name="errorCheckType" >error type can be checked</param>
			/// <returns>return true if given error type will be checked.</returns>
			 virtual bool IsErrorCheck(Aspose::Cells::ErrorCheckType errorCheckType)=0;
			/// <summary>
			/// Sets whether given error type will be checked.
			/// </summary>
			/// <param name="errorCheckType" >error type can be checked.</param>
			/// <param name="isCheck" >true if given error type needs to be checked.</param>
			 virtual void SetErrorCheck(Aspose::Cells::ErrorCheckType errorCheckType , bool isCheck)=0;
			/// <summary>
			/// Gets the count of ranges that influenced by this setting.
			/// </summary>
			/// <returns>the count of ranges that influenced by this setting.</returns>
			 virtual Aspose::Cells::System::Int32 GetCountOfRange()=0;
			/// <summary>
			/// Adds one influenced range by this setting.
			/// </summary>
			/// <param name="ca" >the range to be added.</param>
			/// <returns>the index of the added range in the range list of this setting.</returns>
			 virtual Aspose::Cells::System::Int32 		AddRange(intrusive_ptr<Aspose::Cells::ICellArea> ca)=0;
			/// <summary>
			///  Gets the influenced range of this setting by given index.
			/// </summary>
			/// <param name="index" >the index of range</param>
			/// <returns>return influenced range at given index.</returns>
			 virtual intrusive_ptr<Aspose::Cells::ICellArea> 		GetIRange(Aspose::Cells::System::Int32 index)=0;
			/// <summary>
			/// Removes one range by given index.
			/// </summary>
			/// <param name="index" >the index of the range to be removed.</param>
			 virtual void RemoveRange(Aspose::Cells::System::Int32 index)=0;

	};
}
}
