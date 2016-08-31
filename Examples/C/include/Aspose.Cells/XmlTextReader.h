#pragma once
#include "System/Text/StringBuilder.h"
//#include "System/Int64.h"
#include "WhitespaceHandling.h"
//#include "System/IO/File.h"
#include "System/IO/Stream.h"
//#include "System/IO/TextReader.h"
#include "System/Char.h"
//#include "System/Array.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "XmlNodeType.h"
#include "System/Array1D.h"
#include "System/IO/StreamReader.h"
#include "System/Text/Encoding.h"
#include "System/String.h"
#include "XmlDocument.h"
#include "System/Int32.h"
//#include "System/IO/FileStream.h"
#define STATIC_XMLTEXTREADER() 

namespace Aspose {
namespace Cells {
namespace Xml {
class NodeData;
class XmlNode;
class XmlNameTable;
class XmlNodeListener;
}
}
}

namespace Aspose {
namespace Cells {
namespace Xml {
	class XmlTextReader : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 num;
			void Init();
			Aspose::Cells::System::Int32 count;
			void ParseNode();
			intrusive_ptr<Aspose::Cells::System::String> ParseText();
			void DecodeMSChar();
			bool CharReadPrepareData();
	public:

			static intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> CreateXmlReader(intrusive_ptr<Aspose::Cells::System::IO::Stream> s);
			static intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> CreateXmlReader(intrusive_ptr<Aspose::Cells::System::String> s , bool isFile);
			 XmlTextReader(intrusive_ptr<Aspose::Cells::System::IO::Stream> s);
			 XmlTextReader(intrusive_ptr<Aspose::Cells::System::IO::Stream> s , intrusive_ptr<Aspose::Cells::System::Text::Encoding> coding);
			 XmlTextReader(intrusive_ptr<Aspose::Cells::System::String> s , bool isFile);
			void Close();
			static Aspose::Cells::System::Int32 CalcBufferSize(intrusive_ptr<Aspose::Cells::System::IO::Stream> input);
			intrusive_ptr<Aspose::Cells::Xml::XmlNameTable> NameTable;
			bool Read();
			void SkipXmlDeclaration();
			Aspose::Cells::Xml::XmlNodeType SkipComment();
			void ParseComment();
			 virtual void Skip();
			void ReadEndElement();
			intrusive_ptr<Aspose::Cells::System::String> ReadString();
			intrusive_ptr<Aspose::Cells::System::String> ReadElementString(bool preserve);
			intrusive_ptr<Aspose::Cells::System::String> ReadElementString();
			Aspose::Cells::Xml::XmlNodeType MoveToContent();
			bool MoveToElement();
			bool MoveToNextAttribute();
			bool HasAttributes();
			bool IsEmptyElement();
			intrusive_ptr<Aspose::Cells::System::String> GetAttribute(intrusive_ptr<Aspose::Cells::System::String> name , intrusive_ptr<Aspose::Cells::System::String> namespaceURI);
			intrusive_ptr<Aspose::Cells::System::String> GetAttribute(intrusive_ptr<Aspose::Cells::System::String> name);
			intrusive_ptr<Aspose::Cells::System::String> GetName();
			intrusive_ptr<Aspose::Cells::System::String> GetLocalName();
			intrusive_ptr<Aspose::Cells::System::String> GetPrefix();
			Aspose::Cells::Xml::XmlNodeType GetNodeType();
			intrusive_ptr<Aspose::Cells::System::String> GetValue();
			Aspose::Cells::System::Int32 GetLineNumber();
			intrusive_ptr<Aspose::Cells::System::String> ReadOuterXml();
			 virtual intrusive_ptr<Aspose::Cells::System::String> ReadInnerXml();
			intrusive_ptr<Aspose::Cells::System::Array1D<bool>> PreserveFlags;
			intrusive_ptr<Aspose::Cells::Xml::XmlNode> DocumentNode;
			 virtual intrusive_ptr<Aspose::Cells::Xml::XmlNode> ReadDomNode(intrusive_ptr<Aspose::Cells::Xml::XmlNodeListener> listener , bool startWithDoc);
			void DecodeISOChar();
			 static const Aspose::Cells::System::Char EofChar;
			intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb;
			bool _IsDecodedValueMSChar;
			bool _IsDecodedAttrMSChar;
			bool _Preserve;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> chars;
			Aspose::Cells::System::Int32 charPos;
			Aspose::Cells::System::Int32 charsUsed;
			Aspose::Cells::System::Int32 startPos;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::Xml::NodeData*>> nodes;
			intrusive_ptr<Aspose::Cells::Xml::NodeData> _currentNode;
			Aspose::Cells::System::Int32 attrIndex;
			Aspose::Cells::System::Int32 attrCount;
			intrusive_ptr<Aspose::Cells::System::IO::StreamReader> _streamReader;
			bool IsDecodedMSChar();
			void SetIsDecodedMSChar(bool value);
			Aspose::Cells::Xml::WhitespaceHandling GetWhitespaceHandling();
			void SetWhitespaceHandling(Aspose::Cells::Xml::WhitespaceHandling value);
			bool GetPreserve();
			void SetPreserve(bool value);
			bool ParseEndElement;
			void CharReadTextData();
			void CharReadNodeData();
			void CharReadNodeDataForDecoding(Aspose::Cells::System::Int32 expected);
			void CharReadData();
			 XmlTextReader();
		public:
			virtual ~XmlTextReader();
	};

}

}

}
