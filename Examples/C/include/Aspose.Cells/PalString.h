#pragma once
#include "System/String.h"
#include "System/Object.h"
#include "System/Int32.h"
#define STATIC_PALSTRING() 


namespace Aspose {
namespace Cells {
namespace Internal {
namespace Porting {
	class PalString : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			 PalString();
	public:

			static bool Equals(intrusive_ptr<Aspose::Cells::System::String> a , Aspose::Cells::System::Int32 indexA , intrusive_ptr<Aspose::Cells::System::String> b , Aspose::Cells::System::Int32 indexB , Aspose::Cells::System::Int32 length);
			static bool EqualsIgnoreCase(intrusive_ptr<Aspose::Cells::System::String> a , intrusive_ptr<Aspose::Cells::System::String> b);
			static bool ReferenceEquals(intrusive_ptr<Aspose::Cells::System::String> a , intrusive_ptr<Aspose::Cells::System::String> b);
		public:
			virtual ~PalString();
	};

}

}

}

}
