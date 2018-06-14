#ifndef _SYSTEM_ZIP_ZIP64OPTION_H_
#define _SYSTEM_ZIP_ZIP64OPTION_H_

namespace Aspose {
	namespace Cells {
		namespace OpenXML {
			enum Zip64Option
			{
				/// <summary>
				/// The default behavior, which is "Never".
				/// (For COM clients, this is a 0 (zero).)
				/// </summary>
				Zip64Option_Default = 0,
				/// <summary>
				/// Do not use ZIP64 extensions when writing zip archives.
				/// (For COM clients, this is a 0 (zero).)
				/// </summary>
				Zip64Option_Never = 0,
				/// <summary>
				/// Use ZIP64 extensions when writing zip archives, as necessary.
				/// For example, when a single entry exceeds 0xFFFFFFFF in size, or when the archive as a whole
				/// exceeds 0xFFFFFFFF in size, or when there are more than 65535 entries in an archive.
				/// (For COM clients, this is a 1.)
				/// </summary>
				Zip64Option_AsNecessary = 1,
				/// <summary>
				/// Always use ZIP64 extensions when writing zip archives, even when unnecessary.
				/// (For COM clients, this is a 2.)
				/// </summary>
				Zip64Option_Always
			};



		}
	}
}
#endif