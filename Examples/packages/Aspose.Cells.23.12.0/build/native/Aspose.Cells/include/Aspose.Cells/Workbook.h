// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_WORKBOOK_H
#define ASPOSE_CELLS_WORKBOOK_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"
#include "Aspose.Cells/Vector.h"
#include "Aspose.Cells/Color.h"

#include "Aspose.Cells/AccessCacheOptions.h"
#include "Aspose.Cells/BuiltinStyleType.h"
#include "Aspose.Cells/EncryptionType.h"
#include "Aspose.Cells/FileFormatType.h"
#include "Aspose.Cells/ProtectionType.h"
#include "Aspose.Cells/SaveFormat.h"
#include "Aspose.Cells/ThemeColorType.h"

namespace Aspose { namespace Cells {
    class WorkbookSettings;
    class SaveOptions;
    class WorksheetCollection;
    class Style;
    class CellsColor;
    class ReplaceOptions;
    class CopyOptions;
    class Font;
    class CalculationOptions;
    class DataSorter;
    class CustomFunctionDefinition;
    class AbstractInterruptMonitor;
    class InterruptMonitor;
    class LoadOptions;
} }

namespace Aspose { namespace Cells { namespace Vba {
    class VbaProject;
} } }

namespace Aspose { namespace Cells { namespace Properties {
    class BuiltInDocumentPropertyCollection;
    class CustomDocumentPropertyCollection;
    class ContentTypePropertyCollection;
} } }

namespace Aspose { namespace Cells { namespace Markup {
    class CustomXmlPartCollection;
} } }

namespace Aspose { namespace Cells { namespace QueryTables {
    class DataMashup;
} } }

namespace Aspose { namespace Cells { namespace ExternalConnections {
    class ExternalConnectionCollection;
} } }

namespace Aspose { namespace Cells { namespace DigitalSignatures {
    class DigitalSignatureCollection;
} } }

namespace Aspose { namespace Cells {

using namespace Aspose::Cells::DigitalSignatures;
using namespace Aspose::Cells::ExternalConnections;
using namespace Aspose::Cells::Markup;
using namespace Aspose::Cells::Properties;
using namespace Aspose::Cells::QueryTables;
using namespace Aspose::Cells::Vba;

class Workbook_Impl;

/// <summary>
/// Represents a root object to create an Excel spreadsheet.
/// </summary>
/// <remarks>The Workbook class denotes an Excel spreadsheet. Each spreadsheet can contain multiple worksheets.
/// The basic feature of the class is to open and save native excel files.
/// The class has some advanced features like copying data from other Workbooks, combining two Workbooks, converting Excel to PDF, rendering Excel to image and protecting the Excel spreadsheet.
/// </remarks>
class ASPOSE_CELLS_API2 Workbook {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    Workbook_Impl* _impl;
    
public:
    /// <summary>
    /// Initializes a new instance of the <see cref="Workbook"/> class.
    /// </summary>
    /// <remarks>
    /// The default file format type is Xlsx. If you want to create other types of files, please use Workbook(FileFormatType).
    /// </remarks>
    ASPOSE_CELLS_API Workbook();
    /// <summary>
    /// Initializes a new instance of the <see cref="Workbook"/> class.
    /// </summary>
    /// <param name="fileFormatType">
    /// The new file format.
    /// </param>
    /// <remarks>
    /// The default file format type is Excel97To2003.
    /// </remarks>
    ASPOSE_CELLS_API explicit Workbook(FileFormatType fileFormatType);
    /// <summary>
    /// Initializes a new instance of the <see cref="Workbook"/> class and open a file.
    /// </summary>
    /// <param name="file">The file name.</param>
    ASPOSE_CELLS_API explicit Workbook(const U16String& file);
    /// <summary>
    /// Initializes a new instance of the <see cref="Workbook"/> class and open a file.
    /// </summary>
    /// <param name="file">The file name.</param>
    ASPOSE_CELLS_API explicit Workbook(const char16_t* file);
    /// <summary>
    /// Initializes a new instance of the <see cref="Workbook"/> class and open a stream.
    /// </summary>
    /// <param name="stream">The stream.</param>
    ASPOSE_CELLS_API explicit Workbook(const Vector<uint8_t>& stream);
    /// <summary>
    /// Initializes a new instance of the <see cref="Workbook"/> class and open a file.
    /// </summary>
    /// <param name="file">The file name.</param>
    /// <param name="loadOptions">The load options</param>
    ASPOSE_CELLS_API Workbook(const U16String& file, const LoadOptions& loadOptions);
    /// <summary>
    /// Initializes a new instance of the <see cref="Workbook"/> class and open a file.
    /// </summary>
    /// <param name="file">The file name.</param>
    /// <param name="loadOptions">The load options</param>
    ASPOSE_CELLS_API Workbook(const char16_t* file, const LoadOptions& loadOptions);
    /// <summary>
    /// Initializes a new instance of the <see cref="Workbook"/> class and open stream.
    /// </summary>
    /// <param name="stream">The stream.</param>
    /// <param name="loadOptions">The load options</param>
    ASPOSE_CELLS_API Workbook(const Vector<uint8_t>& stream, const LoadOptions& loadOptions);
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API Workbook(Workbook_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API Workbook(const Workbook& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~Workbook();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API Workbook& operator=(const Workbook& src);
    /// <summary>
    /// operator bool()
    /// </summary>
    /// <returns>Returns true if the implementation object is not nullptr. Otherwise, returns false</returns>
    ASPOSE_CELLS_API explicit operator bool() const { return _impl != nullptr; }
    /// <summary>
    /// Checks whether the implementation object is nullptr.
    /// </summary>
    /// <returns>Returns true if the implementation object is nullptr. Otherwise, returns false</returns>
    ASPOSE_CELLS_API bool IsNull() const { return _impl == nullptr; }
    
public:
    /// <summary>
    /// Represents the workbook settings.
    /// </summary>
    ASPOSE_CELLS_API WorkbookSettings GetSettings();
    /// <summary>
    /// Parses all formulas which have not been parsed when they were loaded from template file or set to a cell.
    /// </summary>
    /// <param name="ignoreError">Whether ignore error for invalid formula.
    /// For one invalid formula, if ignore error then this formula will be ignored
    /// and the process will continue to parse other formulas, otherwise exception will be thrown.</param>
    ASPOSE_CELLS_API void ParseFormulas(bool ignoreError);
    /// <summary>
    /// Starts the session that uses caches to access data.
    /// </summary>
    /// <param name="opts">options of data access</param>
    /// <remarks>If the cache of specified data access requires some data models in worksheet to be "read-only",
    /// then corresponding data models in every worksheet in this workbook will be taken as "read-only"
    /// and user should not change any of them.
    /// <br></br>
    /// After finishing the access to the data, <see cref="CloseAccessCache(AccessCacheOptions)"/> should
    /// be invoked with same options to clear all caches and recover normal access mode.
    /// <br></br>
    /// </remarks>
    ASPOSE_CELLS_API void StartAccessCache(AccessCacheOptions opts);
    /// <summary>
    /// Closes the session that uses caches to access data.
    /// </summary>
    /// <param name="opts">options of data access</param>
    ASPOSE_CELLS_API void CloseAccessCache(AccessCacheOptions opts);
    /// <summary>
    /// Saves the workbook to the disk.
    /// </summary>
    /// <param name="fileName">The file name.</param>
    /// <param name="saveFormat">The save format type.</param>
    ASPOSE_CELLS_API void Save(const U16String& fileName, SaveFormat saveFormat);
    /// <summary>
    /// Saves the workbook to the disk.
    /// </summary>
    /// <param name="fileName">The file name.</param>
    /// <param name="saveFormat">The save format type.</param>
    ASPOSE_CELLS_API void Save(const char16_t* fileName, SaveFormat saveFormat);
    /// <summary>
    /// Save the workbook to the disk.
    /// </summary>
    /// <param name="fileName"></param>
    ASPOSE_CELLS_API void Save(const U16String& fileName);
    /// <summary>
    /// Save the workbook to the disk.
    /// </summary>
    /// <param name="fileName"></param>
    ASPOSE_CELLS_API void Save(const char16_t* fileName);
    /// <summary>
    /// Saves the workbook to the disk.
    /// </summary>
    /// <param name="fileName">The file name.</param>
    /// <param name="saveOptions">The save options.</param>
    ASPOSE_CELLS_API void Save(const U16String& fileName, const SaveOptions& saveOptions);
    /// <summary>
    /// Saves the workbook to the disk.
    /// </summary>
    /// <param name="fileName">The file name.</param>
    /// <param name="saveOptions">The save options.</param>
    ASPOSE_CELLS_API void Save(const char16_t* fileName, const SaveOptions& saveOptions);
    /// <summary>
    /// Saves the workbook to the stream.
    /// </summary>
    /// <param name="stream">The file stream.</param>
    /// <param name="saveFormat">The save file format type.</param>
    ASPOSE_CELLS_API Vector<uint8_t> Save(SaveFormat saveFormat);
    /// <summary>
    /// Saves the workbook to the stream.
    /// </summary>
    /// <param name="stream">The file stream.</param>
    /// <param name="saveOptions">The save options.</param>
    ASPOSE_CELLS_API Vector<uint8_t> Save(const SaveOptions& saveOptions);
    /// <summary>
    /// Saves Excel file to a MemoryStream object and returns it.
    /// </summary>
    /// <returns>MemoryStream object which contains an Excel file.</returns>
    /// <remarks>
    /// This method provides same function as Save method and only save the workbook as Excel97-2003 xls file.
    /// It's mainly for calling from COM clients.</remarks>
    ASPOSE_CELLS_API Vector<uint8_t> SaveToStream();
    /// <summary>
    /// Gets the <see cref="WorksheetCollection"/> collection in the spreadsheet.
    /// </summary>
    /// <returns><see cref="WorksheetCollection"/> collection</returns>
    ASPOSE_CELLS_API WorksheetCollection GetWorksheets();
    /// <summary>
    /// Indicates whether license is set.
    /// </summary>
    ASPOSE_CELLS_API bool IsLicensed();
    /// <summary>
    /// Remove all unused styles.
    /// </summary>
    ASPOSE_CELLS_API void RemoveUnusedStyles();
    /// <summary>
    /// Creates a new style.
    /// </summary>
    /// <returns>Returns a style object.</returns>
    ASPOSE_CELLS_API Style CreateStyle();
    /// <summary>
    /// Creates built-in style by given type.
    /// </summary>
    /// <param name="type">The builtin style stype.</param>
    /// <returns><see cref="Style"/> object</returns>
    ASPOSE_CELLS_API Style CreateBuiltinStyle(BuiltinStyleType type);
    /// <summary>
    /// Creates a <see cref="CellsColor"/> object.
    /// </summary>
    /// <returns>Returns a <see cref="CellsColor"/> object.</returns>
    ASPOSE_CELLS_API CellsColor CreateCellsColor();
    /// <summary>
    /// Replaces a cell's value with a new string.
    /// </summary>
    /// <param name="placeHolder">Cell placeholder</param>
    /// <param name="newValue">String value to replace</param>
    ASPOSE_CELLS_API int32_t Replace(const U16String& placeHolder, const U16String& newValue);
    /// <summary>
    /// Replaces a cell's value with a new string.
    /// </summary>
    /// <param name="placeHolder">Cell placeholder</param>
    /// <param name="newValue">String value to replace</param>
    ASPOSE_CELLS_API int32_t Replace(const char16_t* placeHolder, const char16_t* newValue);
    /// <summary>
    /// Replaces a cell's value with a new integer.
    /// </summary>
    /// <param name="placeHolder">Cell placeholder</param>
    /// <param name="newValue">Integer value to replace</param>
    ASPOSE_CELLS_API int32_t Replace(const U16String& placeHolder, int32_t newValue);
    /// <summary>
    /// Replaces a cell's value with a new integer.
    /// </summary>
    /// <param name="placeHolder">Cell placeholder</param>
    /// <param name="newValue">Integer value to replace</param>
    ASPOSE_CELLS_API int32_t Replace(const char16_t* placeHolder, int32_t newValue);
    /// <summary>
    /// Replaces a cell's value with a new double.
    /// </summary>
    /// <param name="placeHolder">Cell placeholder</param>
    /// <param name="newValue">Double value to replace</param>
    ASPOSE_CELLS_API int32_t Replace(const U16String& placeHolder, double newValue);
    /// <summary>
    /// Replaces a cell's value with a new double.
    /// </summary>
    /// <param name="placeHolder">Cell placeholder</param>
    /// <param name="newValue">Double value to replace</param>
    ASPOSE_CELLS_API int32_t Replace(const char16_t* placeHolder, double newValue);
    /// <summary>
    /// Replaces a cell's value with a new string array.
    /// </summary>
    /// <param name="placeHolder">Cell placeholder</param>
    /// <param name="newValues">String array to replace</param>
    /// <param name="isVertical">True - Vertical, False - Horizontal</param>
    ASPOSE_CELLS_API int32_t Replace(const U16String& placeHolder, const Vector<U16String>& newValues, bool isVertical);
    /// <summary>
    /// Replaces a cell's value with a new string array.
    /// </summary>
    /// <param name="placeHolder">Cell placeholder</param>
    /// <param name="newValues">String array to replace</param>
    /// <param name="isVertical">True - Vertical, False - Horizontal</param>
    ASPOSE_CELLS_API int32_t Replace(const char16_t* placeHolder, const Vector<U16String>& newValues, bool isVertical);
    /// <summary>
    /// Replaces cells' values with an integer array.
    /// </summary>
    /// <param name="placeHolder">Cell placeholder</param>
    /// <param name="newValues">Integer array to replace</param>
    /// <param name="isVertical">True - Vertical, False - Horizontal</param>
    ASPOSE_CELLS_API int32_t Replace(const U16String& placeHolder, const Vector<int32_t>& newValues, bool isVertical);
    /// <summary>
    /// Replaces cells' values with an integer array.
    /// </summary>
    /// <param name="placeHolder">Cell placeholder</param>
    /// <param name="newValues">Integer array to replace</param>
    /// <param name="isVertical">True - Vertical, False - Horizontal</param>
    ASPOSE_CELLS_API int32_t Replace(const char16_t* placeHolder, const Vector<int32_t>& newValues, bool isVertical);
    /// <summary>
    /// Replaces cells' values with a double array.
    /// </summary>
    /// <param name="placeHolder">Cell placeholder</param>
    /// <param name="newValues">Double array to replace</param>
    /// <param name="isVertical">True - Vertical, False - Horizontal</param>
    ASPOSE_CELLS_API int32_t Replace(const U16String& placeHolder, const Vector<double>& newValues, bool isVertical);
    /// <summary>
    /// Replaces cells' values with a double array.
    /// </summary>
    /// <param name="placeHolder">Cell placeholder</param>
    /// <param name="newValues">Double array to replace</param>
    /// <param name="isVertical">True - Vertical, False - Horizontal</param>
    ASPOSE_CELLS_API int32_t Replace(const char16_t* placeHolder, const Vector<double>& newValues, bool isVertical);
    /// <summary>
    /// Replaces a cell's value with a new string.
    /// </summary>
    /// <param name="placeHolder">Cell placeholder</param>
    /// <param name="newValue">String value to replace</param>
    /// <param name="options"> The replace options</param>
    ASPOSE_CELLS_API int32_t Replace(const U16String& placeHolder, const U16String& newValue, const ReplaceOptions& options);
    /// <summary>
    /// Replaces a cell's value with a new string.
    /// </summary>
    /// <param name="placeHolder">Cell placeholder</param>
    /// <param name="newValue">String value to replace</param>
    /// <param name="options"> The replace options</param>
    ASPOSE_CELLS_API int32_t Replace(const char16_t* placeHolder, const char16_t* newValue, const ReplaceOptions& options);
    /// <summary>
    /// Copies another Workbook object.
    /// </summary>
    /// <param name="source">Source Workbook object.</param>
    /// <param name="copyOptions">The options of copying other workbook.</param>
    /// <remarks>
    /// It's very simple to clone an Excel file.
    /// </remarks>
    ASPOSE_CELLS_API void Copy(const Workbook& source, const CopyOptions& copyOptions);
    /// <summary>
    /// Copies data from a source Workbook object.
    /// </summary>
    /// <param name="source">Source Workbook object.</param>
    ASPOSE_CELLS_API void Copy(const Workbook& source);
    /// <summary>
    /// Combines another Workbook object.
    /// </summary>
    /// <param name="secondWorkbook">Another Workbook object.</param>
    /// <remarks>Merge Excel, ODS , CSV and other files to one file.
    /// </remarks>
    ASPOSE_CELLS_API void Combine(const Workbook& secondWorkbook);
    /// <summary>
    /// Returns colors in the palette for the spreadsheet.
    /// </summary>
    /// <remarks>The palette has 56 entries, each represented by an RGB value.</remarks>
    ASPOSE_CELLS_API Vector<Aspose::Cells::Color> GetColors();
    /// <summary>
    /// Gets the style in the style pool.
    /// All styles in the workbook will be gathered into a pool.
    /// There is only a simple reference index in the cells.
    /// </summary>
    /// <param name="index">The index.</param>
    /// <returns>
    /// The style in the pool corresponds to given index, may be null.
    /// </returns>
    /// <remarks>
    /// If the returned style is changed, the style of all cells(which refers to this style) will be changed.
    /// </remarks>
    ASPOSE_CELLS_API Style GetStyleInPool(int32_t index);
    /// <summary>
    /// Gets number of the styles in the style pool.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetCountOfStylesInPool();
    /// <summary>
    /// Gets all fonts in the style pool.
    /// </summary>
    ASPOSE_CELLS_API Vector<Aspose::Cells::Font> GetFonts();
    /// <summary>
    /// Gets the named style in the style pool.
    /// </summary>
    /// <param name="name">name of the style</param>
    /// <returns>named style, maybe null.</returns>
    ASPOSE_CELLS_API Style GetNamedStyle(const U16String& name);
    /// <summary>
    /// Gets the named style in the style pool.
    /// </summary>
    /// <param name="name">name of the style</param>
    /// <returns>named style, maybe null.</returns>
    ASPOSE_CELLS_API Style GetNamedStyle(const char16_t* name);
    /// <summary>
    /// Changes the palette for the spreadsheet in the specified index.
    /// </summary>
    /// <param name="color">Color structure.</param>
    /// <param name="index">Palette index, 0 - 55.</param>
    /// <remarks>
    /// <p>The palette has 56 entries, each represented by an RGB value.</p>
    /// <p>If you set a color which is not in the palette, it will not take effect.</p>
    /// <p>So if you want to set a custom color, please change the palette at first.</p>
    /// <p>The following is the standard color palette.</p>
    /// <list type="table">
    /// <listheader>
    /// <description>Color</description>
    /// <description>Red</description>
    /// <description>Green</description>
    /// <description>Blue</description>
    /// </listheader>
    /// <item>
    /// <description>Black</description>
    /// <description>0</description>
    /// <description>0</description>
    /// <description>0</description>
    /// </item>
    /// <item>
    /// <description>White</description>
    /// <description>255</description>
    /// <description>255</description>
    /// <description>255</description>
    /// </item>
    /// <item>
    /// <description>Red</description>
    /// <description>255</description>
    /// <description>0</description>
    /// <description>0</description>
    /// </item>
    /// <item>
    /// <description>Lime</description>
    /// <description>0</description>
    /// <description>255</description>
    /// <description>0</description>
    /// </item>
    /// <item>
    /// <description>Blue</description>
    /// <description>0</description>
    /// <description>0</description>
    /// <description>255</description>
    /// </item>
    /// <item>
    /// <description>Yellow</description>
    /// <description>255</description>
    /// <description>255</description>
    /// <description>0</description>
    /// </item>
    /// <item>
    /// <description>Magenta</description>
    /// <description>255</description>
    /// <description>0</description>
    /// <description>255</description>
    /// </item>
    /// <item>
    /// <description>Cyan</description>
    /// <description>0</description>
    /// <description>255</description>
    /// <description>255</description>
    /// </item>
    /// <item>
    /// <description>Maroon</description>
    /// <description>128</description>
    /// <description>0</description>
    /// <description>0</description>
    /// </item>
    /// <item>
    /// <description>Green</description>
    /// <description>0</description>
    /// <description>128</description>
    /// <description>0</description>
    /// </item>
    /// <item>
    /// <description>Navy</description>
    /// <description>0</description>
    /// <description>0</description>
    /// <description>128</description>
    /// </item>
    /// <item>
    /// <description>Olive</description>
    /// <description>128</description>
    /// <description>128</description>
    /// <description>0</description>
    /// </item>
    /// <item>
    /// <description>Purple</description>
    /// <description>128</description>
    /// <description>0</description>
    /// <description>128</description>
    /// </item>
    /// <item>
    /// <description>Teal</description>
    /// <description>0</description>
    /// <description>128</description>
    /// <description>128</description>
    /// </item>
    /// <item>
    /// <description>Silver</description>
    /// <description>192</description>
    /// <description>192</description>
    /// <description>192</description>
    /// </item>
    /// <item>
    /// <description>Gray</description>
    /// <description>128</description>
    /// <description>128</description>
    /// <description>128</description>
    /// </item>
    /// <item>
    /// <description>Color17</description>
    /// <description>153</description>
    /// <description>153</description>
    /// <description>255</description>
    /// </item>
    /// <item>
    /// <description>Color18</description>
    /// <description>153</description>
    /// <description>51</description>
    /// <description>102</description>
    /// </item>
    /// <item>
    /// <description>Color19</description>
    /// <description>255</description>
    /// <description>255</description>
    /// <description>204</description>
    /// </item>
    /// <item>
    /// <description>Color20</description>
    /// <description>204</description>
    /// <description>255</description>
    /// <description>255</description>
    /// </item>
    /// <item>
    /// <description>Color21</description>
    /// <description>102</description>
    /// <description>0</description>
    /// <description>102</description>
    /// </item>
    /// <item>
    /// <description>Color22</description>
    /// <description>255</description>
    /// <description>128</description>
    /// <description>128</description>
    /// </item>
    /// <item>
    /// <description>Color23</description>
    /// <description>0</description>
    /// <description>102</description>
    /// <description>204</description>
    /// </item>
    /// <item>
    /// <description>Color24</description>
    /// <description>204</description>
    /// <description>204</description>
    /// <description>255</description>
    /// </item>
    /// <item>
    /// <description>Color25</description>
    /// <description>0</description>
    /// <description>0</description>
    /// <description>128</description>
    /// </item>
    /// <item>
    /// <description>Color26</description>
    /// <description>255</description>
    /// <description>0</description>
    /// <description>255</description>
    /// </item>
    /// <item>
    /// <description>Color27</description>
    /// <description>255</description>
    /// <description>255</description>
    /// <description>0</description>
    /// </item>
    /// <item>
    /// <description>Color28</description>
    /// <description>0</description>
    /// <description>255</description>
    /// <description>255</description>
    /// </item>
    /// <item>
    /// <description>Color29</description>
    /// <description>128</description>
    /// <description>0</description>
    /// <description>128</description>
    /// </item>
    /// <item>
    /// <description>Color30</description>
    /// <description>128</description>
    /// <description>0</description>
    /// <description>0</description>
    /// </item>
    /// <item>
    /// <description>Color31</description>
    /// <description>0</description>
    /// <description>128</description>
    /// <description>128</description>
    /// </item>
    /// <item>
    /// <description>Color32</description>
    /// <description>0</description>
    /// <description>0</description>
    /// <description>255</description>
    /// </item>
    /// <item>
    /// <description>Color33</description>
    /// <description>0</description>
    /// <description>204</description>
    /// <description>255</description>
    /// </item>
    /// <item>
    /// <description>Color34</description>
    /// <description>204</description>
    /// <description>255</description>
    /// <description>255</description>
    /// </item>
    /// <item>
    /// <description>Color35</description>
    /// <description>204</description>
    /// <description>255</description>
    /// <description>204</description>
    /// </item>
    /// <item>
    /// <description>Color36</description>
    /// <description>255</description>
    /// <description>255</description>
    /// <description>153</description>
    /// </item>
    /// <item>
    /// <description>Color37</description>
    /// <description>153</description>
    /// <description>204</description>
    /// <description>255</description>
    /// </item>
    /// <item>
    /// <description>Color38</description>
    /// <description>255</description>
    /// <description>153</description>
    /// <description>204</description>
    /// </item>
    /// <item>
    /// <description>Color39</description>
    /// <description>204</description>
    /// <description>153</description>
    /// <description>255</description>
    /// </item>
    /// <item>
    /// <description>Color40</description>
    /// <description>255</description>
    /// <description>204</description>
    /// <description>153</description>
    /// </item>
    /// <item>
    /// <description>Color41</description>
    /// <description>51</description>
    /// <description>102</description>
    /// <description>255</description>
    /// </item>
    /// <item>
    /// <description>Color42</description>
    /// <description>51</description>
    /// <description>204</description>
    /// <description>204</description>
    /// </item>
    /// <item>
    /// <description>Color43</description>
    /// <description>153</description>
    /// <description>204</description>
    /// <description>0</description>
    /// </item>
    /// <item>
    /// <description>Color44</description>
    /// <description>255</description>
    /// <description>204</description>
    /// <description>0</description>
    /// </item>
    /// <item>
    /// <description>Color45</description>
    /// <description>255</description>
    /// <description>153</description>
    /// <description>0</description>
    /// </item>
    /// <item>
    /// <description>Color46</description>
    /// <description>255</description>
    /// <description>102</description>
    /// <description>0</description>
    /// </item>
    /// <item>
    /// <description>Color47</description>
    /// <description>102</description>
    /// <description>102</description>
    /// <description>153</description>
    /// </item>
    /// <item>
    /// <description>Color48</description>
    /// <description>150</description>
    /// <description>150</description>
    /// <description>150</description>
    /// </item>
    /// <item>
    /// <description>Color49</description>
    /// <description>0</description>
    /// <description>51</description>
    /// <description>102</description>
    /// </item>
    /// <item>
    /// <description>Color50</description>
    /// <description>51</description>
    /// <description>153</description>
    /// <description>102</description>
    /// </item>
    /// <item>
    /// <description>Color51</description>
    /// <description>0</description>
    /// <description>51</description>
    /// <description>0</description>
    /// </item>
    /// <item>
    /// <description>Color52</description>
    /// <description>51</description>
    /// <description>51</description>
    /// <description>0</description>
    /// </item>
    /// <item>
    /// <description>Color53</description>
    /// <description>153</description>
    /// <description>51</description>
    /// <description>0</description>
    /// </item>
    /// <item>
    /// <description>Color54</description>
    /// <description>153</description>
    /// <description>51</description>
    /// <description>102</description>
    /// </item>
    /// <item>
    /// <description>Color55</description>
    /// <description>51</description>
    /// <description>51</description>
    /// <description>153</description>
    /// </item>
    /// <item>
    /// <description>Color56</description>
    /// <description>51</description>
    /// <description>51</description>
    /// <description>51</description>
    /// </item>
    /// </list>
    /// </remarks>
    ASPOSE_CELLS_API void ChangePalette(const Aspose::Cells::Color& color, int32_t index);
    /// <summary>
    /// Checks if a color is in the palette for the spreadsheet.
    /// </summary>
    /// <param name="color">Color structure.</param>
    /// <returns>Returns true if this color is in the palette. Otherwise, returns false</returns>
    ASPOSE_CELLS_API bool IsColorInPalette(const Aspose::Cells::Color& color);
    /// <summary>
    /// Calculates the result of formulas.
    /// </summary>
    /// <remarks>
    /// For all supported formulas, please see the list at https://docs.aspose.com/display/cellsnet/Supported+Formula+Functions
    /// </remarks>
    ASPOSE_CELLS_API void CalculateFormula();
    /// <summary>
    /// Calculates the result of formulas.
    /// </summary>
    /// <param name="ignoreError">Indicates if hide the error in calculating formulas. The error may be unsupported function, external links, etc.</param>
    ASPOSE_CELLS_API void CalculateFormula(bool ignoreError);
    /// <summary>
    /// Calculating formulas in this workbook.
    /// </summary>
    /// <param name="options">Options for calculation</param>
    ASPOSE_CELLS_API void CalculateFormula(const CalculationOptions& options);
    /// <summary>
    /// Refreshes dynamic array formulas(spill into new range of neighboring cells according to current data)
    /// Other formulas in the workbook will not be calculated recursively even if they were used by dynamic array formulas.
    /// </summary>
    /// <param name="calculate">Whether calculates and updates cell values for those dynamic array formulas</param>
    ASPOSE_CELLS_API void RefreshDynamicArrayFormulas(bool calculate);
    /// <summary>
    /// Refreshes dynamic array formulas(spill into new range of neighboring cells according to current data)
    /// </summary>
    /// <param name="calculate">Whether calculates and updates cell values for those dynamic array formulas</param>
    /// <param name="copts">The options for calculating formulas</param>
    ASPOSE_CELLS_API void RefreshDynamicArrayFormulas(bool calculate, const CalculationOptions& copts);
    /// <summary>
    /// Gets or sets the default <see cref="Style"/> object of the workbook.
    /// </summary>
    /// <remarks>
    /// The DefaultStyle property is useful to implement a Style for the whole Workbook.
    /// </remarks>
    ASPOSE_CELLS_API Style GetDefaultStyle();
    /// <summary>
    /// Gets or sets the default <see cref="Style"/> object of the workbook.
    /// </summary>
    /// <remarks>
    /// The DefaultStyle property is useful to implement a Style for the whole Workbook.
    /// </remarks>
    ASPOSE_CELLS_API void SetDefaultStyle(const Style& value);
    /// <summary>
    /// Find best matching Color in current palette.
    /// </summary>
    /// <param name="rawColor">Raw color.</param>
    /// <returns>Best matching color.</returns>
    ASPOSE_CELLS_API Aspose::Cells::Color GetMatchingColor(const Aspose::Cells::Color& rawColor);
    /// <summary>
    /// Indicates if this spreadsheet is digitally signed.
    /// </summary>
    ASPOSE_CELLS_API bool IsDigitallySigned();
    /// <summary>
    /// Set Encryption Options.
    /// </summary>
    /// <param name="encryptionType">The encryption type.</param>
    /// <param name="keyLength">The key length.</param>
    ASPOSE_CELLS_API void SetEncryptionOptions(EncryptionType encryptionType, int32_t keyLength);
    /// <summary>
    /// Protects a workbook.
    /// </summary>
    /// <param name="protectionType">Protection type.</param>
    /// <param name="password">Password to protect the workbook.</param>
    ASPOSE_CELLS_API void Protect(ProtectionType protectionType, const U16String& password);
    /// <summary>
    /// Protects a workbook.
    /// </summary>
    /// <param name="protectionType">Protection type.</param>
    /// <param name="password">Password to protect the workbook.</param>
    ASPOSE_CELLS_API void Protect(ProtectionType protectionType, const char16_t* password);
    /// <summary>
    /// Protects a shared workbook.
    /// </summary>
    /// <param name="password">Password to protect the workbook.</param>
    ASPOSE_CELLS_API void ProtectSharedWorkbook(const U16String& password);
    /// <summary>
    /// Protects a shared workbook.
    /// </summary>
    /// <param name="password">Password to protect the workbook.</param>
    ASPOSE_CELLS_API void ProtectSharedWorkbook(const char16_t* password);
    /// <summary>
    /// Unprotects a workbook.
    /// </summary>
    /// <param name="password">Password to unprotect the workbook.</param>
    ASPOSE_CELLS_API void Unprotect(const U16String& password);
    /// <summary>
    /// Unprotects a workbook.
    /// </summary>
    /// <param name="password">Password to unprotect the workbook.</param>
    ASPOSE_CELLS_API void Unprotect(const char16_t* password);
    /// <summary>
    /// Unprotects a shared workbook.
    /// </summary>
    /// <param name="password">Password to unprotect the workbook.</param>
    ASPOSE_CELLS_API void UnprotectSharedWorkbook(const U16String& password);
    /// <summary>
    /// Unprotects a shared workbook.
    /// </summary>
    /// <param name="password">Password to unprotect the workbook.</param>
    ASPOSE_CELLS_API void UnprotectSharedWorkbook(const char16_t* password);
    /// <summary>
    /// Indicates whether structure or window is protected with password.
    /// </summary>
    ASPOSE_CELLS_API bool IsWorkbookProtectedWithPassword();
    /// <summary>
    /// Removes VBA/macro from this spreadsheet.
    /// </summary>
    ASPOSE_CELLS_API void RemoveMacro();
    /// <summary>
    /// Gets the <see cref="VbaProject"/> in a spreadsheet.
    /// </summary>
    ASPOSE_CELLS_API VbaProject GetVbaProject();
    /// <summary>
    /// Removes digital signature from this spreadsheet.
    /// </summary>
    ASPOSE_CELLS_API void RemoveDigitalSignature();
    /// <summary>
    /// Accepts all tracked changes in the workbook.
    /// </summary>
    ASPOSE_CELLS_API void AcceptAllRevisions();
    /// <summary>
    /// Indicates if this spreadsheet contains macro/VBA.
    /// </summary>
    ASPOSE_CELLS_API bool GetHasMacro();
    /// <summary>
    /// Gets if the workbook has any tracked changes
    /// </summary>
    ASPOSE_CELLS_API bool GetHasRevisions();
    /// <summary>
    /// Gets and sets the current file name.
    /// </summary>
    /// <remarks>
    /// If the file is opened by stream and there are some external formula references,
    /// please set the file name.
    /// </remarks>
    ASPOSE_CELLS_API U16String GetFileName();
    /// <summary>
    /// Gets and sets the current file name.
    /// </summary>
    /// <remarks>
    /// If the file is opened by stream and there are some external formula references,
    /// please set the file name.
    /// </remarks>
    ASPOSE_CELLS_API void SetFileName(const U16String& value);
    /// <summary>
    /// Gets and sets the current file name.
    /// </summary>
    /// <remarks>
    /// If the file is opened by stream and there are some external formula references,
    /// please set the file name.
    /// </remarks>
    ASPOSE_CELLS_API void SetFileName(const char16_t* value);
    /// <summary>
    /// Gets a DataSorter object to sort data.
    /// </summary>
    ASPOSE_CELLS_API DataSorter GetDataSorter();
    /// <summary>
    /// Gets theme color.
    /// </summary>
    /// <param name="type">The theme color type.</param>
    /// <returns>The theme color.</returns>
    ASPOSE_CELLS_API Aspose::Cells::Color GetThemeColor(ThemeColorType type);
    /// <summary>
    /// Sets the theme color
    /// </summary>
    /// <param name="type">The theme color type.</param>
    /// <param name="color">the theme color</param>
    ASPOSE_CELLS_API void SetThemeColor(ThemeColorType type, const Aspose::Cells::Color& color);
    /// <summary>
    /// Gets the theme name.
    /// </summary>
    ASPOSE_CELLS_API U16String GetTheme();
    /// <summary>
    /// Customs the theme.
    /// </summary>
    /// <param name="themeName">The theme name</param>
    /// <param name="colors">The theme colors</param>
    /// <remarks>
    /// The length of colors should be 12.
    /// <list type="table">
    /// <listheader>
    /// <description>Array index</description>
    /// <description>Theme type</description>
    /// </listheader>
    /// <item>
    /// <description>0</description>
    /// <description>Backgournd1</description>
    /// </item>
    /// <item>
    /// <description>1</description>
    /// <description>Text1</description>
    /// </item>
    /// <item>
    /// <description>2</description>
    /// <description>Backgournd2</description>
    /// </item>
    /// <item>
    /// <description>3</description>
    /// <description>Text2</description>
    /// </item>
    /// <item>
    /// <description>4</description>
    /// <description>Accent1</description>
    /// </item>
    /// <item>
    /// <description>5</description>
    /// <description>Accent2</description>
    /// </item>
    /// <item>
    /// <description>6</description>
    /// <description>Accent3</description>
    /// </item>
    /// <item>
    /// <description>7</description>
    /// <description>Accent4</description>
    /// </item>
    /// <item>
    /// <description>8</description>
    /// <description>Accent5</description>
    /// </item>
    /// <item>
    /// <description>9</description>
    /// <description>Accent6</description>
    /// </item>
    /// <item>
    /// <description>10</description>
    /// <description>Hyperlink</description>
    /// </item>
    /// <item>
    /// <description>11</description>
    /// <description>Followed Hyperlink</description>
    /// </item>
    /// </list>
    /// </remarks>
    ASPOSE_CELLS_API void CustomTheme(const U16String& themeName, const Vector<Aspose::Cells::Color>& colors);
    /// <summary>
    /// Customs the theme.
    /// </summary>
    /// <param name="themeName">The theme name</param>
    /// <param name="colors">The theme colors</param>
    /// <remarks>
    /// The length of colors should be 12.
    /// <list type="table">
    /// <listheader>
    /// <description>Array index</description>
    /// <description>Theme type</description>
    /// </listheader>
    /// <item>
    /// <description>0</description>
    /// <description>Backgournd1</description>
    /// </item>
    /// <item>
    /// <description>1</description>
    /// <description>Text1</description>
    /// </item>
    /// <item>
    /// <description>2</description>
    /// <description>Backgournd2</description>
    /// </item>
    /// <item>
    /// <description>3</description>
    /// <description>Text2</description>
    /// </item>
    /// <item>
    /// <description>4</description>
    /// <description>Accent1</description>
    /// </item>
    /// <item>
    /// <description>5</description>
    /// <description>Accent2</description>
    /// </item>
    /// <item>
    /// <description>6</description>
    /// <description>Accent3</description>
    /// </item>
    /// <item>
    /// <description>7</description>
    /// <description>Accent4</description>
    /// </item>
    /// <item>
    /// <description>8</description>
    /// <description>Accent5</description>
    /// </item>
    /// <item>
    /// <description>9</description>
    /// <description>Accent6</description>
    /// </item>
    /// <item>
    /// <description>10</description>
    /// <description>Hyperlink</description>
    /// </item>
    /// <item>
    /// <description>11</description>
    /// <description>Followed Hyperlink</description>
    /// </item>
    /// </list>
    /// </remarks>
    ASPOSE_CELLS_API void CustomTheme(const char16_t* themeName, const Vector<Aspose::Cells::Color>& colors);
    /// <summary>
    /// Copies the theme from another workbook.
    /// </summary>
    /// <param name="source">Source workbook.</param>
    ASPOSE_CELLS_API void CopyTheme(const Workbook& source);
    /// <summary>
    /// Updates definition of custom functions.
    /// </summary>
    /// <param name="definition">Special definition of custom functions for user's special requirement.</param>
    /// <remarks>This method can be used for some special scenarios. For example, if user needs some parameters
    /// of some custom functions be calculated in array mode, then user may provide their own definition with implemented
    /// <see cref="CustomFunctionDefinition.GetArrayModeParameters(string)"/> for those functions.
    /// After the data of formulas being updated, those specified parameters will be calculated in array mode automatically
    /// when calculating corresponding custom functions.</remarks>
    ASPOSE_CELLS_API void UpdateCustomFunctionDefinition(CustomFunctionDefinition* definition);
    /// <summary>
    /// If this workbook contains external links to other data source,
    /// Aspose.Cells will attempt to retrieve the latest data from give sources.
    /// </summary>
    /// <param name="externalWorkbooks">
    /// Workbooks that will be used to update data of external links referenced by this workbook.
    /// The match of those workbooks with external links is determined by <see cref="Workbook.FileName"/>
    /// and <see cref="ExternalLink.DataSource"/>. So please make sure <see cref="Workbook.FileName"/> has
    /// been specified with the proper value for every workbook so they can be linked to corresponding external link.
    /// </param>
    /// <remarks>
    /// If corresponding external link cannot be found for one workbook, then this workbook will be ignored.
    /// So when you set a formula later with one new external link which you intend to make the ignored workbook
    /// be linked to it, the link cannot be performed until you call this this method again with those workbooks.
    /// </remarks>
    ASPOSE_CELLS_API void UpdateLinkedDataSource(const Vector<Workbook>& externalWorkbooks);
    /// <summary>
    /// Returns a <see cref="DocumentProperty"/> collection that represents all the built-in document properties of the spreadsheet.
    /// </summary>
    /// <remarks>A new property cannot be added to built-in document properties list. You can only get a built-in property and change its value.
    /// The following is the built-in properties name list:
    /// <p>Title</p>
    /// <p>Subject</p>
    /// <p>Author</p>
    /// <p>Keywords</p>
    /// <p>Comments</p>
    /// <p>Template</p>
    /// <p>Last Author</p>
    /// <p>Revision Number</p>
    /// <p>Application Name</p>
    /// <p>Last Print Date</p>
    /// <p>Creation Date</p>
    /// <p>Last Save Time</p>
    /// <p>Total Editing Time</p>
    /// <p>Number of Pages</p>
    /// <p>Number of Words</p>
    /// <p>Number of Characters</p>
    /// <p>Security</p>
    /// <p>Category</p>
    /// <p>Format</p>
    /// <p>Manager</p>
    /// <p>Company</p>
    /// <p>Number of Bytes</p>
    /// <p>Number of Lines</p>
    /// <p>Number of Paragraphs</p>
    /// <p>Number of Slides</p>
    /// <p>Number of Notes</p>
    /// <p>Number of Hidden Slides</p>
    /// <p>Number of Multimedia Clips</p></remarks>
    ASPOSE_CELLS_API BuiltInDocumentPropertyCollection GetBuiltInDocumentProperties();
    /// <summary>
    /// Returns a <see cref="DocumentProperty"/> collection that represents all the custom document properties of the spreadsheet.
    /// </summary>
    ASPOSE_CELLS_API CustomDocumentPropertyCollection GetCustomDocumentProperties();
    /// <summary>
    /// Gets and sets the file format.
    /// </summary>
    ASPOSE_CELLS_API FileFormatType GetFileFormat();
    /// <summary>
    /// Gets and sets the file format.
    /// </summary>
    ASPOSE_CELLS_API void SetFileFormat(FileFormatType value);
    /// <summary>
    /// Gets and sets the interrupt monitor.
    /// </summary>
    ASPOSE_CELLS_API AbstractInterruptMonitor* GetInterruptMonitor();
    /// <summary>
    /// Gets and sets the interrupt monitor.
    /// </summary>
    ASPOSE_CELLS_API void SetInterruptMonitor(AbstractInterruptMonitor* value);
    /// <summary>
    /// Sets the interrupt monitor.
    /// </summary>
    /// <param name="interruptMonitor">An InterruptMonitor object.</param>
    ASPOSE_CELLS_API void SetInterruptMonitor(const InterruptMonitor& interruptMonitor);
    /// <summary>
    /// Gets the list of  <see cref="ContentTypeProperty"/> objects in the workbook.
    /// </summary>
    ASPOSE_CELLS_API ContentTypePropertyCollection GetContentTypeProperties();
    /// <summary>
    /// Represents a Custom XML Data Storage Part (custom XML data within a package).
    /// </summary>
    ASPOSE_CELLS_API CustomXmlPartCollection GetCustomXmlParts();
    /// <summary>
    /// Gets mashup data.
    /// </summary>
    ASPOSE_CELLS_API DataMashup GetDataMashup();
    /// <summary>
    /// Gets and sets the XML file that defines the Ribbon UI.
    /// </summary>
    ASPOSE_CELLS_API U16String GetRibbonXml();
    /// <summary>
    /// Gets and sets the XML file that defines the Ribbon UI.
    /// </summary>
    ASPOSE_CELLS_API void SetRibbonXml(const U16String& value);
    /// <summary>
    /// Gets and sets the XML file that defines the Ribbon UI.
    /// </summary>
    ASPOSE_CELLS_API void SetRibbonXml(const char16_t* value);
    /// <summary>
    /// Gets and sets the absolute path of the file.
    /// </summary>
    /// <remarks>
    /// Only used for external links.
    /// </remarks>
    ASPOSE_CELLS_API U16String GetAbsolutePath();
    /// <summary>
    /// Gets and sets the absolute path of the file.
    /// </summary>
    /// <remarks>
    /// Only used for external links.
    /// </remarks>
    ASPOSE_CELLS_API void SetAbsolutePath(const U16String& value);
    /// <summary>
    /// Gets and sets the absolute path of the file.
    /// </summary>
    /// <remarks>
    /// Only used for external links.
    /// </remarks>
    ASPOSE_CELLS_API void SetAbsolutePath(const char16_t* value);
    /// <summary>
    /// Gets the <see cref="ExternalConnection"/> collection.
    /// </summary>
    ASPOSE_CELLS_API ExternalConnectionCollection GetDataConnections();
    /// <summary>
    /// Imports/Updates an XML data file into the workbook.
    /// </summary>
    /// <param name="url">the url/path of the xml file.</param>
    /// <param name="sheetName">the destination sheet name.</param>
    /// <param name="row">the destination row</param>
    /// <param name="col">the destination column</param>
    ASPOSE_CELLS_API void ImportXml(const U16String& url, const U16String& sheetName, int32_t row, int32_t col);
    /// <summary>
    /// Imports/Updates an XML data file into the workbook.
    /// </summary>
    /// <param name="url">the url/path of the xml file.</param>
    /// <param name="sheetName">the destination sheet name.</param>
    /// <param name="row">the destination row</param>
    /// <param name="col">the destination column</param>
    ASPOSE_CELLS_API void ImportXml(const char16_t* url, const char16_t* sheetName, int32_t row, int32_t col);
    /// <summary>
    /// Imports/Updates an XML data file into the workbook.
    /// </summary>
    /// <param name="stream">the xml file stream.</param>
    /// <param name="sheetName">the destination sheet name.</param>
    /// <param name="row">the destination row.</param>
    /// <param name="col">the destination column.</param>
    ASPOSE_CELLS_API void ImportXml(const Vector<uint8_t>& stream, const U16String& sheetName, int32_t row, int32_t col);
    /// <summary>
    /// Imports/Updates an XML data file into the workbook.
    /// </summary>
    /// <param name="stream">the xml file stream.</param>
    /// <param name="sheetName">the destination sheet name.</param>
    /// <param name="row">the destination row.</param>
    /// <param name="col">the destination column.</param>
    ASPOSE_CELLS_API void ImportXml(const Vector<uint8_t>& stream, const char16_t* sheetName, int32_t row, int32_t col);
    /// <summary>
    /// Export XML data linked by the specified XML map.
    /// </summary>
    /// <param name="mapName">name of the XML map that need to be exported</param>
    /// <param name="path">the export path</param>
    ASPOSE_CELLS_API void ExportXml(const U16String& mapName, const U16String& path);
    /// <summary>
    /// Export XML data linked by the specified XML map.
    /// </summary>
    /// <param name="mapName">name of the XML map that need to be exported</param>
    /// <param name="path">the export path</param>
    ASPOSE_CELLS_API void ExportXml(const char16_t* mapName, const char16_t* path);
    /// <summary>
    /// Export XML data.
    /// </summary>
    /// <param name="mapName">name of the XML map that need to be exported</param>
    /// <param name="stream">the export stream</param>
    ASPOSE_CELLS_API Vector<uint8_t> ExportXml(const U16String& mapName);
    /// <summary>
    /// Export XML data.
    /// </summary>
    /// <param name="mapName">name of the XML map that need to be exported</param>
    /// <param name="stream">the export stream</param>
    ASPOSE_CELLS_API Vector<uint8_t> ExportXml(const char16_t* mapName);
    /// <summary>
    /// Sets digital signature to an spreadsheet file (Excel2007 and later).
    /// </summary>
    /// <param name="digitalSignatureCollection"></param>
    /// <remarks>Only support adding Xmldsig Digital Signature</remarks>
    ASPOSE_CELLS_API void SetDigitalSignature(const DigitalSignatureCollection& digitalSignatureCollection);
    /// <summary>
    /// Adds digital signature to an OOXML spreadsheet file (Excel2007 and later).
    /// </summary>
    /// <param name="digitalSignatureCollection"></param>
    /// <remarks>Only support adding Xmldsig Digital Signature to an OOXML spreadsheet file</remarks>
    ASPOSE_CELLS_API void AddDigitalSignature(const DigitalSignatureCollection& digitalSignatureCollection);
    /// <summary>
    /// Gets digital signature from file.
    /// </summary>
    ASPOSE_CELLS_API DigitalSignatureCollection GetDigitalSignature();
    /// <summary>
    /// Removes personal information.
    /// </summary>
    ASPOSE_CELLS_API void RemovePersonalInformation();
    /// <summary>
    /// Performs application-defined tasks associated with freeing, releasing, or
    /// resetting unmanaged resources.
    /// </summary>
    ASPOSE_CELLS_API void Dispose();
    
};

} }

#endif
