#pragma once
#include "IMEModeType.h"
//#include "System/Globalization/CultureInfo.h"
//#include "System/Exception.h"
//#include "System/UInt16.h"
#include "System/Collections/ArrayList.h"
//#include "System/Boxing.h"
#include "System/Byte.h"
//#include "System/Int16.h"
#include "OperatorType.h"
//#include "System/Math.h"
//#include "System/Char.h"
//#include "System/BitConverter.h"
//#include "System/Double.h"
//#include "System/Array.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "ValidationType.h"
#include "System/Array1D.h"
//#include "System/DateTime.h"
#include "ValidationAlertType.h"
#include "System/String.h"
#include "System/Int32.h"
#define STATIC_VALIDATION() 

namespace Aspose {
namespace Cells {
class Worksheet;
class CellArea;
class CopyOptions;
class ValidationCollection;
class WorksheetCollection;
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API Validation : public Aspose::Cells::System::Object
#else	class Validation : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			Aspose::Cells::ValidationCollection* m_Validations;
			bool m_IsDefault;
			Aspose::Cells::OperatorType m_Operator;
			Aspose::Cells::ValidationAlertType m_AlertStyle;
			Aspose::Cells::ValidationType m_Type;
			intrusive_ptr<Aspose::Cells::System::String> m_InputMessage;
			intrusive_ptr<Aspose::Cells::System::String> m_InputTitle;
			intrusive_ptr<Aspose::Cells::System::String> m_ErrorMessage;
			intrusive_ptr<Aspose::Cells::System::String> m_ErrorTitle;
			bool m_ShowInput;
			bool m_ShowError;
			bool m_IgnoreBlank;
			intrusive_ptr<Aspose::Cells::System::String> m_Formula1;
			intrusive_ptr<Aspose::Cells::System::String> m_Formula2;
			bool m_InCellDropDown;
			Aspose::Cells::IMEModeType m_IMEMode;
			void ShiftTotalColumns(intrusive_ptr<Aspose::Cells::CellArea> valArea , Aspose::Cells::System::Int32 i , Aspose::Cells::System::Int32 shiftNumber);
			void ShiftPartColumns1(intrusive_ptr<Aspose::Cells::CellArea> valArea , intrusive_ptr<Aspose::Cells::CellArea> area , Aspose::Cells::System::Int32& i , Aspose::Cells::System::Int32 shiftNumber);
			void ShiftPartColumns2(intrusive_ptr<Aspose::Cells::CellArea> valArea , intrusive_ptr<Aspose::Cells::CellArea> area , Aspose::Cells::System::Int32& i , Aspose::Cells::System::Int32 shiftNumber);
	public:

			 Validation(intrusive_ptr<Aspose::Cells::ValidationCollection> dvs);
			bool IsDefault();
			Aspose::Cells::OperatorType GetOperator();
			void SetOperator(Aspose::Cells::OperatorType value);
			Aspose::Cells::ValidationAlertType GetAlertStyle();
			void SetAlertStyle(Aspose::Cells::ValidationAlertType value);
			Aspose::Cells::ValidationType GetType();
			void SetType(Aspose::Cells::ValidationType value);
			intrusive_ptr<Aspose::Cells::System::String> GetInputMessage();
			void SetInputMessage(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> GetInputTitle();
			void SetInputTitle(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> GetErrorMessage();
			void SetErrorMessage(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> GetErrorTitle();
			void SetErrorTitle(intrusive_ptr<Aspose::Cells::System::String> value);
			bool GetShowInput();
			void SetShowInput(bool value);
			bool GetShowError();
			void SetShowError(bool value);
			bool GetIgnoreBlank();
			void SetIgnoreBlank(bool value);
			intrusive_ptr<Aspose::Cells::System::String> GetFormula1();
			void SetFormula1(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::Object> GetValue1();
			void SetValue1(intrusive_ptr<Aspose::Cells::System::Object> value);
			intrusive_ptr<Aspose::Cells::System::Object> GetValue2();
			void SetValue2(intrusive_ptr<Aspose::Cells::System::Object> value);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> GetCostantToken(intrusive_ptr<Aspose::Cells::System::Object> obj);
			intrusive_ptr<Aspose::Cells::System::String> GetFormula2();
			void SetFormula2(intrusive_ptr<Aspose::Cells::System::String> value);
			void SetInternalFormula1(intrusive_ptr<Aspose::Cells::System::String> formula1);
			void SetInternalFormula2(intrusive_ptr<Aspose::Cells::System::String> formula2);
			bool GetInCellDropDown();
			void SetInCellDropDown(bool value);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> GetStartRC();
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> Areas;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> GetAreaList();
			void AddArea(intrusive_ptr<Aspose::Cells::CellArea> cellArea);
			void RemoveArea(intrusive_ptr<Aspose::Cells::CellArea> cellArea);
			static intrusive_ptr<Aspose::Cells::CellArea> InsectArea(intrusive_ptr<Aspose::Cells::CellArea> ca1 , intrusive_ptr<Aspose::Cells::CellArea> ca2 , bool& flag);
			void RemoveACell(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			void InsertColumns(Aspose::Cells::System::Int32 columnIndex , Aspose::Cells::System::Int32 number , intrusive_ptr<Aspose::Cells::Worksheet> sheet);
			void InsertRows(Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 number , intrusive_ptr<Aspose::Cells::Worksheet> sheet);
			Aspose::Cells::IMEModeType GetIMEMode();
			void SetIMEMode(Aspose::Cells::IMEModeType value);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> BinaryFormula1;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> BinaryFormula2;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> GetFormula1Data();
			void SetFormula1Data(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> value);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> GetFormula2Data();
			void SetFormula2Data(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> value);
			void CopyData(intrusive_ptr<Aspose::Cells::Validation> source);
			void Copy(intrusive_ptr<Aspose::Cells::Validation> source , intrusive_ptr<Aspose::Cells::CopyOptions> copyOption);
			void Copy(intrusive_ptr<Aspose::Cells::Validation> source , intrusive_ptr<Aspose::Cells::CellArea> ca , intrusive_ptr<Aspose::Cells::Worksheet> sheet , intrusive_ptr<Aspose::Cells::CopyOptions> copyOption);
			bool HasMehodB();
			void ShiftColumns(intrusive_ptr<Aspose::Cells::CellArea> area , Aspose::Cells::System::Int32 shiftNumber);
			void CreateFormula(Aspose::Cells::System::Int32& row , Aspose::Cells::System::Int32& column);
			void SetReadFormula(intrusive_ptr<Aspose::Cells::System::String> formula1 , intrusive_ptr<Aspose::Cells::System::String> formula2);
			intrusive_ptr<Aspose::Cells::System::String> GetOriginalListFormula();
			bool ReferToOtherWorksheets();
			static intrusive_ptr<Aspose::Cells::System::Object> GetConditionValue(intrusive_ptr<Aspose::Cells::Validation> v , intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos , Aspose::Cells::ValidationType type);
			static intrusive_ptr<Aspose::Cells::System::String> GetCondition(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos , Aspose::Cells::ValidationType type , Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 startColumn);
			 Validation();
		public:
			virtual ~Validation();
	};

}

}
