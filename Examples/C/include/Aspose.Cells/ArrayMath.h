#pragma once
#include "System/Array2D.h"
#include "System/Collections/ArrayList.h"
//#include "System/Boxing.h"
//#include "System/TypeCode.h"
//#include "System/Math.h"
//#include "System/Double.h"
#include "System/Array.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/DateTime.h"
#include "System/Byte.h"
//#include "System/String.h"
//#include "System/Type.h"
#include "System/Int32.h"
#define STATIC_ARRAYMATH() 

namespace Aspose {
namespace Cells {
class WorkbookSettings;
class Workbook;
}
}

namespace Aspose {
namespace Cells {
namespace FormulaUtility {
	class ArrayMath : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Object*>> Not(intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Object*>> child , intrusive_ptr<Aspose::Cells::WorkbookSettings> settings);
			static bool Equals(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> a1 , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> a2);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> RowColumns(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> objects);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> ExpandArrayParam(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> objects);
			static intrusive_ptr<Aspose::Cells::System::Object> AddSubtractArray(intrusive_ptr<Aspose::Cells::Workbook> workbook , intrusive_ptr<Aspose::Cells::System::Object> object1 , intrusive_ptr<Aspose::Cells::System::Object> object2 , bool add);
			static intrusive_ptr<Aspose::Cells::System::Object> MulArray(intrusive_ptr<Aspose::Cells::Workbook> workbook , intrusive_ptr<Aspose::Cells::System::Object> object1 , intrusive_ptr<Aspose::Cells::System::Object> object2);
			static intrusive_ptr<Aspose::Cells::System::Object> DivArray(intrusive_ptr<Aspose::Cells::Workbook> workbook , intrusive_ptr<Aspose::Cells::System::Object> object1 , intrusive_ptr<Aspose::Cells::System::Object> object2);
			static intrusive_ptr<Aspose::Cells::System::Object> PowerArray(intrusive_ptr<Aspose::Cells::Workbook> workbook , intrusive_ptr<Aspose::Cells::System::Object> object1 , intrusive_ptr<Aspose::Cells::System::Object> object2);
			static intrusive_ptr<Aspose::Cells::System::Object> ConcateArray(intrusive_ptr<Aspose::Cells::System::Array> object1 , intrusive_ptr<Aspose::Cells::System::Array> object2);
			static intrusive_ptr<Aspose::Cells::System::Object> ConcateArray(intrusive_ptr<Aspose::Cells::System::Array> object1 , intrusive_ptr<Aspose::Cells::System::Object> object2);
			static intrusive_ptr<Aspose::Cells::System::Object> ExactArray(intrusive_ptr<Aspose::Cells::Workbook> workbook , intrusive_ptr<Aspose::Cells::System::Object> object1 , intrusive_ptr<Aspose::Cells::System::Object> object2);
			static intrusive_ptr<Aspose::Cells::System::Object> NotArray(intrusive_ptr<Aspose::Cells::Workbook> workbook , intrusive_ptr<Aspose::Cells::System::Object> child);
			static intrusive_ptr<Aspose::Cells::System::Object> IsNumber(intrusive_ptr<Aspose::Cells::System::Object> childResult);
			static intrusive_ptr<Aspose::Cells::System::Object> Abs(intrusive_ptr<Aspose::Cells::Workbook> workbook , intrusive_ptr<Aspose::Cells::System::Object> childResult);
			static bool IsSameLength(intrusive_ptr<Aspose::Cells::System::Array> subArray1 , intrusive_ptr<Aspose::Cells::System::Array> subArray2);
			static intrusive_ptr<Aspose::Cells::System::Object> CreateCorrelList(intrusive_ptr<Aspose::Cells::Workbook> workbook , intrusive_ptr<Aspose::Cells::System::Array> subArray1 , intrusive_ptr<Aspose::Cells::System::Array> subArray2 , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> list1 , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> list2);
			static Aspose::Cells::System::Int32 CountBlank(intrusive_ptr<Aspose::Cells::System::Object> childResult);
			static Aspose::Cells::System::Int32 Count(intrusive_ptr<Aspose::Cells::System::Object> childResult);
			static intrusive_ptr<Aspose::Cells::System::Object> CalculateINT(intrusive_ptr<Aspose::Cells::System::Object> childResult , bool date1904);
			static Aspose::Cells::System::Int32 CountA(intrusive_ptr<Aspose::Cells::System::Object> childResult);
			static intrusive_ptr<Aspose::Cells::System::Object> ROUND(intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Object*>> object1 , intrusive_ptr<Aspose::Cells::System::Object> object2 , intrusive_ptr<Aspose::Cells::Workbook> workbook , Aspose::Cells::System::Int32 type);
			static intrusive_ptr<Aspose::Cells::System::Object> MOD(intrusive_ptr<Aspose::Cells::System::Object> object1 , intrusive_ptr<Aspose::Cells::System::Object> object2 , intrusive_ptr<Aspose::Cells::WorkbookSettings> settings);
			 ArrayMath();
		public:
			virtual ~ArrayMath();
	};

}

}

}
