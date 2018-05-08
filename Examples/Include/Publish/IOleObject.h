#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Byte.h"
#include "System/String.h"
#include "System/Drawing/Imaging/ImageFormat.h"
#include "IShape.h"

namespace Aspose {
	namespace Cells {
		enum FileFormatType;
	}
}
namespace Aspose {
	namespace Cells {
		namespace Drawing {
			enum OleFileType;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Drawing{
			/// <summary>
			/// Represents an OleObject in a worksheet.
			/// </summary>
	class ASPOSE_CELLS_API IOleObject : virtual public Aspose::Cells::Drawing::IShape
	{
		public:
			/// <summary>
			/// True indicates that the size of the ole object will be auto changed as the size of snapshop of the embedded content
			/// when the ole object is activated.
			/// </summary>
			 virtual bool IsAutoSize()=0;
			/// <summary>
			/// True indicates that the size of the ole object will be auto changed as the size of snapshop of the embedded content
			/// when the ole object is activated.
			/// </summary>
			 virtual void SetAutoSize(bool value)=0;
			/// <summary>
			/// Returns true if the OleObject is linked
			/// </summary>
			 virtual bool IsLink()=0;
			/// <summary>
			/// Returns true if the OleObject is linked
			/// </summary>
			 virtual void SetLink(bool value)=0;
			/// <summary>
			/// True if the specified object is displayed as an icon 
			/// and the image will not be auto changed.
			/// </summary>
			 virtual bool GetDisplayAsIcon()=0;
			/// <summary>
			/// True if the specified object is displayed as an icon 
			/// and the image will not be auto changed.
			/// </summary>
			 virtual void SetDisplayAsIcon(bool value)=0;
			/// <summary>
			/// Represents image of ole object as byte array.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> GetImageData()=0;
			/// <summary>
			/// Represents image of ole object as byte array.
			/// </summary>
			 virtual void SetImageData(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> value)=0;
			/// <summary>
			/// Represents embedded ole object data as byte array.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> GetObjectData()=0;
			/// <summary>
			/// Represents embedded ole object data as byte array.
			/// </summary>
			 virtual void SetObjectData(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> value)=0;
			/// <summary>
			/// Gets or sets the path and name of the source file for the linked image. 
			/// </summary>
			/// <remarks>
			/// The default value is an empty string.
			/// If SourceFullName is not an empty string, the image is linked.
			/// If SourceFullName is not an empty string, but Data is null, then the image is linked and not stored in the file.
			/// </remarks>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetImageSourceFullName()=0;
			/// <summary>
			/// Gets or sets the path and name of the source file for the linked image. 
			/// </summary>
			/// <remarks>
			/// The default value is an empty string.
			/// If SourceFullName is not an empty string, the image is linked.
			/// If SourceFullName is not an empty string, but Data is null, then the image is linked and not stored in the file.
			/// </remarks>
			 virtual void SetImageSourceFullName(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Sets the ole native source full file name with path.
			/// </summary>
			/// <param name="sourceFullName" >the ole native source full file name</param>
			 virtual void SetNativeSourceFullName(intrusive_ptr<Aspose::Cells::System::String> sourceFullName)=0;
			/// <summary>
			/// Gets or sets the ProgID of the OLE object. 
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetProgID()=0;
			/// <summary>
			/// Gets or sets the ProgID of the OLE object. 
			/// </summary>
			 virtual void SetProgID(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Gets and sets the file type of the embedded ole object data
			/// </summary>
			 virtual Aspose::Cells::FileFormatType GetFileFormatType()=0;
			/// <summary>
			/// Gets and sets the file type of the embedded ole object data
			/// </summary>
			 virtual void SetFileFormatType(Aspose::Cells::FileFormatType value)=0;
			/// <summary>
			/// Gets and sets the file type of the embedded ole object data
			/// </summary>
			/// <remarks>
			 virtual Aspose::Cells::Drawing::OleFileType GetFileType()=0;
			/// <summary>
			/// Gets and sets the file type of the embedded ole object data
			/// </summary>
			/// <remarks>
			 virtual void SetFileType(Aspose::Cells::Drawing::OleFileType value)=0;
			/// <summary>
			/// Returns the source full name of the source file for the linked OLE object.
			/// </summary>
			/// <remarks>Only supports setting the source full name when the file type is OleFileType.Unknown.
			/// Such as wav file ,avi file..etc..
			/// </remarks>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetObjectSourceFullName()=0;
			/// <summary>
			/// Returns the source full name of the source file for the linked OLE object.
			/// </summary>
			/// <remarks>Only supports setting the source full name when the file type is OleFileType.Unknown.
			/// Such as wav file ,avi file..etc..
			/// </remarks>
			 virtual void SetObjectSourceFullName(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Returns the source full name of the source file for the linked OLE object.
			/// </summary>
			/// <remarks>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetSourceFullName()=0;
			/// <summary>
			/// Returns the source full name of the source file for the linked OLE object.
			/// </summary>
			/// <remarks>
			 virtual void SetSourceFullName(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Specifies whether the link to the OleObject is automatically updated or not.
			/// </summary>
			 virtual bool GetAutoUpdate()=0;
			/// <summary>
			/// Specifies whether the link to the OleObject is automatically updated or not.
			/// </summary>
			 virtual void SetAutoUpdate(bool value)=0;
			/// <summary>
			/// Specifies whether the host application for the embedded object shall be called to load
			/// the object data automatically when the parent workbook is opened.
			/// </summary>
			 virtual bool GetAutoLoad()=0;
			/// <summary>
			/// Specifies whether the host application for the embedded object shall be called to load
			/// the object data automatically when the parent workbook is opened.
			/// </summary>
			 virtual void SetAutoLoad(bool value)=0;
			/// <summary>
			/// Gets and sets the class identifier of the embedded object. 
			/// It means which application opens the embedded file.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> GetClassIdentifier()=0;
			/// <summary>
			/// Gets and sets the class identifier of the embedded object. 
			/// It means which application opens the embedded file.
			/// </summary>
			 virtual void SetClassIdentifier(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> value)=0;
			/// <summary>
			/// Gets the image format of the picture.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::Drawing::Imaging::ImageFormat> GetImageFormat()=0;

	};
}
}
}
