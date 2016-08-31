#pragma once
#include "System/String.h"
#include "System/Object.h"
#define STATIC_ASSEMBLYCONSTANTS() 


namespace Aspose {
namespace Cells {
	class AssemblyConstants : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			 static const intrusive_ptr<Aspose::Cells::System::String> Title;
			 static const intrusive_ptr<Aspose::Cells::System::String> Product;
			 static const intrusive_ptr<Aspose::Cells::System::String> ReleaseDate;
			 static const intrusive_ptr<Aspose::Cells::System::String> ReleaseVersion;
			 AssemblyConstants();
		public:
			virtual ~AssemblyConstants();
	};

}

}
