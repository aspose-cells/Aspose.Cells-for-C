#pragma once
#include "System/Object.h"
#include "IStylePool.h"
#include "System/Int32.h"
#include "System/String.h"
#define STATIC_STYLEPOOLNOGATHER() 

namespace Aspose {
namespace Cells {
class XfCollection;
class Style;
}
}
namespace Aspose {
namespace Cells {
namespace Converter {
class GlobalExpData;
}
}
}

namespace Aspose {
namespace Cells {
	class StylePoolNoGather : public Aspose::Cells::IStylePool
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::XfCollection> _staticStylePool;
			Aspose::Cells::System::Int32 _staticStylePoolSize;
			intrusive_ptr<Aspose::Cells::Style> _style;
	public:

			 StylePoolNoGather(intrusive_ptr<Aspose::Cells::Converter::GlobalExpData> globalExpData);
			bool IsBuiltIn();
			intrusive_ptr<Aspose::Cells::Style> GetRefStyle(Aspose::Cells::System::Int32 xfIndex);
			intrusive_ptr<Aspose::Cells::Style> CheckRefStyle(Aspose::Cells::System::Int32 xfIndex);
			void SetRefStyle(Aspose::Cells::System::Int32 xfIndex , intrusive_ptr<Aspose::Cells::Style> style);
			intrusive_ptr<Aspose::Cells::Style> GetNamedStyle(intrusive_ptr<Aspose::Cells::System::String> name);
			Aspose::Cells::System::Int32 GetCeilingXF();
			Aspose::Cells::System::Int32 FindXFIndex(intrusive_ptr<Aspose::Cells::Style> style);
			 StylePoolNoGather();
		public:
			virtual ~StylePoolNoGather();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}
