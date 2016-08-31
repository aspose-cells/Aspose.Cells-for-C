#pragma once
//#include "System/StringHelperPal.h"
#include "System/Array1D.h"
//#include "System/Array.h"
#include "System/Byte.h"
//#include "System/Int32.h"
#include "System/String.h"
#include "System/UInt16.h"
#include "System/Object.h"
#define STATIC_SXTAG() 


namespace Aspose {
namespace Cells {
namespace Pivot {
	class SxTag : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::System::String> _Name;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> _Data;
			Aspose::Cells::System::UInt16 _Unkown;
			 SxTag(intrusive_ptr<Aspose::Cells::System::String> name);
			bool IsSelected();
			void SetIsSelected(bool value);
			 SxTag();
			void Copy(intrusive_ptr<Aspose::Cells::Pivot::SxTag> source);
		public:
			virtual ~SxTag();
	};

}

}

}
