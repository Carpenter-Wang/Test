# Microsoft Developer Studio Project File - Name="111" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Application" 0x0101

CFG=111 - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "111.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "111.mak" CFG="111 - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "111 - Win32 Release" (based on "Win32 (x86) Application")
!MESSAGE "111 - Win32 Debug" (based on "Win32 (x86) Application")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
MTL=midl.exe
RSC=rc.exe

!IF  "$(CFG)" == "111 - Win32 Release"

# PROP BASE Use_MFC 6
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 6
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /Yu"stdafx.h" /FD /c
# ADD CPP /nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /Yu"stdafx.h" /FD /c
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x804 /d "NDEBUG" /d "_AFXDLL"
# ADD RSC /l 0x804 /d "NDEBUG" /d "_AFXDLL"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /machine:I386
# ADD LINK32 /nologo /subsystem:windows /machine:I386

!ELSEIF  "$(CFG)" == "111 - Win32 Debug"

# PROP BASE Use_MFC 6
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 6
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_AFXDLL" /Yu"stdafx.h" /FD /GZ /c
# ADD CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /Yu"stdafx.h" /FD /GZ /c
# ADD BASE MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x804 /d "_DEBUG" /d "_AFXDLL"
# ADD RSC /l 0x804 /d "_DEBUG" /d "_AFXDLL"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept
# ADD LINK32 /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept

!ENDIF 

# Begin Target

# Name "111 - Win32 Release"
# Name "111 - Win32 Debug"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=.\111.cpp
# End Source File
# Begin Source File

SOURCE=.\111.rc
# End Source File
# Begin Source File

SOURCE=.\111Dlg.cpp
# End Source File
# Begin Source File

SOURCE=.\cwaxis.cpp
# End Source File
# Begin Source File

SOURCE=.\cwbinding.cpp
# End Source File
# Begin Source File

SOURCE=.\cwbindings.cpp
# End Source File
# Begin Source File

SOURCE=.\cwbutton.cpp
# End Source File
# Begin Source File

SOURCE=.\cwimage.cpp
# End Source File
# Begin Source File

SOURCE=.\cwknob.cpp
# End Source File
# Begin Source File

SOURCE=.\cwlabels.cpp
# End Source File
# Begin Source File

SOURCE=.\cwpicturedisp.cpp
# End Source File
# Begin Source File

SOURCE=.\cwpointer.cpp
# End Source File
# Begin Source File

SOURCE=.\cwpointers.cpp
# End Source File
# Begin Source File

SOURCE=.\cwslide.cpp
# End Source File
# Begin Source File

SOURCE=.\cwstatistics.cpp
# End Source File
# Begin Source File

SOURCE=.\cwticks.cpp
# End Source File
# Begin Source File

SOURCE=.\cwvaluepair.cpp
# End Source File
# Begin Source File

SOURCE=.\cwvaluepairs.cpp
# End Source File
# Begin Source File

SOURCE=.\fontdisp.cpp
# End Source File
# Begin Source File

SOURCE=.\picturedisp.cpp
# End Source File
# Begin Source File

SOURCE=.\StdAfx.cpp
# ADD CPP /Yc"stdafx.h"
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=.\111.h
# End Source File
# Begin Source File

SOURCE=.\111Dlg.h
# End Source File
# Begin Source File

SOURCE=.\cwaxis.h
# End Source File
# Begin Source File

SOURCE=.\cwbinding.h
# End Source File
# Begin Source File

SOURCE=.\cwbindings.h
# End Source File
# Begin Source File

SOURCE=.\cwbutton.h
# End Source File
# Begin Source File

SOURCE=.\cwimage.h
# End Source File
# Begin Source File

SOURCE=.\cwknob.h
# End Source File
# Begin Source File

SOURCE=.\cwlabels.h
# End Source File
# Begin Source File

SOURCE=.\cwpicturedisp.h
# End Source File
# Begin Source File

SOURCE=.\cwpointer.h
# End Source File
# Begin Source File

SOURCE=.\cwpointers.h
# End Source File
# Begin Source File

SOURCE=.\cwslide.h
# End Source File
# Begin Source File

SOURCE=.\cwstatistics.h
# End Source File
# Begin Source File

SOURCE=.\cwticks.h
# End Source File
# Begin Source File

SOURCE=.\cwvaluepair.h
# End Source File
# Begin Source File

SOURCE=.\cwvaluepairs.h
# End Source File
# Begin Source File

SOURCE=.\fontdisp.h
# End Source File
# Begin Source File

SOURCE=.\picturedisp.h
# End Source File
# Begin Source File

SOURCE=.\Resource.h
# End Source File
# Begin Source File

SOURCE=.\StdAfx.h
# End Source File
# End Group
# Begin Group "Resource Files"

# PROP Default_Filter "ico;cur;bmp;dlg;rc2;rct;bin;rgs;gif;jpg;jpeg;jpe"
# Begin Source File

SOURCE=.\res\111.bin
# End Source File
# Begin Source File

SOURCE=.\res\111.ico
# End Source File
# Begin Source File

SOURCE=.\res\111.rc2
# End Source File
# Begin Source File

SOURCE=.\res\bin241.bin
# End Source File
# End Group
# Begin Source File

SOURCE=.\ReadMe.txt
# End Source File
# End Target
# End Project
# Section 111 : {BEF6E003-A874-101A-8BBA-00AA00300CAB}
# 	2:5:Class:CFontDisp
# 	2:10:HeaderFile:fontdisp.h
# 	2:8:ImplFile:fontdisp.cpp
# End Section
# Section 111 : {D940E4BE-6079-11CE-88CB-0020AF6845F6}
# 	2:21:DefaultSinkHeaderFile:cwbutton.h
# 	2:16:DefaultSinkClass:CCWButton
# End Section
# Section 111 : {0EED9920-0DF3-11CF-9617-0020AF6845F6}
# 	2:5:Class:CCWStatistics
# 	2:10:HeaderFile:cwstatistics.h
# 	2:8:ImplFile:cwstatistics.cpp
# End Section
# Section 111 : {6F7EA121-D1A1-11D2-A4EE-00A024D63828}
# 	2:5:Class:CCWBinding
# 	2:10:HeaderFile:cwbinding.h
# 	2:8:ImplFile:cwbinding.cpp
# End Section
# Section 111 : {D940E4D2-6079-11CE-88CB-0020AF6845F6}
# 	2:21:DefaultSinkHeaderFile:cwknob.h
# 	2:16:DefaultSinkClass:CCWKnob
# End Section
# Section 111 : {7BF80981-BF32-101A-8BBB-00AA00300CAB}
# 	2:5:Class:CPictureDisp
# 	2:10:HeaderFile:picturedisp.h
# 	2:8:ImplFile:picturedisp.cpp
# End Section
# Section 111 : {37715970-C76B-11CE-A890-0020AF6845F6}
# 	2:5:Class:CCWValuePair
# 	2:10:HeaderFile:cwvaluepair.h
# 	2:8:ImplFile:cwvaluepair.cpp
# End Section
# Section 111 : {B29D1C40-5270-11D0-A547-0020AF1E73B9}
# 	2:5:Class:CCWPictureDisp
# 	2:10:HeaderFile:cwpicturedisp.h
# 	2:8:ImplFile:cwpicturedisp.cpp
# End Section
# Section 111 : {2C36E3E8-478D-11D0-A547-0020AF1E73B9}
# 	2:5:Class:CCWImage
# 	2:10:HeaderFile:cwimage.h
# 	2:8:ImplFile:cwimage.cpp
# End Section
# Section 111 : {E168E231-C75C-11CE-A890-0020AF6845F6}
# 	2:5:Class:CCWValuePairs
# 	2:10:HeaderFile:cwvaluepairs.h
# 	2:8:ImplFile:cwvaluepairs.cpp
# End Section
# Section 111 : {D940E4C9-6079-11CE-88CB-0020AF6845F6}
# 	2:5:Class:CCWSlide
# 	2:10:HeaderFile:cwslide.h
# 	2:8:ImplFile:cwslide.cpp
# End Section
# Section 111 : {65FD2500-C067-11CE-A88D-0020AF6845F6}
# 	2:5:Class:CCWTicks
# 	2:10:HeaderFile:cwticks.h
# 	2:8:ImplFile:cwticks.cpp
# End Section
# Section 111 : {E93425C7-2038-11CF-A543-0020AF1E73B9}
# 	2:5:Class:CCWPointers
# 	2:10:HeaderFile:cwpointers.h
# 	2:8:ImplFile:cwpointers.cpp
# End Section
# Section 111 : {E4012F00-1073-11CF-9617-0020AF6845F6}
# 	2:5:Class:CCWLabels
# 	2:10:HeaderFile:cwlabels.h
# 	2:8:ImplFile:cwlabels.cpp
# End Section
# Section 111 : {D940E4BF-6079-11CE-88CB-0020AF6845F6}
# 	2:5:Class:CCWButton
# 	2:10:HeaderFile:cwbutton.h
# 	2:8:ImplFile:cwbutton.cpp
# End Section
# Section 111 : {D940E4C8-6079-11CE-88CB-0020AF6845F6}
# 	2:21:DefaultSinkHeaderFile:cwslide.h
# 	2:16:DefaultSinkClass:CCWSlide
# End Section
# Section 111 : {6F7EA122-D1A1-11D2-A4EE-00A024D63828}
# 	2:5:Class:CCWBindings
# 	2:10:HeaderFile:cwbindings.h
# 	2:8:ImplFile:cwbindings.cpp
# End Section
# Section 111 : {0414ADF0-A0DE-11CE-A870-0020AF6845F6}
# 	2:5:Class:CCWAxis
# 	2:10:HeaderFile:cwaxis.h
# 	2:8:ImplFile:cwaxis.cpp
# End Section
# Section 111 : {9A41C7E2-9ACD-11CE-A86E-0020AF6845F6}
# 	2:5:Class:CCWPointer
# 	2:10:HeaderFile:cwpointer.h
# 	2:8:ImplFile:cwpointer.cpp
# End Section
# Section 111 : {D940E4D3-6079-11CE-88CB-0020AF6845F6}
# 	2:5:Class:CCWKnob
# 	2:10:HeaderFile:cwknob.h
# 	2:8:ImplFile:cwknob.cpp
# End Section
