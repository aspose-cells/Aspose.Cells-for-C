#pragma once
#include "System/Object.h"
#include "System/String.h"
#include "System/IO/Stream.h"
#include "System/IO/MemoryStream.h"
#include "System/Int32.h"
#include "System/Double.h"
#include "System/Array1D.h"
#include "System/Drawing/Color.h"
#include "System/IDisposable.h"

namespace Aspose {
	namespace Cells {
		class IWorkbookSettings;
		enum FileFormatType;
		class ILoadOptions;
		enum SaveFormat;
		class ISaveOptions;
		class IWorksheetCollection;
		class IStyleCollection;
		class IStyle;
		enum BuiltinStyleType;
		class IWorkbook;
		enum ThemeColorType;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			///  Represents a root object to create an Excel spreadsheet. 	
			///  </summary>
			/// 
			/// <remarks>The IWorkbook class denotes an Excel spreadsheet. Each spreadsheet can contain multiple worksheets.
			///  The basic feature of the class is to open and save native excel files.
			///  The class has some advanced features like copying data from other Workbooks, combining two Workbooks and protecting the Excel spreadsheet.
			///  </remarks>
			/// 
			/// <example>
			///  The following example opens a file named designer.xls. It replaces two string values with an Integer value and string value respectively within the spreadsheet.
			///  In order to run this case normally, you should create a file named designer.xls using MS Excels,and set two string values "OldInt" and "OldString"  between any two cells
			///  then save it in the root directory of your D: drive.
			///  <code>
			///		
			///  [C++]
			///  //Open a file named designer.xls
			///  StringPtr mapPath = new String("D:");
			///  StringPtr designerFile = mapPath->StringAppend(new String("\\designer.xls"));
			///  intrusive_ptr<IWorkbook> workbook = Factory::CreateIWorkbook(designerFile);
			///    
			///  //Replace the placeholder string with new values
			///  int newInt = 100;
			///  workbook->Replace(new String("OldInt"), newInt);
			///  
			///  StringPtr newString = new String("Hello!");
			///  workbook->Replace((StringPtr)(new String("OldString")), (StringPtr)newString);
			///  workbook->Save(designerFile);
			///      
			///  </code>
			/// 
			///  </example>
			/// 
			/// 
	class ASPOSE_CELLS_API IWorkbook : public Aspose::Cells::System::IDisposable , public Aspose::Cells::System::Object
	{
		public:
			/// <summary>
			/// Represents the workbook settings.
			/// </summary>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::IWorkbookSettings> 		GetISettings()=0;
			/// <summary>
			/// Represents the workbook settings.
			/// </summary>
			/// 
			/// 
			 virtual void SetSettings(intrusive_ptr<Aspose::Cells::IWorkbookSettings> value)=0;
			/// <summary>
			/// Initialize the workbook object.
			/// </summary>
			/// 
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use Factory::CreateIWorkbook().</remarks>
			/// 
			/// 
			 virtual void Initialize()=0;
			 
			/// <summary>
			/// Saves Excel file to a MemoryStream object and returns it.
			/// </summary>
			/// 
			/// <returns>MemoryStream object which contains an Excel file.</returns>
			/// 
			/// <remarks>
			/// 
			/// This method provides same function as Save method and only save the workbook as Excel97-2003 xls file. 
			/// It's mainly for calling from COM clients.</remarks>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> SaveToStream()=0;
			/// <summary>
			/// Creates and saves the specified file to the disk.
			/// </summary>
			/// 
			/// <param name="fileName" >The name of created file.</param>
			/// 
			/// <remarks><p>File format is according to file extension.</p>
			/// 
			/// After calling Save method, data in Workbook instance will be reset.</remarks>
			/// 
			/// 
			 virtual void Save(intrusive_ptr<Aspose::Cells::System::String> fileName)=0;
			/// <summary>
			/// Saves the workbook to the disk.
			/// </summary>
			/// 
			/// <param name="fileName" >The file name.</param>
			/// 
			/// <param name="saveFormat" >The save format type.</param>
			/// 
			/// 
			 virtual void Save(intrusive_ptr<Aspose::Cells::System::String> fileName , Aspose::Cells::SaveFormat saveFormat)=0;
			/// <summary>
			/// Saves the workbook to the disk.
			/// </summary>
			/// 
			/// <param name="fileName" >The file name.</param>
			/// 
			/// <param name="saveOptions" >The save options.</param>
			/// 
			/// 
			 virtual void Save(intrusive_ptr<Aspose::Cells::System::String> fileName , intrusive_ptr<Aspose::Cells::ISaveOptions> saveOptions)=0;
			/// <summary>
			/// Saves the workbook to the stream.
			/// </summary>
			/// 
			/// <param name="stream" >The file stream.</param>
			/// 
			/// <param name="saveFormat" >The save file format type.</param>
			/// 
			/// 
			 virtual void Save(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream , Aspose::Cells::SaveFormat saveFormat)=0;
			/// <summary>
			/// Saves the workbook to the stream.
			/// </summary>
			/// 
			/// <param name="stream" >The file stream.</param>
			/// 
			/// <param name="saveOptions" >The save options.</param>
			/// 
			/// 
			 virtual void Save(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream , intrusive_ptr<Aspose::Cells::ISaveOptions> saveOptions)=0;
			/// <summary>
			/// Gets the <see cref="WorksheetCollection" />
			///  collection in the spreadsheet.
			/// </summary>
			/// 
			/// <returns><see cref="IWorksheetCollection" />
			///  collection</returns>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::IWorksheetCollection> 		GetIWorksheets()=0;
			/// <summary>
			/// Indicates whether license is set.
			/// </summary>
			/// 
			/// 
			 virtual bool IsLicensed()=0;
	
			/// <summary>
			/// Gets the <see cref="IStyleCollection"/> collection.
			/// </summary>
			/// <remarks>
			/// NOTE: This class is now obsolete. Instead, 
			/// please use CreateIStyle() to create and manipulate style for workbook instead of Add() method of IStyleCollection
			/// and use GetNamedIStyle(StringPtr) to get named style instead of GetObjectByIndex(StringPtr) in IStyleCollection.</remarks>		 
			 virtual intrusive_ptr<Aspose::Cells::IStyleCollection> 		GetIStyles()=0;
			/// <summary>
			/// Remove all unused styles.
			/// </summary>
			/// 
			/// 
			 virtual void RemoveUnusedStyles()=0;
			/// <summary>
			/// Creates a new style.
			/// </summary>
			/// 
			/// <returns>Returns a style object.</returns>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::IStyle> 		CreateIStyle()=0;
			/// <summary>
			/// Creates built-in style by given type.
			/// </summary>
			/// 
			/// <param name="type" />
			/// 
			/// <returns>IStyle object</returns>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::IStyle> 		CreateBuiltinIStyle(Aspose::Cells::BuiltinStyleType type)=0;
			/// <summary>
			///  Replaces a cell's value with a new string.
			/// </summary>
			/// 
			/// <example>
			///  <code>
			///  [C++]
			///  
			///  intrusive_ptr<IWorkbook> workbook = Factory::CreateIWorkbook();
			///  ......
			///  workbook->Replace((StringPtr)new String("AnOldValue"), (StringPtr)new String("NewValue"));
			///  
			///  </code>
			/// 
			///  </example>
			/// 
			/// <param name="placeHolder" >Cell placeholder</param>
			/// 
			/// <param name="newValue" >String value to replace</param>
			/// 
			/// 
			 virtual Aspose::Cells::System::Int32 Replace(intrusive_ptr<Aspose::Cells::System::String> placeHolder , intrusive_ptr<Aspose::Cells::System::String> newValue)=0;
			/// <summary>
			///  Replaces a cell's value with a new integer.
			/// </summary>
			/// 
			/// <example>
			///  <code>
			///  [C++]
			///  
			///  intrusive_ptr<IWorkbook> workbook = Factory::CreateIWorkbook();
			///  ......
			///  int newValue = 100;
			///  workbook->Replace(StringPtr)new String("AnOldValue"), newValue);
			///  
			///  </code>
			/// 
			///  </example>
			/// 
			/// <param name="placeHolder" >Cell placeholder</param>
			/// 
			/// <param name="newValue" >Integer value to replace</param>
			/// 
			/// 
			 virtual Aspose::Cells::System::Int32 Replace(intrusive_ptr<Aspose::Cells::System::String> placeHolder , Aspose::Cells::System::Int32 newValue)=0;
			/// <summary>
			///  Replaces a cell's value with a new double.
			/// </summary>
			/// 
			/// <example>
			///  <code>
			///  
			///  [C++]
			///  
			///  intrusive_ptr<IWorkbook> workbook = Factory::CreateIWorkbook();
			///  ......
			///  double newValue = 100.0;
			///  workbook.Replace(new String("AnOldValue"), newValue);
			///  
			///  </code>
			/// 
			///  </example>
			/// 
			/// <param name="placeHolder" >Cell placeholder</param>
			/// 
			/// <param name="newValue" >Double value to replace</param>
			/// 
			/// 
			 virtual Aspose::Cells::System::Int32 Replace(intrusive_ptr<Aspose::Cells::System::String> placeHolder , Aspose::Cells::System::Double newValue)=0;
			/// <summary>
			///  Replaces a cell's value with a new string array.
			/// </summary>
			/// 
			/// <example>
			///  <code>
			///  
			///  [C++]
			///  intrusive_ptr<IWorkbook> workbook = Factory::CreateIWorkbook();
			///  intrusive_ptr<Array1D<String*>> newValues = new Array1D<String*>(3);
			///  newValues->SetValue(new String("Tom"), 0);
			///  newValues->SetValue(new String("Alice"), 1);
			///  newValues->SetValue(new String("Jerry"), 2);
			///  workbook->Replace(new String("AnOldValue"), newValues, true);
			///  
			///  </code>
			/// 
			///  </example>
			/// 
			/// <param name="placeHolder" >Cell placeholder</param>
			/// 
			/// <param name="newValues" >String array to replace</param>
			/// 
			/// <param name="isVertical" >True - Vertical, False - Horizontal</param>
			/// 
			/// 
			 virtual Aspose::Cells::System::Int32 Replace(intrusive_ptr<Aspose::Cells::System::String> placeHolder , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> newValues , bool isVertical)=0;
			/// <summary>
			///  Replaces cells' values with an integer array.
			/// </summary>
			/// 
			/// <example>
			///  <code>
			///  [C++]
			///  
			///  intrusive_ptr<IWorkbook> workbook = Factory::CreateIWorkbook();
			///  ......
			///  intrusive_ptr<Array1D<int>> newValues = new Array1D<int>(3);
			///  newValues->SetValue(1, 0);
			///  newValues->SetValue(2, 1);
			///  newValues->SetValue(3, 2);
			///  workbook->Replace(new String("AnOldValue"), newValues, true);
			///  </code>
			/// 
			///  </example>
			/// 
			/// <param name="placeHolder" >Cell placeholder</param>
			/// 
			/// <param name="newValues" >Integer array to replace</param>
			/// 
			/// <param name="isVertical" >True - Vertical, False - Horizontal</param>
			/// 
			/// 
			 virtual Aspose::Cells::System::Int32 Replace(intrusive_ptr<Aspose::Cells::System::String> placeHolder , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> newValues , bool isVertical)=0;
			/// <summary>
			///  Replaces cells' values with a double array.
			/// </summary>
			/// 
			/// <example>
			///  <code>
			///  
			///  [C++]
			///  
			///  intrusive_ptr<IWorkbook> workbook = Factory::CreateIWorkbook();
			///  ......
			///  intrusive_ptr<Array1D<double>> newValues = new Array1D<double>(3);
			///  newValues->SetValue(1.23, 0);
			///  newValues->SetValue(2.56, 1);
			///  newValues->SetValue(3.14159, 2);
			///  workbook->Replace(new String("AnOldValue"), newValues, true);
			///  
			///  </code>
			/// 
			///  </example>
			/// 
			/// <param name="placeHolder" >Cell placeholder</param>
			/// 
			/// <param name="newValues" >Double array to replace</param>
			/// 
			/// <param name="isVertical" >True - Vertical, False - Horizontal</param>
			/// 
			/// 
			 virtual Aspose::Cells::System::Int32 Replace(intrusive_ptr<Aspose::Cells::System::String> placeHolder , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> newValues , bool isVertical)=0;
			/// <summary>
			/// Replaces cells' values with new data.
			/// </summary>
			/// 
			/// <param name="boolValue" >The boolean value to be replaced.</param>
			/// 
			/// <param name="newValue" >New value. Can be string, integer, double or DateTime value.</param>
			/// 
			/// 
			 virtual Aspose::Cells::System::Int32 Replace(bool boolValue , intrusive_ptr<Aspose::Cells::System::Object> newValue)=0;
			/// <summary>
			/// Replaces cells' values with new data.
			/// </summary>
			/// 
			/// <param name="intValue" >The integer value to be replaced.</param>
			/// 
			/// <param name="newValue" >New value. Can be string, integer, double or DateTime value.</param>
			/// 
			/// 
			 virtual Aspose::Cells::System::Int32 Replace(Aspose::Cells::System::Int32 intValue , intrusive_ptr<Aspose::Cells::System::Object> newValue)=0;
			/// <summary>
			/// Copies data from a source Workbook object.
			/// </summary>
			/// 
			/// <param name="source" >Source Workbook object.</param>
			/// 
			/// 
			 virtual void Copy(intrusive_ptr<Aspose::Cells::IWorkbook> source)=0;
			/// <summary>
			/// Combines another Workbook object.
			/// </summary>
			/// 
			/// <param name="secondWorkbook" >Another Workbook object.</param>
			/// 
			/// <remarks>Currently, only cell data and cell style of the second Workbook object can be combined. Images, charts and other drawing objects are not supported.
			/// </remarks>
			/// 
			/// 
			 virtual void Combine(intrusive_ptr<Aspose::Cells::IWorkbook> secondWorkbook)=0;
			/// <summary>
			/// Returns colors in the palette for the spreadsheet. 
			/// </summary>
			/// 
			/// <remarks>The palette has 56 entries, each represented by an RGB value.</remarks>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Drawing::Color*>> GetColors()=0;
			/// <summary>
			/// Gets the style in the style pool.
			/// All styles in the workbook will be gathered into a pool.
			/// There is only a simple reference index in the cells.
			/// </summary>
			/// 
			/// <param name="index" >The index.</param>
			/// 
			/// <returns>
			/// The style in the pool corresponds to given index, may be null.
			/// </returns>
			/// 
			/// <remarks>
			/// If the returned style is changed, the style of all cells(which refers to this style) will be changed.
			/// </remarks>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::IStyle> 		GetIStyleInPool(Aspose::Cells::System::Int32 index)=0;
			/// <summary>
			/// Gets number of the styles in the style pool.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::System::Int32 GetCountOfStylesInPool()=0;
			/// <summary>
			/// Gets the named style in the style pool.
			/// </summary>
			/// 
			/// <param name="name" >name of the style</param>
			/// 
			/// <returns>named style, maybe null.</returns>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::IStyle> 		GetNamedIStyle(intrusive_ptr<Aspose::Cells::System::String> name)=0;
			/// <summary>
			///  Changes the palette for the spreadsheet in the specified index.
			///  </summary>
			/// 
			/// <param name="color" >Color structure.</param>
			/// 
			/// <param name="index" >Palette index, 0 - 55.</param>
			/// 
			/// 
			/// 
			 virtual void ChangePalette(intrusive_ptr<Aspose::Cells::System::Drawing::Color> color , Aspose::Cells::System::Int32 index)=0;
			/// <summary>
			/// Checks if a color is in the palette for the spreadsheet.
			/// </summary>
			/// 
			/// <param name="color" >Color structure.</param>
			/// 
			/// <returns>Returns true if this color is in the palette. Otherwise, returns false</returns>
			/// 
			/// 
			 virtual bool IsColorInPalette(intrusive_ptr<Aspose::Cells::System::Drawing::Color> color)=0;
			/// <summary>
			///  Calculates the result of formulas, which is not supported in ver 1.0
			///  </summary>
			/// 
			 virtual void CalculateFormula()=0;
			/// <summary>
			/// Calculates the result of formulas, which is not supported in ver 1.0
			/// </summary>
			/// 
			/// <param name="ignoreError" >Indicates if hide the error in calculating formulas. The error may be unsupported function, external links, etc.</param>
			/// 
			/// 
			 virtual void CalculateFormula(bool ignoreError)=0;
			/// <summary>
			///  Gets the default <see cref="IStyle" />
			///  object of the workbook.
			///  </summary>
			/// 
			/// <remarks>
			///  The DefaultStyle is useful to implement an IStyle for the whole Workbook. 
			///  </remarks>
			/// 
			/// <example>
			///  The following code creates and instantiates a new Workbook and sets a default <see cref="IStyle" />
			///  to it.
			///  <code>
			///  [C++]
			///  intrusive_ptr<IWorkbook> workbook = Factory::CreateIWorkbook();
			///  intrusive_ptr<IStyle> defaultStyle = workbook->c_GetDefaultStyle();
			///  defaultStyle->c_GetFont()->SetName(new String("Tahoma"));
			///  workbook->SetDefaultStyle(defaultStyle);
			/// 
			///  </code>
			/// 
			///  </example>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::IStyle> 		GetDefaultIStyle()=0;
			/// <summary>
			///  Sets the default <see cref="IStyle" />
			///  object of the workbook.
			///  </summary>
			/// 
			/// <remarks>
			///  The DefaultStyle is useful to implement an IStyle for the whole Workbook. 
			///  </remarks>
			/// 
			/// <example>
			///  The following code creates and instantiates a new Workbook and sets a default <see cref="IStyle" />
			///  to it.
			///  <code>
			///  [C++]
			///  intrusive_ptr<IWorkbook> workbook = Factory::CreateIWorkbook();
			///  intrusive_ptr<IStyle> defaultStyle = workbook->c_GetDefaultStyle();
			///  defaultStyle->c_GetFont()->SetName(new String("Tahoma"));
			///  workbook->SetDefaultStyle(defaultStyle);
			/// 
			///  </code>
			/// 
			///  </example>
			/// 
			/// 
			 virtual void SetDefaultStyle(intrusive_ptr<Aspose::Cells::IStyle> value)=0;
			/// <summary>
			/// Checks if a formula is valid.
			/// </summary>
			/// 
			/// <param name="formula" >Formula string.</param>
			/// 
			/// <returns>True: valid formula. False: invalid formula or unsupported function.</returns>
			/// 
			/// <remarks>
			/// NOTE: This member is now obsolete. Instead, 
			/// please use GetFormula() of ICell method.</remarks>
			/// 
			/// 
			 virtual bool ValidateFormula(intrusive_ptr<Aspose::Cells::System::String> formula)=0;
			/// <summary>
			/// Find best matching Color in current palette.
			/// </summary>
			/// 
			/// <param name="rawColor" >Raw color.</param>
			/// 
			/// <returns>Best matching color.</returns>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::System::Drawing::Color> GetMatchingColor(intrusive_ptr<Aspose::Cells::System::Drawing::Color> rawColor)=0;
			/// <summary>
			/// Indicates if this spreadsheet is digitally signed.
			/// </summary>
			/// 
			/// 
			 virtual bool IsDigitallySigned()=0;
			/// <summary>
			/// Gets and sets the current file name.
			/// </summary>
			/// 
			/// <remarks>
			/// If the file is opened by stream and there are some external formula references,
			/// please set the file name.
			/// </remarks>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetFileName()=0;
			/// <summary>
			/// Gets and sets the current file name.
			/// </summary>
			/// 
			/// <remarks>
			/// If the file is opened by stream and there are some external formula references,
			/// please set the file name.
			/// </remarks>
			/// 
			/// 
			 virtual void SetFileName(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Removes all external links in the workbook.
			/// </summary>
			/// 
			/// 
			 virtual void RemoveExternalLinks()=0;
			/// <summary>
			/// Gets theme color.
			/// </summary>
			/// 
			/// <param name="type" >The theme color type.</param>
			/// 
			/// <returns>The theme color.</returns>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::System::Drawing::Color> GetThemeColor(Aspose::Cells::ThemeColorType type)=0;
			/// <summary>
			/// Sets the theme color
			/// </summary>
			/// 
			/// <param name="type" >The theme color type.</param>
			/// 
			/// <param name="color" >the theme color</param>
			/// 
			/// 
			 virtual void SetThemeColor(Aspose::Cells::ThemeColorType type , intrusive_ptr<Aspose::Cells::System::Drawing::Color> color)=0;
			/// <summary>
			/// Gets the theme name. 
			/// </summary>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetTheme()=0;
			/// <summary>
			/// Customs the theme.
			/// </summary>
			/// 
			/// <param name="themeName" >The theme name</param>
			/// 
			/// <param name="colors" >The theme colors</param>
			/// 
			/// 
			/// 
			 virtual void CustomTheme(intrusive_ptr<Aspose::Cells::System::String> themeName , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Drawing::Color*>> colors)=0;
			/// <summary>
			/// Copies the theme from another workbook.
			/// </summary>
			/// 
			/// <param name="source" >Source workbook.</param>
			/// 
			/// 
			 virtual void CopyTheme(intrusive_ptr<Aspose::Cells::IWorkbook> source)=0;
			/// <summary>
			/// Indicates whether this workbook contains external links to other data sources.
			/// </summary>
			/// 
			/// <returns>Whether this workbook contains external links to other data sources.</returns>
			/// 
			/// 
			 virtual bool HasExernalLinks()=0;
			/// <summary>
			/// If this workbook contains external links to other data source,
			/// Aspose.Cells will attempt to retrieve the latest data.
			/// </summary>
			/// 
			/// <param name="exteralWorkbooks" >
			/// External workbooks are referred by this workbook.
			/// If it's null, we will directly open the external linked files..
			/// If it's not null, 
			/// we will check whether the external link in the array first;
			/// if not, we will open the external linked files again.
			/// </param>
			/// 
			/// <remarks>
			/// If the method is not called before calculating formulas,
			/// Aspose.Cells will use the previous information(cached in the file);
			/// Please set CellsHelper::GetStartupPath_i(),CellsHelper::GetAltStartPath_i,CellsHelper::GetLibraryPath_i(). 
			/// And please set Workbook.FilePath if this workbook is from a stream,
			/// otherwise Aspose.Cells could not get the external link full path sometimes.
			/// </remarks>
			/// 
			/// 
			 virtual void UpdateLinkedDataSource(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::IWorkbook*>> exteralWorkbooks)=0;
			/// <summary>
			/// Gets and sets the file format.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::FileFormatType GetFileFormat()=0;
			/// <summary>
			/// Gets and sets the file format.
			/// </summary>
			/// 
			/// 
			 virtual void SetFileFormat(Aspose::Cells::FileFormatType value)=0;
			/// <summary>
			/// Gets and sets the XML file that defines the Ribbon UI.
			/// </summary>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetRibbonXml()=0;
			/// <summary>
			/// Gets and sets the XML file that defines the Ribbon UI.
			/// </summary>
			/// 
			/// 
			 virtual void SetRibbonXml(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Performs application-defined tasks associated with freeing, releasing, or
			/// resetting unmanaged resources.
			/// </summary>
			/// 
			/// 
			 virtual void Dispose()=0;
public:
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}

	};
}
}
