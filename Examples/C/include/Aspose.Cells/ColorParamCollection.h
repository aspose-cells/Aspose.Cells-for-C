#pragma once
#include "ColorParamType.h"
#include "System/Object.h"
//#include "System/Double.h"
#include "System/Drawing/Color.h"
#include "ColorParam.h"
#include "System/Int32.h"
#include "System/Collections/CollectionBase.h"
//#include "System/Collections/ArrayList.h"
#define STATIC_COLORPARAMCOLLECTION() 


namespace Aspose {
namespace Cells {
namespace StyleObject {
	class ColorParamCollection : public Aspose::Cells::System::Collections::CollectionBase
	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::StyleObject::ColorParam> p);
			intrusive_ptr<Aspose::Cells::StyleObject::ColorParam> GetIndexObject(Aspose::Cells::System::Int32 index);
			Aspose::Cells::System::Int32 AddRead(Aspose::Cells::StyleObject::ColorParamType type , Aspose::Cells::System::Int32 value);
			void Set(Aspose::Cells::StyleObject::ColorParamType type , Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 GetByType(Aspose::Cells::StyleObject::ColorParamType type , Aspose::Cells::System::Int32 defaultValue);
			intrusive_ptr<Aspose::Cells::System::Drawing::Color> ConvertColor(intrusive_ptr<Aspose::Cells::System::Drawing::Color> color0 , bool isShape);
			void CopyReplace(intrusive_ptr<Aspose::Cells::StyleObject::ColorParamCollection> source);
			void Copy(intrusive_ptr<Aspose::Cells::StyleObject::ColorParamCollection> source);
			bool Equal(intrusive_ptr<Aspose::Cells::StyleObject::ColorParamCollection> s);
			intrusive_ptr<Aspose::Cells::StyleObject::ColorParam> GetColorParamObject(Aspose::Cells::StyleObject::ColorParamType type);
			void Remove(Aspose::Cells::StyleObject::ColorParamType type);
			 ColorParamCollection();
		public:
			virtual ~ColorParamCollection();
	};

}

}

}
