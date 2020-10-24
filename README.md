# eInfochip

## Dependencies Required
1. Visual Studio 2017 -- Compiler
2. Bunifu_UI_v1.52  -- UI Framework
3. Boost 1.66 
4. MySQL 8.0 -- Database
5. SOCI 4.0 -- C++ abstraction to access Database
6. openssl 1.1.1 --  SSL to send OTP from gmail

## Project Properties Settings

1. C++ --> General --> Additional Include Directories
   E:\boost-2017\boost_1_66_0;E:\Hetal\SOCI\include;E:\Hetal\SOCI\build\include;
   C:\Program Files\MySQL\MySQL Server 8.0\include;E:\openssl\OpenSSL-Win64\include;%(AdditionalIncludeDirectories)
   
2. C++ --> PreProcessor --> Preprocessor Definitions
   WIN32;_DEBUG;HAVE_BOOST;SOCI_USE_BOOST;USE_ASIO;%(PreprocessorDefinitions)
   
3. Linker --> General --> Additional Library Directories
   E:\boost-2017\boost_1_66_0\libs;E:\boost-2017\boost_1_66_0\stage\lib;E:\Hetal\SOCI\build\lib\Debug;E:\openssl\OpenSSL-Win64\lib
   
4. Linker --> System --> SubSystem
   Windows (/SUBSYSTEM:WINDOWS)
   
5. Linker --> Input --> Additional Dependencies
   soci_core_4_0.lib;soci_empty_4_0.lib;soci_mysql_4_0.lib;libssl.lib;libcrypto.lib;openssl.lib
   
6. Linker --> Advanced --> Entry point
   main
 
7. Configuration Properties --> Debugging --> Command Arguments
   <Path to configuration file>
   
8. Copy below DLLs to Debug / Release folder
   soci_core_4_0.dll
   soci_empty_4_0.dll
   soci_mysql_4_0.dll
   libmysql.dll
   Bunifu_UI_v1.52.dll



