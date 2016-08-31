#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Single.h"
#include "System/Char.h"
#include "System/Byte.h"
#include "System/Int32.h"
#define STATIC_ARRAYUTIL() 


namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
	class ArrayUtil : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			 ArrayUtil();
	public:

			static bool IsArrayEqual(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> array1 , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> array2);
			static bool IsArrayEqual(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> array1 , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> array2);
			static bool IsArrayEqual(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Single>> array1 , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Single>> array2);
			static Aspose::Cells::System::Int32 BinarySearch(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> array , Aspose::Cells::System::Int32 index , Aspose::Cells::System::Int32 length , Aspose::Cells::System::Int32 value);
			static void SetBytes(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> array , Aspose::Cells::System::Byte value , Aspose::Cells::System::Int32 offset , Aspose::Cells::System::Int32 length);
			static bool CompareBytes(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> array1 , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> array2 , Aspose::Cells::System::Int32 length);
			static void SwapBytes(Aspose::Cells::System::Byte& b1 , Aspose::Cells::System::Byte& b2);
		public:
			virtual ~ArrayUtil();
	};

}

}

}

}
