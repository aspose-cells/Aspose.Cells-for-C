#pragma once
//#include "System/StringHelperPal.h"
#include "System/Array1D.h"
#include "System/Int32.h"
#include "System/String.h"
#include "System/Object.h"
#define STATIC_IMPORTTABLEOPTIONS() 


namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API ImportTableOptions : public Aspose::Cells::System::Object
#else	class ImportTableOptions : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			bool m_ConvertStyle;
			bool m_IsHtmlString;
			bool m_ConvertNumericData;
			bool m_InsertRows;
			bool m_IsFieldNameShown;
			intrusive_ptr<Aspose::Cells::System::String> m_DateFormat;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> m_NumberFormats;
			Aspose::Cells::System::Int32 m_RowCount;
			Aspose::Cells::System::Int32 m_ColumnCount;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> m_Columns;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> m_defaultValues;
	public:

			 ImportTableOptions();
			bool GetConvertGridStyle();
			void SetConvertGridStyle(bool value);
			bool GetConvertNumericData();
			void SetConvertNumericData(bool value);
			bool GetInsertRows();
			void SetInsertRows(bool value);
			bool IsFieldNameShown();
			void SetIsFieldNameShown(bool value);
			intrusive_ptr<Aspose::Cells::System::String> GetDateFormat();
			void SetDateFormat(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> GetNumberFormats();
			void SetNumberFormats(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> value);
			Aspose::Cells::System::Int32 GetTotalRows();
			void SetTotalRows(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 GetTotalColumns();
			void SetTotalColumns(Aspose::Cells::System::Int32 value);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> GetColumnIndexes();
			void SetColumnIndexes(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> value);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> GetDefaultValues();
			void SetDefaultValues(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> value);
			bool IsHtmlString();
			void SetIsHtmlString(bool value);
			intrusive_ptr<Aspose::Cells::System::Object> GetDefaultValue(Aspose::Cells::System::Int32 offset);
		public:
			virtual ~ImportTableOptions();
	};

}

}
