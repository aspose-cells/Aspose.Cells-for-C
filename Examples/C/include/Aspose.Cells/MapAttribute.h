#pragma once
#include "System/String.h"
#include "System/Object.h"
#include "System/Collections/ArrayList.h"
#include "System/Int32.h"
#define STATIC_MAPATTRIBUTE() 


namespace Aspose {
namespace Cells {
	class MapAttribute : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::System::String> path;
			intrusive_ptr<Aspose::Cells::System::String> fatherPath;
			intrusive_ptr<Aspose::Cells::System::String> name;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> valueList;
			Aspose::Cells::System::Int32 level;
			Aspose::Cells::System::Int32 index;
			Aspose::Cells::System::Int32 repeatCount;
			Aspose::Cells::System::Int32 nameIndex;
			 MapAttribute();
		public:
			virtual ~MapAttribute();
	};

}

}
