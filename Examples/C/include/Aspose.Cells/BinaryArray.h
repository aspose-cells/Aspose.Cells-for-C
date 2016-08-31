#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Array.h"
#include "System/Byte.h"
#include "System/Int32.h"
#define STATIC_BINARYARRAY() 


namespace Aspose {
namespace Cells {
namespace FormulaUtility {
	class BinaryArray : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 _pos;
			void Check(Aspose::Cells::System::Int32 length);
	public:

			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> _data;
			 BinaryArray(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data);
			 BinaryArray(Aspose::Cells::System::Int32 length);
			void Write(Aspose::Cells::System::Byte value);
			void Write(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 offset , Aspose::Cells::System::Int32 length);
			void Set(Aspose::Cells::System::Int32 pos , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 offset , Aspose::Cells::System::Int32 length);
			void Insert(Aspose::Cells::System::Int32 pos , Aspose::Cells::System::Int32 length);
			void Seek(Aspose::Cells::System::Int32 length);
			void Read(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 offset);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> ToArray();
			Aspose::Cells::System::Int32 GetLength();
			 BinaryArray();
		public:
			virtual ~BinaryArray();
	};

}

}

}
