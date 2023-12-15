![Nuget](https://img.shields.io/nuget/v/Aspose.cells.Cpp) ![Nuget](https://img.shields.io/nuget/dt/Aspose.cells.Cpp)
# C++ Library for Excel File Formats

[Aspose.Cells for C++](https://products.aspose.com/cells/cpp) is a native C++ library to create, manipulate, process and convert Microsoft Excel® files without needing Microsoft Office® or Automation. The Excel C++ API supports Excel 97-2003 (XLS), Excel 2007-2013/2016 (XLSX, XLSM, XLSB), OpenOffice XML and other formats such as CSV, TSV and more.

<p align="center">
  <a title="Download ZIP" href="https://github.com/aspose-cells/Aspose.Cells-for-c/archive/master.zip">
    <img src="http://i.imgur.com/hwNhrGZ.png" />
  </a>
</p>

Directory | Description
--------- | -----------
[Examples](Examples)  | A collection of C++ examples that help you learn and explore the API features.


## Excel File Processing Features

- Load existing spreadsheets or create one from scratch.
- Convert spreadsheets to any [supportted file format](https://docs.aspose.com/cells/cpp/supported-file-formats/).
- [Convert worksheets to different image formats](https://docs.aspose.com/cells/cpp/converting-worksheet-to-different-image-formats/).
- [Apply conditional formatting](https://docs.aspose.com/cells/cpp/apply-conditional-formatting-in-worksheet/) as per your choice.
- [Manipulate Pivot Tables](https://docs.aspose.com/cells/cpp/manipulate-pivot-table/) in your spreadsheets.
- [Convert table to range](https://docs.aspose.com/cells/cpp/tables-and-ranges/) without losing formatting.
- Fetch a cell's name by providing the row and column index, similarly, fetch row and column index of cell from its name.
- [Create & customize Excel charts](https://docs.aspose.com/cells/cpp/creating-and-customizing-charts/).
- [Render charts as images & PDF](https://docs.aspose.com/cells/cpp/chart-rendering/).

## Read & Write Spreadsheets

**Microsoft Excel:** XLS, XLSX, XLSB\
**Text:** CSV, TSV\
**OpenDocument:** ODS\
**Others:** HTML, MHTML

## Save Spreadsheets As

**Microsoft Excel:** XLSM, XLTX, XLTM, XLAM\
**Fixed Layout:** PDF, XPS\
**Images:** JPEG, PNG, BMP, TIFF, GIF, EMF, SVG

## Get Started with Aspose.Cells for C++

Are you ready to give Aspose.Cells for C++ a try? Simply execute `Install-Package Aspose.Cells.Cpp` from Package Manager Console in Visual Studio to fetch the NuGet package. If you already have Aspose.Cells for C++ and want to upgrade the version, please execute `Update-Package Aspose.Cells.Cpp` to get the latest version.

### Convert XLS to XLSX, XLSB & CSV

```c++
Aspose::Cells::Startup();

//Output directory path
U16String dir = "..\\Data\\Output\\";

// load the file to be converted
Workbook book(u"template.xls");
// save in different formats
book.Save(dir + "output.xlsx", SaveFormat::Xlsx);
book.Save(dir + "output.xlsb", SaveFormat::Xlsb);
book.Save(dir + "output.csv", SaveFormat::CSV);

Aspose::Cells::Cleanup();

```

### Create a Custom Excel Chart

```c++

Aspose::Cells::Startup();

// create a new workbook
Workbook workbook;

// get first worksheet which is created by default
Worksheet worksheet = workbook.GetWorksheets().Get(0);

// add sample data
worksheet.GetCells().Get("A1").PutValue(50);
worksheet.GetCells().Get("A2").PutValue(100);
worksheet.GetCells().Get("A3").PutValue(150);
worksheet.GetCells().Get("A4").PutValue(110);
worksheet.GetCells().Get("B1").PutValue(260);
worksheet.GetCells().Get("B2").PutValue(12);
worksheet.GetCells().Get("B3").PutValue(50);
worksheet.GetCells().Get("B4").PutValue(100);

// add a chart to the worksheet
int chartIndex = worksheet.GetCharts().Add(Aspose::Cells::Charts::ChartType::Column, 5, 0, 20, 8);

// access the instance of the newly added chart
Chart chart = worksheet.GetCharts().Get(chartIndex);

// add SeriesCollection (chart data source) to the chart ranging from A1 to B4
chart.GetNSeries().Add("A1:B4", true);

// set the chart type of 2nd NSeries to display as line chart
chart.GetNSeries().Get(1).SetType(Aspose::Cells::Charts::ChartType::Line);

// save the Excel file
workbook.Save("output.xlsx");

Aspose::Cells::Cleanup();

```

[Home](https://www.aspose.com/) | [Product Page](https://products.aspose.com/cells/cpp) | [Docs](https://docs.aspose.com/cells/cpp/) | [Demos](https://products.aspose.app/cells/family) | [API Reference](https://apireference.aspose.com/cells/cpp) | [Examples](https://github.com/aspose-cells/Aspose.Cells-for-C) | [Blog](https://blog.aspose.com/category/cells/) | [Search](https://search.aspose.com/) | [Free Support](https://forum.aspose.com/c/cells) |  [Temporary License](https://purchase.aspose.com/temporary-license)
