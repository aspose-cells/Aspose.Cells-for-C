#pragma once
//#include "System/Text/StringBuilder.h"
//#include "System/Exception.h"
#include "System/Collections/ArrayList.h"
//#include "System/Boxing.h"
//#include "System/Collections/IDictionaryEnumerator.h"
//#include "System/Collections/ICollection.h"
//#include "System/StringHelperPal.h"
//#include "System/Char.h"
#include "System/Collections/Hashtable.h"
//#include "System/Int32Helper.h"
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Byte.h"
#include "System/String.h"
#include "System/Int32.h"
//#include "System/IO/MemoryStream.h"
#define STATIC_XMLMAPUTIL() 

namespace Aspose {
namespace Cells {
class Worksheet;
class XmlMapCollection;
class MapAttribute;
class XmlMap;
}
}
namespace Aspose {
namespace Cells {
namespace Tables {
class ListObject;
}
}
}
namespace Aspose {
namespace Cells {
namespace Xml {
class XmlAttributeCollection;
class XmlTextWriter;
class XmlDocument;
class XmlElement;
}
}
}

namespace Aspose {
namespace Cells {
	class XmlMapUtil : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 Depth;
			Aspose::Cells::System::Int32 Count;
			Aspose::Cells::System::Int32 Index;
			intrusive_ptr<Aspose::Cells::System::String> Path;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> AttMap;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> IndexMap;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> XmlMapFirstList;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> XmlMapNextList;
			void SetCount(intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> map);
			Aspose::Cells::System::Int32 GetCount(intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> map);
			intrusive_ptr<Aspose::Cells::System::String> GetTableRef(intrusive_ptr<Aspose::Cells::Tables::ListObject> table);
			intrusive_ptr<Aspose::Cells::System::String> ToSchema(intrusive_ptr<Aspose::Cells::Xml::XmlDocument> doc , intrusive_ptr<Aspose::Cells::System::String> id);
			void ToSchema(intrusive_ptr<Aspose::Cells::Xml::XmlElement> element , intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , Aspose::Cells::System::Int32 level , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> maps);
	public:

			void AddListColumn(intrusive_ptr<Aspose::Cells::XmlMap> map , intrusive_ptr<Aspose::Cells::Tables::ListObject> table , intrusive_ptr<Aspose::Cells::System::String> name , Aspose::Cells::System::Int32 idx , intrusive_ptr<Aspose::Cells::System::String> buf);
			void SetXmlMapAttribute(intrusive_ptr<Aspose::Cells::System::String> name , intrusive_ptr<Aspose::Cells::System::Object> value , Aspose::Cells::System::Int32 level , intrusive_ptr<Aspose::Cells::System::String> path , intrusive_ptr<Aspose::Cells::MapAttribute> attribute);
			Aspose::Cells::System::Int32 FindAttrIndex(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> list , intrusive_ptr<Aspose::Cells::System::String> name , Aspose::Cells::System::Int32 level);
			bool IsOnlyXmlNS(intrusive_ptr<Aspose::Cells::Xml::XmlAttributeCollection> atts);
			void GetXmlData(intrusive_ptr<Aspose::Cells::XmlMap> map , intrusive_ptr<Aspose::Cells::Tables::ListObject> table , intrusive_ptr<Aspose::Cells::Xml::XmlElement> elms , Aspose::Cells::System::Int32 idx , intrusive_ptr<Aspose::Cells::System::String> str , intrusive_ptr<Aspose::Cells::Worksheet> sheet , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 col , Aspose::Cells::System::Int32 level);
			void CalculateXmlData(intrusive_ptr<Aspose::Cells::XmlMapCollection> maps , intrusive_ptr<Aspose::Cells::XmlMap> map , intrusive_ptr<Aspose::Cells::System::String> url , intrusive_ptr<Aspose::Cells::Worksheet> sheet , intrusive_ptr<Aspose::Cells::Tables::ListObject> table , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 col);
			 XmlMapUtil();
		public:
			virtual ~XmlMapUtil();
	};

}

}
