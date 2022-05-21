
// to compare structure sizes with the ASM version
// sometimes the structure size depends on -Zp parameter
// (which may be a Win32 C header file bug then)

#define _WIN32_WINNT 0x500

#include <windows.h>
#include <imagehlp.h>
#include <ocidl.h>
#include <winioctl.h>
#include <stdio.h>

struct typed {
    const char *name;
    int size;
};

const struct typed table[] = {
	{ "ACCEL",          sizeof(ACCEL) },
	{ "ARRAYDESC",      sizeof(ARRAYDESC) },
	{ "BITMAPCOREINFO", sizeof(BITMAPCOREINFO) },
	{ "COMMCONFIG",     sizeof(COMMCONFIG) },
	{ "COMMPROP",       sizeof(COMMPROP) },
	{ "CONSOLE_SCREEN_BUFFER_INFO", sizeof(CONSOLE_SCREEN_BUFFER_INFO) },
	{ "CONTEXT",        sizeof(CONTEXT) },
	{ "CONTROLINFO",    sizeof(CONTROLINFO) },
	{ "DISK_DETECTION_INFO", sizeof(DISK_DETECTION_INFO) },
	{ "DISK_EX_INT13_INFO", sizeof(DISK_EX_INT13_INFO) },
	{ "DISK_GEOMETRY_EX", sizeof(DISK_GEOMETRY_EX) },
	/*  { "DISK_INT13_INFO", sizeof(DISK_INT13_INFO) }, */
	{ "DISK_PARTITION_INFO", sizeof(DISK_PARTITION_INFO) },
	{ "DLGTEMPLATE", sizeof(DLGTEMPLATE) },
	{ "DRIVE_LAYOUT_INFORMATION_EX", sizeof(DRIVE_LAYOUT_INFORMATION_EX) },
	{ "DRIVE_LAYOUT_INFORMATION_GPT", sizeof(DRIVE_LAYOUT_INFORMATION_GPT) },
	{ "ELEMDESC", sizeof(ELEMDESC) },
	{ "FORMATETC", sizeof(FORMATETC) },
	{ "FPO_DATA", sizeof(FPO_DATA) },
	{ "FUNCDESC", sizeof(FUNCDESC) },
	{ "IDLDESC", sizeof(IDLDESC) },
#ifndef _WIN64 /* no 64-bit version exists */
	{ "IMAGE_DEBUG_INFORMATION", sizeof(IMAGE_DEBUG_INFORMATION) },
#endif
	{ "INPUT_RECORD", sizeof(INPUT_RECORD) },
	{ "IUnknown", sizeof(IUnknown) },
	{ "IUnknownVtbl", sizeof(IUnknownVtbl) },
	{ "KEY_EVENT_RECORD", sizeof(KEY_EVENT_RECORD) },
	{ "LOADED_IMAGE", sizeof(LOADED_IMAGE) },
	{ "MENUBARINFO", sizeof(MENUBARINFO) },
	{ "NDR_SCONTEXT", sizeof(NDR_SCONTEXT) },
	{ "NEWTEXTMETRIC", sizeof(NEWTEXTMETRIC) },
	{ "OUTLINETEXTMETRIC", sizeof(OUTLINETEXTMETRIC) },
	{ "PANOSE", sizeof(PANOSE) },
	{ "PARAMDESC", sizeof(PARAMDESC) },
	{ "PARAMDESCEX", sizeof(PARAMDESCEX) },
	{ "PARTITION_INFORMATION", sizeof(PARTITION_INFORMATION) },
	{ "PARTITION_INFORMATION_EX", sizeof(PARTITION_INFORMATION_EX) },
	{ "PARTITION_INFORMATION_MBR", sizeof(PARTITION_INFORMATION_MBR) },
	{ "SHFILEOPSTRUCT", sizeof(SHFILEOPSTRUCT) },
	{ "SID", sizeof(SID) },
	{ "STACKFRAME", sizeof(STACKFRAME) },
	{ "STGMEDIUM", sizeof(STGMEDIUM) },
	{ "TEXTMETRIC", sizeof(TEXTMETRIC) },
	{ "TLIBATTR", sizeof(TLIBATTR) },
	{ "TYPEATTR", sizeof(TYPEATTR) },
	{ "TYPEDESC", sizeof(TYPEDESC) },
	{ "VARDESC", sizeof(VARDESC) },
	{ "VARIANT", sizeof(VARIANT) },
	{ "WAVEFORMATEX", sizeof(WAVEFORMATEX) },
	{ "WIN32_FIND_DATAA", sizeof(WIN32_FIND_DATAA) },
	{ "WSADATA", sizeof(WSADATA) },
	{ "wireSAFEARRAY", sizeof(wireSAFEARRAY) },
};

/////////////////////////////////////////////////////////////////////////
//     main()
/////////////////////////////////////////////////////////////////////////
int main(int argc,char * argv[],char * envp[])
{
    int i;

    for ( i = 0; i < sizeof(table) / sizeof( table[0]); i++ )
        printf("C size of %s: %u\n", table[i].name, table[i].size );

    return 0;
}
