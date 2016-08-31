#pragma once
#include "IStylePool.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/String.h"
#include "System/Int32.h"
#define STATIC_STYLEPOOLGATHER() 

namespace Aspose {
namespace Cells {
class LightCellsExpData;
class XfCollection;
class Style;
}
}

namespace Aspose {
namespace Cells {
	class StylePoolGather : public Aspose::Cells::IStylePool
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::LightCellsExpData> _expData;
			intrusive_ptr<Aspose::Cells::XfCollection> _staticStylePool;
			Aspose::Cells::System::Int32 _staticStylePoolSize;
			Aspose::Cells::System::Int32 _ceilingXF;
	public:

			 StylePoolGather(intrusive_ptr<Aspose::Cells::LightCellsExpData> expData);
			Aspose::Cells::System::Int32 GetCleanUpThreshhold();
			bool IsBuiltIn();
			intrusive_ptr<Aspose::Cells::Style> GetRefStyle(Aspose::Cells::System::Int32 xfIndex);
			intrusive_ptr<Aspose::Cells::Style> CheckRefStyle(Aspose::Cells::System::Int32 xfIndex);
			void SetRefStyle(Aspose::Cells::System::Int32 xfIndex , intrusive_ptr<Aspose::Cells::Style> style);
			intrusive_ptr<Aspose::Cells::Style> GetNamedStyle(intrusive_ptr<Aspose::Cells::System::String> name);
			Aspose::Cells::System::Int32 GetCeilingXF();
			Aspose::Cells::System::Int32 FindXFIndex(intrusive_ptr<Aspose::Cells::Style> style);
			 StylePoolGather();
		public:
			virtual ~StylePoolGather();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}
