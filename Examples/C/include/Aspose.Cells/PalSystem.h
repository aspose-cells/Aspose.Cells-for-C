#pragma once
//#include "System/OperatingSystem.h"
//#include "System/IntPtr.h"
#include "System/IO/Stream.h"
//#include "System/Int64.h"
//#include "System/IO/Path.h"
//#include "System/InvalidOperationException.h"
//#include "System/IO/File.h"
//#include "System/Environment.h"
//#include "System/Win32/Registry.h"
#include "System/Collections/IDictionary.h"
//#include "System/IO/MemoryStream.h"
//#include "System/PlatformID.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Net/WebResponse.h"
#include "System/String.h"
//#include "System/Win32/RegistryKey.h"
//#include "System/Reflection/Assembly.h"
//#include "System/IO/FileStream.h"
//#include "System/Net/WebRequest.h"
#include "System/Collections/Hashtable.h"
#define STATIC_PALSYSTEM() 


namespace Aspose {
namespace Cells {
namespace Internal {
namespace Porting {
	class PalSystem : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			 PalSystem();
			static intrusive_ptr<Aspose::Cells::System::String> GetWindowsFontsFolder();
			static intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> ResourceTable;
			static intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> InitResourceTable();
	public:

			static intrusive_ptr<Aspose::Cells::System::IO::Stream> FetchResourceStream(intrusive_ptr<Aspose::Cells::System::String> fullResourceName);
			//static intrusive_ptr<Aspose::Cells::System::IO::Stream> OpenStreamFromHref(intrusive_ptr<Aspose::Cells::System::String> href);
			static bool IsIn64BitMode();
			static bool Is64BitWindows();
			static bool IsWindows();
			static bool IsUnix();
			static void GetFontFileNamesFromRegistry(intrusive_ptr<Aspose::Cells::System::Collections::IDictionary> fileNames);
			static intrusive_ptr<Aspose::Cells::System::String> GetFontsFolder();
			static intrusive_ptr<Aspose::Cells::System::String> GetJavaGoldIfExists(intrusive_ptr<Aspose::Cells::System::String> dotNetGold);
			static intrusive_ptr<Aspose::Cells::System::String> GetJavaGold(intrusive_ptr<Aspose::Cells::System::String> dotNetGold);
		public:
			virtual ~PalSystem();
	};

}

}

}

}
