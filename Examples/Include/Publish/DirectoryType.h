#pragma once
namespace Aspose {
namespace Cells {
			/// <summary>
			/// Represents the directory  type of the file name.
			/// </summary>
	enum DirectoryType 

	{

			/// <summary>
			/// Represents an MS-DOS drive letter. It is followed by the drive letter.
			/// Or UNC file names, such as \\server\share\myfile.xls
			/// </summary>
			DirectoryType_Volume ,
			/// <summary>
			/// Indicates that the source workbook is on the same drive as the dependent workbook (the drive letter is omitted)
			/// </summary>
			DirectoryType_SameVolume ,
			/// <summary>
			/// Indicates that the source workbook is in a subdirectory of the current directory.
			/// </summary>
			DirectoryType_DownDirectory ,
			/// <summary>
			/// Indicates that the source workbook is in the parent directory of the current directory.
			/// </summary>
			DirectoryType_UpDirectory ,
	};


}

}
