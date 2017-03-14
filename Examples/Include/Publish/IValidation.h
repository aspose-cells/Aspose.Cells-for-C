#pragma once
#include "System/Object.h"
#include "System/String.h"
#include "System/Collections/ArrayList.h"
#include "System/Int32.h"

namespace Aspose {
	namespace Cells {
		enum OperatorType;
		enum ValidationAlertType;
		enum ValidationType;
		class ICellArea;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			///  Represents data validation settings.
			///  </summary>
			/// <example>
			///  <code>
			///  [C++]
			///  intrusive_ptr<IWorkbook> workbook = Factory::CreateIWorkbook();
			///  intrusive_ptr<IValidationCollection> validations = workbook->GetIWorksheets()->GetObjectByIndex(0)->GetIValidations();
			///  intrusive_ptr<IValidation> validation = validations->GetObjectByIndex(validations->Add());
			///  validation->SetType(ValidationType_WholeNumber);
			///  validation->SetOperator(OperatorType_Between);
			///  validation->SetFormula1(new String("3"));
			///  validation->SetFormula2(new String("1234"));
			///  
			///  intrusive_ptr<ICellArea> area = Factory::CreateICellArea();
			///  area->SetstartRow(0);
			///  area->SetendRow(1);
			///  area->SetstartColumn(0);
			///  area->SetendColumn(1);
			///  
			///  validation->GetAreaList()->Add(area);
			/// 
			///  </code>
			/// 
			///  </example>
	class ASPOSE_CELLS_API IValidation : public Aspose::Cells::System::Object
	{
		public:
			/// <summary>
			/// Represents the operator for the data validation.
			/// </summary>
			 virtual Aspose::Cells::OperatorType GetOperator()=0;
			/// <summary>
			/// Represents the operator for the data validation.
			/// </summary>
			 virtual void SetOperator(Aspose::Cells::OperatorType value)=0;
			/// <summary>
			/// Represents the validation alert style.
			/// </summary>
			 virtual Aspose::Cells::ValidationAlertType GetAlertStyle()=0;
			/// <summary>
			/// Represents the validation alert style.
			/// </summary>
			 virtual void SetAlertStyle(Aspose::Cells::ValidationAlertType value)=0;
			/// <summary>
			/// Represents the data validation type.
			/// </summary>
			 virtual Aspose::Cells::ValidationType GetType()=0;
			/// <summary>
			/// Represents the data validation type.
			/// </summary>
			 virtual void SetType(Aspose::Cells::ValidationType value)=0;
			/// <summary>
			/// Represents the data validation input message.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetInputMessage()=0;
			/// <summary>
			/// Represents the data validation input message.
			/// </summary>
			 virtual void SetInputMessage(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Represents the title of the data-validation input dialog box.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetInputTitle()=0;
			/// <summary>
			/// Represents the title of the data-validation input dialog box.
			/// </summary>
			 virtual void SetInputTitle(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Represents the data validation error message.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetErrorMessage()=0;
			/// <summary>
			/// Represents the data validation error message.
			/// </summary>
			 virtual void SetErrorMessage(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Represents the title of the data-validation error dialog box. 
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetErrorTitle()=0;
			/// <summary>
			/// Represents the title of the data-validation error dialog box. 
			/// </summary>
			 virtual void SetErrorTitle(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Indicates whether the data validation input message will be displayed whenever the user selects a cell in the data validation range.
			/// </summary>
			 virtual bool GetShowInput()=0;
			/// <summary>
			/// Indicates whether the data validation input message will be displayed whenever the user selects a cell in the data validation range.
			/// </summary>
			 virtual void SetShowInput(bool value)=0;
			/// <summary>
			/// Indicates whether the data validation error message will be displayed whenever the user enters invalid data. 
			/// </summary>
			 virtual bool GetShowError()=0;
			/// <summary>
			/// Indicates whether the data validation error message will be displayed whenever the user enters invalid data. 
			/// </summary>
			 virtual void SetShowError(bool value)=0;
			/// <summary>
			/// Indicates whether blank values are permitted by the range data validation.
			/// </summary>
			 virtual bool GetIgnoreBlank()=0;
			/// <summary>
			/// Indicates whether blank values are permitted by the range data validation.
			/// </summary>
			 virtual void SetIgnoreBlank(bool value)=0;
			/// <summary>
			/// Represents the value or expression associated with the data validation.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetFormula1()=0;
			/// <summary>
			/// Represents the value or expression associated with the data validation.
			/// </summary>
			 virtual void SetFormula1(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Represents the first value associated with the data validation.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::Object> GetValue1()=0;
			/// <summary>
			/// Represents the first value associated with the data validation.
			/// </summary>
			 virtual void SetValue1(intrusive_ptr<Aspose::Cells::System::Object> value)=0;
			/// <summary>
			/// Represents the first value associated with the data validation.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::Object> GetValue2()=0;
			/// <summary>
			/// Represents the first value associated with the data validation.
			/// </summary>
			 virtual void SetValue2(intrusive_ptr<Aspose::Cells::System::Object> value)=0;
			/// <summary>
			/// Represents the value or expression associated with the second part of the data validation. 
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetFormula2()=0;
			/// <summary>
			/// Represents the value or expression associated with the second part of the data validation. 
			/// </summary>
			 virtual void SetFormula2(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Indicates whether data validation displays a drop-down list that contains acceptable values.
			/// </summary>
			 virtual bool GetInCellDropDown()=0;
			/// <summary>
			/// Indicates whether data validation displays a drop-down list that contains acceptable values.
			/// </summary>
			 virtual void SetInCellDropDown(bool value)=0;
			/// <summary>
			/// Represents a collection of <see cref="CellArea" />
			///  which contains the data validation settings.
			/// </summary>
			/// <remarks>
			/// The old validations on the area will not be removed if directly adding are to this list.
			/// </remarks>
			 virtual intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> GetAreaList()=0;
			/// <summary>
			/// Applies the validation to the area.
			/// </summary>
			/// <param name="cellArea" >The area.</param>
			/// <remarks>
			/// In this method, we will remove all old validations on this area.
			/// </remarks>
			 virtual void 		AddArea(intrusive_ptr<Aspose::Cells::ICellArea> cellArea)=0;
			/// <summary>
			/// Remove the validation settings in the range.
			/// </summary>
			/// <param name="cellArea" >The range which contains the data validation settings.</param>
			 virtual void 		RemoveArea(intrusive_ptr<Aspose::Cells::ICellArea> cellArea)=0;
			/// <summary>
			/// Remove the validation settings in the cell.
			/// </summary>
			/// <param name="row" >The row index.</param>
			/// <param name="column" > The column index.</param>
			 virtual void RemoveACell(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column)=0;

	};
}
}
