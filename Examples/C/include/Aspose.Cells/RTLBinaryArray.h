#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Array.h"
#include "System/Char.h"
#include "System/Byte.h"
#include "System/Int32.h"
#define STATIC_RTLBINARYARRAY() 


namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class RTLBinaryArray : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> m_data;
			Aspose::Cells::System::Int32 m_pos;
			 RTLBinaryArray(Aspose::Cells::System::Int32 count);
			void Write(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 index , Aspose::Cells::System::Int32 count);
			void WirteBool(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , bool flag);
			void Write(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> chars , Aspose::Cells::System::Int32 index , Aspose::Cells::System::Int32 count);
			 RTLBinaryArray();
		public:
			virtual ~RTLBinaryArray();
	};

}

}

}
