#pragma once
#include "System/Char.h"
#include "System/String.h"
#include "System/Object.h"
//#include "System/IO/Path.h"
#define STATIC_PALPATHUTIL() 


namespace Aspose {
namespace Cells {
namespace Internal {
namespace Porting {
	class PalPathUtil : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static Aspose::Cells::System::Char GetDirectorySeparatorChar();
			static intrusive_ptr<Aspose::Cells::System::String> GetPathRoot(intrusive_ptr<Aspose::Cells::System::String> path);
			static intrusive_ptr<Aspose::Cells::System::String> GetFileName(intrusive_ptr<Aspose::Cells::System::String> path);
			static intrusive_ptr<Aspose::Cells::System::String> GetExtension(intrusive_ptr<Aspose::Cells::System::String> path);
			static intrusive_ptr<Aspose::Cells::System::String> GetDirectoryName(intrusive_ptr<Aspose::Cells::System::String> path);
			 PalPathUtil();
		public:
			virtual ~PalPathUtil();
	};

}

}

}

}
