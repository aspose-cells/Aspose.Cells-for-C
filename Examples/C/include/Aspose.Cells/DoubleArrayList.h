#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Array.h"
#include "System/Double.h"
#include "System/Int32.h"
#define STATIC_DOUBLEARRAYLIST() 


namespace Aspose {
namespace Cells {
namespace Collections {
	class DoubleArrayList : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> _value;
			Aspose::Cells::System::Int32 _increment;
			Aspose::Cells::System::Int32 _size;
	public:

			 DoubleArrayList(Aspose::Cells::System::Int32 initSize , Aspose::Cells::System::Int32 increment);
			Aspose::Cells::System::Int32 GetCount();
			void Add(Aspose::Cells::System::Double val);
			void Add(Aspose::Cells::System::Double val , Aspose::Cells::System::Int32 count);
			Aspose::Cells::System::Double Get(Aspose::Cells::System::Int32 index);
			void Remove(Aspose::Cells::System::Int32 from , Aspose::Cells::System::Int32 to);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> ToArray();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> GetBuffer();
			 DoubleArrayList();
		public:
			virtual ~DoubleArrayList();
	};

}

}

}
