#pragma once
//#include "System/Exception.h"
//#include "System/Int64.h"
//#include "System/IO/SeekOrigin.h"
//#include "System/UInt16.h"
#include "System/Collections/ArrayList.h"
//#include "System/Boxing.h"
//#include "System/Guid.h"
//#include "System/IO/File.h"
#include "System/IO/Stream.h"
//#include "System/UInt32.h"
//#include "System/GC.h"
//#include "System/BitConverter.h"
//#include "System/IO/MemoryStream.h"
#include "System/Collections/Hashtable.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Array.h"
#include "System/Byte.h"
#include "System/String.h"
#include "System/Int32.h"
#include "System/IO/FileStream.h"
//#include "System/Collections/SortedList.h"
#define STATIC_MERGEDWORKBOOK() 

namespace Aspose {
namespace Cells {
class SaveOptions;
class RichText;
class Workbook;
}
}

namespace Aspose {
namespace Cells {
	class MergedWorkbook : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 id;
			Aspose::Cells::System::Int32 length;
			void AddWatermark();
			intrusive_ptr<Aspose::Cells::System::IO::FileStream> Write(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> files , intrusive_ptr<Aspose::Cells::System::String> cachedFile , intrusive_ptr<Aspose::Cells::System::String> destFile);
			void ReadGlobal(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> files);
			void MergeGlobal(intrusive_ptr<Aspose::Cells::Workbook> workbook);
			Aspose::Cells::System::Int32 FindRichText(intrusive_ptr<Aspose::Cells::RichText> richText , intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> fontIndexes);
			void ReadRecord(intrusive_ptr<Aspose::Cells::System::IO::Stream> ms , intrusive_ptr<Aspose::Cells::System::IO::Stream> cachedStream);
			void ReadWholeRecord(intrusive_ptr<Aspose::Cells::System::IO::Stream> ms);
			intrusive_ptr<Aspose::Cells::System::IO::Stream> ConvertMemoryStreamToFile(intrusive_ptr<Aspose::Cells::System::IO::Stream> ms , intrusive_ptr<Aspose::Cells::System::String> file);
			void CopyCellsToCachedFile(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> files , intrusive_ptr<Aspose::Cells::System::IO::Stream> cachedStream , intrusive_ptr<Aspose::Cells::System::String> cachedFile , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> arrOffsetToWriteBOFAbsPos);
	public:

			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> temp;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data;
			Aspose::Cells::Workbook* global;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> cachedPos;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> MergedSstList;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> MergedXfList;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> MergedNames;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> RefSheetIndexes;
			intrusive_ptr<Aspose::Cells::SaveOptions> _saveOptions;
			 MergedWorkbook();
			void Combine(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> files , intrusive_ptr<Aspose::Cells::System::String> cachedFile , intrusive_ptr<Aspose::Cells::System::String> destFile);
		public:
			virtual ~MergedWorkbook();
	};

}

}
