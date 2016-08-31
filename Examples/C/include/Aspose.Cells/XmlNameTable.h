#pragma once
//#include "System/Environment.h"
#include "System/Array1D.h"
#include "System/Char.h"
#include "System/Int32.h"
#include "System/Object.h"
#include "System/String.h"
//#include "System/StringHelperPal.h"
#define STATIC_XMLNAMETABLE() 


namespace Aspose {
namespace Cells {
namespace Xml {
	class XmlNameTable : public Aspose::Cells::System::Object
	{
	private:


		class XmlNameEntry;

		 friend class XmlNameTable::XmlNameEntry;

		
	class XmlNameEntry : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::System::Int32 hashCode;
			intrusive_ptr<Aspose::Cells::Xml::XmlNameTable::XmlNameEntry> next;
			intrusive_ptr<Aspose::Cells::System::String> str;
			 XmlNameEntry(intrusive_ptr<Aspose::Cells::System::String> str , Aspose::Cells::System::Int32 hashCode , intrusive_ptr<Aspose::Cells::Xml::XmlNameTable::XmlNameEntry> next);
			 XmlNameEntry();
		public:
			virtual ~XmlNameEntry();
	};
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 count;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::Xml::XmlNameTable::XmlNameEntry*>> entries;
			Aspose::Cells::System::Int32 hashCodeRandomizer;
			Aspose::Cells::System::Int32 mask;
			intrusive_ptr<Aspose::Cells::System::String> AddEntry(intrusive_ptr<Aspose::Cells::System::String> str , Aspose::Cells::System::Int32 hashCode);
			void Expand();
			static bool TextEquals(intrusive_ptr<Aspose::Cells::System::String> str1 , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> str2 , Aspose::Cells::System::Int32 str2Start , Aspose::Cells::System::Int32 str2Length);
	public:

			 XmlNameTable();
			intrusive_ptr<Aspose::Cells::System::String> Add(intrusive_ptr<Aspose::Cells::System::String> key);
			intrusive_ptr<Aspose::Cells::System::String> Add(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> key , Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 len);
		public:
			virtual ~XmlNameTable();
	};

}

}

}
