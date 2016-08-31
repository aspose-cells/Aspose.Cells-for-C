#pragma once
//#include "System/StringHelperPal.h"
//#include "System/Boxing.h"
#include "PropertyType.h"
#include "System/Object.h"
#include "System/String.h"
//#include "System/DateTime.h"
#include "PropertyGroup.h"
//#include "System/Double.h"
#include "System/Int32.h"
#define STATIC_PROPERTYSCHEMA() 


namespace Aspose {
namespace Cells {
namespace Properties {
	class PropertySchema : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::Properties::PropertyGroup Group;
			Aspose::Cells::System::Int32 Id;
			intrusive_ptr<Aspose::Cells::System::String> Name;
			Aspose::Cells::Properties::PropertyType Type;
			 PropertySchema(Aspose::Cells::Properties::PropertyGroup group , Aspose::Cells::System::Int32 id , intrusive_ptr<Aspose::Cells::System::String> name , Aspose::Cells::Properties::PropertyType type);
			intrusive_ptr<Aspose::Cells::System::Object> GetDefaultValue();
			 PropertySchema();
		public:
			virtual ~PropertySchema();
	};

}

}

}
