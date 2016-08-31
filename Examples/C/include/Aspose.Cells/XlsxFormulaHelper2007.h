#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Int16.h"
//#include "System/Array.h"
#include "System/Byte.h"
#include "System/Int32.h"
//#include "System/UInt16.h"
//#include "System/BitConverter.h"
#define STATIC_XLSXFORMULAHELPER2007() 


namespace Aspose {
namespace Cells {
namespace FormulaUtility {
namespace Formula2007 {
	class XlsxFormulaHelper2007 : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static Aspose::Cells::System::Int32 GetColumn(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 offset);
			static Aspose::Cells::System::Int32 GetRow(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 offset);
			static Aspose::Cells::System::Int32 GetRefRow(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 offset , Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Byte flag);
			static void SetRow(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 offset , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 startRow , bool isAbsolute , bool isReference);
			static void SetColumn1(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 offset , Aspose::Cells::System::Int32 column , Aspose::Cells::System::Int32 startColumn , bool isAbsolute , bool isReference);
			static void SetColumn(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 offset , Aspose::Cells::System::Int32 column , Aspose::Cells::System::Int32 startColumn , bool isAbsolute , bool isReference);
			static Aspose::Cells::System::Int32 GetRefColumn(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 offset , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Byte flag);
			 XlsxFormulaHelper2007();
		public:
			virtual ~XlsxFormulaHelper2007();
	};

}

}

}

}
