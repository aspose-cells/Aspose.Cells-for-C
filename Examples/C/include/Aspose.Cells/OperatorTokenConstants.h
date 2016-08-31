#pragma once
#include "System/Byte.h"
#include "System/Array1D.h"
#include "System/Object.h"
#define STATIC_OPERATORTOKENCONSTANTS() 


namespace Aspose {
namespace Cells {
namespace FormulaUtility {
	class OperatorTokenConstants : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> Static_Array_Init_Uplus();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> Static_Array_Init_Uminus();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> Static_Array_Init_Percent();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> Static_Array_Init_Parentheses();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> Static_Array_Init_Miss();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> Static_Array_Init_Add();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> Static_Array_Init_Sub();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> Static_Array_Init_Mul();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> Static_Array_Init_Div();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> Static_Array_Init_Power();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> Static_Array_Init_Concat();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> Static_Array_Init_LT();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> Static_Array_Init_LE();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> Static_Array_Init_EQ();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> Static_Array_Init_GE();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> Static_Array_Init_GT();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> Static_Array_Init_NE();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> Static_Array_Init_Isect();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> Static_Array_Init_List();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> Static_Array_Init_Range();
	public:

			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> Uplus;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> Uminus;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> Percent;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> Parentheses;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> Miss;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> Add;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> Sub;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> Mul;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> Div;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> Power;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> Concat;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> LT;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> LE;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> EQ;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> GE;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> GT;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> NE;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> Isect;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> List;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> Range;
			 OperatorTokenConstants();
		public:
			virtual ~OperatorTokenConstants();
	};

}

}

}
