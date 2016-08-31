#pragma once
#include "System/Object.h"
#include "Property.h"
#include "System/Collections/ArrayList.h"
#include "System/Int32.h"
#include "System/String.h"
#define STATIC_PROPERTYCOLLECTION() 


namespace Aspose {
namespace Ss {
	class PropertyCollection : public Aspose::Cells::System::Collections::ArrayList
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Ss::Property> GetIndexObject(Aspose::Cells::System::Int32 index);
			void Set(Aspose::Cells::System::Int32 index , intrusive_ptr<Aspose::Ss::Property> value);
			intrusive_ptr<Aspose::Ss::Property> GetById(Aspose::Cells::System::Int32 id);
			intrusive_ptr<Aspose::Ss::Property> GetByName(intrusive_ptr<Aspose::Cells::System::String> name);
			bool HasNames();
			Aspose::Cells::System::Int32 GetCountOfPropertiesWithNames();
			 PropertyCollection();
		public:
			virtual ~PropertyCollection();
	};

}

}
