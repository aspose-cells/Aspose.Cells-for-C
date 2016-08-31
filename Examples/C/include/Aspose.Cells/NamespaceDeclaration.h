#pragma once
#include "System/Object.h"
//#include "System/StringHelperPal.h"
#include "System/Int32.h"
#include "System/String.h"
#define STATIC_NAMESPACEDECLARATION() 


namespace Aspose {
namespace Cells {
namespace Xml {
#ifdef WIN32

	class ASPOSE_CELLS_API NamespaceDeclaration : public Aspose::Cells::System::Object
#else	class NamespaceDeclaration : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::System::String> prefix;
			intrusive_ptr<Aspose::Cells::System::String> uri;
			Aspose::Cells::System::Int32 scopeId;
			Aspose::Cells::System::Int32 previousNsIndex;
			void Set(intrusive_ptr<Aspose::Cells::System::String> prefix , intrusive_ptr<Aspose::Cells::System::String> uri , Aspose::Cells::System::Int32 scopeId , Aspose::Cells::System::Int32 previousNsIndex);
			 NamespaceDeclaration();
		public:
			virtual ~NamespaceDeclaration();
	};

}

}

}
