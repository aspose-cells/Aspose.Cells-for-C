#pragma once
#include "System/Byte.h"
#include "System/Array.h"
#include "System/Array2D.h"
#include "System/Object.h"
#include "System/Char.h"
#include "System/Single.h"
#include "System/Int16.h"
#include "System/Double.h"
#include "System/Int32.h"
#include "System/Int64.h"
#include "System/Array1D.h"
#define STATIC_PALARRAYUTIL() 


namespace Aspose {
namespace Cells {
namespace Internal {
namespace Porting {
	class PalArrayUtil : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static bool IsArray(intrusive_ptr<Aspose::Cells::System::Object> obj);
			static intrusive_ptr<Aspose::Cells::System::Array> ToArray(intrusive_ptr<Aspose::Cells::System::Object> value);
			static intrusive_ptr<Aspose::Cells::System::Object> GetValue(intrusive_ptr<Aspose::Cells::System::Object> obj , Aspose::Cells::System::Int32 index);
			static Aspose::Cells::System::Int32 GetLength(intrusive_ptr<Aspose::Cells::System::Object> obj);
			static Aspose::Cells::System::Int32 GetLength(intrusive_ptr<Aspose::Cells::System::Object> obj , Aspose::Cells::System::Int32 dim);
			static intrusive_ptr<Aspose::Cells::System::Array> CreateArray(Aspose::Cells::System::Int32 length);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> ToDoubleArray(intrusive_ptr<Aspose::Cells::System::Array> array);
			static Aspose::Cells::System::Int32 GetUpperBound(intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Object*>> array , Aspose::Cells::System::Int32 Dimension);
			static Aspose::Cells::System::Int32 GetUpperBound(intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Int32>> array , Aspose::Cells::System::Int32 Dimension);
			static Aspose::Cells::System::Int32 GetUpperBound(intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Double>> array , Aspose::Cells::System::Int32 Dimension);
			static void Fill(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> array , Aspose::Cells::System::Int32 fromIndex , Aspose::Cells::System::Int32 toIndex , Aspose::Cells::System::Byte value);
			static void Fill(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int16>> array , Aspose::Cells::System::Int32 fromIndex , Aspose::Cells::System::Int32 toIndex , Aspose::Cells::System::Int16 value);
			static void Fill(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> array , Aspose::Cells::System::Int32 fromIndex , Aspose::Cells::System::Int32 toIndex , Aspose::Cells::System::Char value);
			static void Fill(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> array , Aspose::Cells::System::Int32 fromIndex , Aspose::Cells::System::Int32 toIndex , Aspose::Cells::System::Int32 value);
			static void Fill(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Single>> array , Aspose::Cells::System::Int32 fromIndex , Aspose::Cells::System::Int32 toIndex , Aspose::Cells::System::Single value);
			static void Fill(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int64>> array , Aspose::Cells::System::Int32 fromIndex , Aspose::Cells::System::Int32 toIndex , Aspose::Cells::System::Int64 value);
			static void Fill(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> array , Aspose::Cells::System::Int32 fromIndex , Aspose::Cells::System::Int32 toIndex , Aspose::Cells::System::Double value);
			static void Fill(intrusive_ptr<Aspose::Cells::System::Array1D<bool>> array , Aspose::Cells::System::Int32 fromIndex , Aspose::Cells::System::Int32 toIndex , bool value);
			static void Fill(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> array , Aspose::Cells::System::Int32 fromIndex , Aspose::Cells::System::Int32 toIndex , intrusive_ptr<Aspose::Cells::System::Object> value);
			 PalArrayUtil();
		public:
			virtual ~PalArrayUtil();
	};

}

}

}

}
