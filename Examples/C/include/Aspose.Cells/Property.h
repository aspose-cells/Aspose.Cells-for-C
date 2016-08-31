#pragma once
#include "System/Object.h"
//#include "System/StringHelperPal.h"
#include "System/Int32.h"
#include "System/String.h"
#define STATIC_PROPERTY() 


namespace Aspose {
namespace Ss {
	class Property : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			 Property(Aspose::Cells::System::Int32 id , intrusive_ptr<Aspose::Cells::System::String> name , intrusive_ptr<Aspose::Cells::System::Object> value);
			bool HasName();
			Aspose::Cells::System::Int32 Id;
			intrusive_ptr<Aspose::Cells::System::String> Name;
			intrusive_ptr<Aspose::Cells::System::Object> Value;
			 Property();
		public:
			virtual ~Property();
	};

}

}
