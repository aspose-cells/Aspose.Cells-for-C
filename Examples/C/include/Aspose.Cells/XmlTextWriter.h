#pragma once
//#include "System/Array.h"
#include "System/IO/StreamWriter.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/IO/Stream.h"
#include "System/String.h"
//#include "System/IO/FileStream.h"
#include "Formatting.h"
#include "System/Byte.h"
//#include "System/IO/File.h"
//#include "System/IO/StringWriter.h"
#include "System/Char.h"
#include "System/IO/TextWriter.h"
#include "System/Int32.h"
#include "System/Text/StringBuilder.h"
#include "System/Text/Encoding.h"
#include "System/Array1D.h"
#define STATIC_XMLTEXTWRITER() 


namespace Aspose {
namespace Cells {
namespace Xml {
	class XmlTextWriter : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			void DoBeforeElement(bool newElement);
			void DoBeforeEndElement(bool newElement);
			void WriteNodeName(intrusive_ptr<Aspose::Cells::System::String> val);
			void WriteText(intrusive_ptr<Aspose::Cells::System::String> val , bool isAttr);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> EndForEmpty;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> Static_Array_Init_EndForEmpty();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> EndForElement;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> Static_Array_Init_EndForElement();
			bool _needGT;
			intrusive_ptr<Aspose::Cells::System::Array1D<bool>> _childFlags;
			intrusive_ptr<Aspose::Cells::System::Array1D<bool>> _isHex;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> _elements;
			Aspose::Cells::System::Int32 _level;
			intrusive_ptr<Aspose::Cells::System::IO::TextWriter> _writer;
			Aspose::Cells::Xml::Formatting _Formatting;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> IndentChars;
			bool _EncodeMSChar;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> chars;
			Aspose::Cells::System::Int32 num;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> CharProperties;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> Static_Array_Init_CharProperties();
			void Init();
	public:

			 XmlTextWriter(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream , intrusive_ptr<Aspose::Cells::System::Text::Encoding> encoding);
			 XmlTextWriter(intrusive_ptr<Aspose::Cells::System::String> filename , intrusive_ptr<Aspose::Cells::System::Text::Encoding> encoding);
			 XmlTextWriter(intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb);
			 XmlTextWriter(intrusive_ptr<Aspose::Cells::System::IO::StreamWriter> writer);
			void WriteAttributeString(intrusive_ptr<Aspose::Cells::System::String> localName , intrusive_ptr<Aspose::Cells::System::String> value);
			void WriteAttributeString(intrusive_ptr<Aspose::Cells::System::String> localName , intrusive_ptr<Aspose::Cells::System::String> ns , intrusive_ptr<Aspose::Cells::System::String> value);
			void WriteAttributeString(intrusive_ptr<Aspose::Cells::System::String> prefix , intrusive_ptr<Aspose::Cells::System::String> localName , intrusive_ptr<Aspose::Cells::System::String> ns , intrusive_ptr<Aspose::Cells::System::String> value);
			void WriteAttributeString(intrusive_ptr<Aspose::Cells::System::String> prefix , intrusive_ptr<Aspose::Cells::System::String> localName , intrusive_ptr<Aspose::Cells::System::String> ns , intrusive_ptr<Aspose::Cells::System::String> value , bool convert);
			void WriteString(intrusive_ptr<Aspose::Cells::System::String> text);
			void WriteString(intrusive_ptr<Aspose::Cells::System::String> text , bool converted);
			void WriteElementString(intrusive_ptr<Aspose::Cells::System::String> localName , intrusive_ptr<Aspose::Cells::System::String> value);
			void WriteElementString(intrusive_ptr<Aspose::Cells::System::String> localName , intrusive_ptr<Aspose::Cells::System::String> ns , intrusive_ptr<Aspose::Cells::System::String> value);
			void WriteElementString(intrusive_ptr<Aspose::Cells::System::String> localName , intrusive_ptr<Aspose::Cells::System::String> value , bool convert);
			void WriteElementString(intrusive_ptr<Aspose::Cells::System::String> prefix , intrusive_ptr<Aspose::Cells::System::String> localName , intrusive_ptr<Aspose::Cells::System::String> ns , intrusive_ptr<Aspose::Cells::System::String> value , bool convert);
			void WriteElementString(intrusive_ptr<Aspose::Cells::System::String> prefix , intrusive_ptr<Aspose::Cells::System::String> localName , intrusive_ptr<Aspose::Cells::System::String> ns , intrusive_ptr<Aspose::Cells::System::String> value);
			void WriteStartElement(intrusive_ptr<Aspose::Cells::System::String> localName);
			void WriteStartElement(intrusive_ptr<Aspose::Cells::System::String> localName , intrusive_ptr<Aspose::Cells::System::String> ns);
			void WriteStartElement(intrusive_ptr<Aspose::Cells::System::String> prefix , intrusive_ptr<Aspose::Cells::System::String> localName , intrusive_ptr<Aspose::Cells::System::String> ns);
			void WriteStartElement(intrusive_ptr<Aspose::Cells::System::String> prefix , intrusive_ptr<Aspose::Cells::System::String> localName , bool converter);
			void WriteFullEndElement();
			void WriteComment(intrusive_ptr<Aspose::Cells::System::String> comment);
			void WriteEndElement();
			void WriteEndElement(bool convert);
			void WriteStartDocument();
			void WriteStartDocument(bool standalone);
			void WriteEndDocument();
			void WriteRaw(intrusive_ptr<Aspose::Cells::System::String> data);
			void Flush();
			void Close();
			void WriteProcessingInstruction(intrusive_ptr<Aspose::Cells::System::String> name , intrusive_ptr<Aspose::Cells::System::String> text);
			bool _IsPivotCacheDefinition;
			bool IsVML;
			Aspose::Cells::Xml::Formatting GetFormatting();
			void SetFormatting(Aspose::Cells::Xml::Formatting value);
			Aspose::Cells::System::Char GetIndentChar();
			void SetIndentChar(Aspose::Cells::System::Char value);
			bool GetEncodeMSChar();
			void SetEncodeMSChar(bool value);
			Aspose::Cells::System::Int32 GetIndentation();
			void SetIndentation(Aspose::Cells::System::Int32 value);
			bool GetNamespaces();
			void SetNamespaces(bool value);
			 XmlTextWriter();
		public:
			virtual ~XmlTextWriter();
	};

}

}

}
