#pragma once
#include "System/Object.h"
//#include "System/Int16.h"
#include "System/Byte.h"
#include "System/Collections/ArrayList.h"
#include "System/UInt16.h"
//#include "System/Int32.h"
#define STATIC_SXFILT() 


namespace Aspose {
namespace Cells {
namespace Pivot {
	class SxFilt : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			void ResetFunction();
	public:

			Aspose::Cells::System::UInt16 Option1;
			Aspose::Cells::System::UInt16 Option2;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> ItemIndexes;
			bool isData;
			bool isDefault;
			bool isSum;
			bool isCountA;
			bool isAverage;
			bool isMax;
			bool isMin;
			bool isProduct;
			bool isCount;
			bool isStdev;
			bool isStdevp;
			bool isVar;
			bool isVarp;
			bool isBlank;
			void Copy(intrusive_ptr<Aspose::Cells::Pivot::SxFilt> filt);
			Aspose::Cells::System::UInt16 GetFunction();
			void SetFunction(Aspose::Cells::System::UInt16 value);
			Aspose::Cells::System::UInt16 GetisXvd();
			void SetisXvd(Aspose::Cells::System::UInt16 value);
			Aspose::Cells::System::Byte GetSxAxis();
			void SetSxAxis(Aspose::Cells::System::Byte value);
			Aspose::Cells::System::Byte GetDim();
			void SetDim(Aspose::Cells::System::Byte value);
			bool GetSelect();
			void SetSelect(bool value);
			 SxFilt();
		public:
			virtual ~SxFilt();
	};

}

}

}
