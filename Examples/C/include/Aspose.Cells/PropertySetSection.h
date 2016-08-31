#pragma once
//#include "System/Int64.h"
//#include "System/Exception.h"
//#include "System/UInt16.h"
//#include "System/Collections/ArrayList.h"
//#include "System/Boxing.h"
#include "System/Guid.h"
#include "System/Int16.h"
#include "PropertyCollection.h"
#include "System/IO/Stream.h"
//#include "System/UInt32.h"
//#include "System/Convert.h"
//#include "System/IO/MemoryStream.h"
#include "System/Collections/Hashtable.h"
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/DateTime.h"
//#include "System/Text/Encoding.h"
#include "System/IO/BinaryWriter.h"
#include "System/Byte.h"
//#include "System/Double.h"
#include "System/String.h"
#include "System/IO/BinaryReader.h"
#include "System/Int32.h"
//#include "System/Runtime/InteropServices/VarEnum.h"
//#include "System/NotSupportedException.h"
#define STATIC_PROPERTYSETSECTION() 


namespace Aspose {
namespace Ss {
	class PropertySetSection : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			static void ReadPropNames(intrusive_ptr<Aspose::Cells::System::IO::BinaryReader> reader , intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> propNames , Aspose::Cells::System::Int32 codePage);
			static void WritePropNames(intrusive_ptr<Aspose::Cells::System::IO::BinaryWriter> writer , intrusive_ptr<Aspose::Ss::PropertyCollection> props);
			static intrusive_ptr<Aspose::Cells::System::Object> ReadPropValue(intrusive_ptr<Aspose::Cells::System::IO::BinaryReader> reader , Aspose::Cells::System::Int32 codePage);
			static void WritePropValue(intrusive_ptr<Aspose::Cells::System::IO::BinaryWriter> writer , intrusive_ptr<Aspose::Cells::System::Object> value);
			static intrusive_ptr<Aspose::Cells::System::String> ReadString(intrusive_ptr<Aspose::Cells::System::IO::BinaryReader> reader , Aspose::Cells::System::Int32 codePage);
			static intrusive_ptr<Aspose::Cells::System::String> ReadUnicodeString(intrusive_ptr<Aspose::Cells::System::IO::BinaryReader> reader);
			static void WriteUnicodeString(intrusive_ptr<Aspose::Cells::System::IO::BinaryWriter> writer , intrusive_ptr<Aspose::Cells::System::String> s);
			intrusive_ptr<Aspose::Cells::System::Guid> mFmtId;
			intrusive_ptr<Aspose::Ss::PropertyCollection> mProperties;
			 static const Aspose::Cells::System::Int32 SectionHeaderSize;
			 static const Aspose::Cells::System::Int32 PropIdOffsetSize;
			 static const Aspose::Cells::System::Int16 DefaultCodePage;
			 static const Aspose::Cells::System::Int16 UnicodeCodePage;
			 static const Aspose::Cells::System::Int32 PropValueAlignment;
			 static const Aspose::Cells::System::Int32 DictionaryPropId;
			 static const Aspose::Cells::System::Int32 CodePagePropId;
	public:

			 PropertySetSection(intrusive_ptr<Aspose::Cells::System::Guid> fmtId);
			 PropertySetSection(intrusive_ptr<Aspose::Cells::System::Guid> fmtId , intrusive_ptr<Aspose::Cells::System::IO::BinaryReader> reader);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> ToByteArray();
			intrusive_ptr<Aspose::Ss::PropertyCollection> GetProperties();
			intrusive_ptr<Aspose::Cells::System::Guid> GetFmtId();
			static void ReadHlinks(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream);
			static intrusive_ptr<Aspose::Cells::System::Guid> FMTID_SummaryInfo;
			static intrusive_ptr<Aspose::Cells::System::Guid> FMTID_DocSummaryInfo;
			static intrusive_ptr<Aspose::Cells::System::Guid> FMTID_UserDefined;
			 PropertySetSection();
		public:
			virtual ~PropertySetSection();
	};

}

}
