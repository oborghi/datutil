/* --- Include the token header file --- */

#include "token.h"


/* --- Tokens (the descriptions are for the intermediate file of a directory scan and debugging output) --- */

const struct datlib_token datlib_tokens[] =
{
	{TOKEN_UNDEFINED, "UNDEFINED"},
	{TOKEN_EMULATOR_NAME, "EMULATOR_NAME"},
	{TOKEN_EMULATOR_BUILD, "EMULATOR_BUILD"},
	{TOKEN_EMULATOR_DEBUG, "EMULATOR_DEBUG"},
	{TOKEN_GAME_NAME, "GAME_NAME"},
	{TOKEN_GAME_SOURCEFILE, "GAME_SOURCEFILE"},
	{TOKEN_GAME_CLONEOF, "GAME_CLONEOF"},
	{TOKEN_GAME_ROMOF, "GAME_ROMOF"},
	{TOKEN_GAME_SAMPLEOF, "GAME_SAMPLEOF"},
	{TOKEN_GAME_DESCRIPTION, "GAME_DESCRIPTION"},
	{TOKEN_GAME_YEAR, "GAME_YEAR"},
	{TOKEN_GAME_MANUFACTURER, "GAME_MANUFACTURER"},
	{TOKEN_GAME_HISTORY, "GAME_HISTORY"},
	{TOKEN_GAME_REBUILDTO, "GAME_REBUILDTO"},
	{TOKEN_GAME_BOARD, "GAME_BOARD"},
	{TOKEN_RESOURCE_NAME, "RESOURCE_NAME"},
	{TOKEN_RESOURCE_SOURCEFILE, "RESOURCE_SOURCEFILE"},
	{TOKEN_RESOURCE_DESCRIPTION, "RESOURCE_DESCRIPTION"},
	{TOKEN_RESOURCE_YEAR, "RESOURCE_YEAR"},
	{TOKEN_RESOURCE_MANUFACTURER, "RESOURCE_MANUFACTURER"},
	{TOKEN_RESOURCE_HISTORY, "RESOURCE_HISTORY"},
	{TOKEN_RESOURCE_REBUILDTO, "RESOURCE_REBUILDTO"},
	{TOKEN_RESOURCE_BOARD, "RESOURCE_BOARD"},
	{TOKEN_MACHINE_NAME, "MACHINE_NAME"},
	{TOKEN_MACHINE_SOURCEFILE, "MACHINE_SOURCEFILE"},
	{TOKEN_MACHINE_CLONEOF, "MACHINE_CLONEOF"},
	{TOKEN_MACHINE_ROMOF, "MACHINE_ROMOF"},
	{TOKEN_MACHINE_SAMPLEOF, "MACHINE_SAMPLEOF"},
	{TOKEN_MACHINE_DESCRIPTION, "MACHINE_DESCRIPTION"},
	{TOKEN_MACHINE_YEAR, "MACHINE_YEAR"},
	{TOKEN_MACHINE_MANUFACTURER, "MACHINE_MANUFACTURER"},
	{TOKEN_MACHINE_HISTORY, "MACHINE_HISTORY"},
	{TOKEN_MACHINE_REBUILDTO, "MACHINE_REBUILDTO"},
	{TOKEN_MACHINE_BOARD, "MACHINE_BOARD"},
	{TOKEN_HEADER_NAME, "HEADER_NAME"},
	{TOKEN_HEADER_DESCRIPTION, "HEADER_DESCRIPTION"},
	{TOKEN_HEADER_CATEGORY, "HEADER_CATEGORY"},
	{TOKEN_HEADER_VERSION, "HEADER_VERSION"},
	{TOKEN_HEADER_AUTHOR, "HEADER_AUTHOR"},
	{TOKEN_HEADER_EMAIL, "HEADER_EMAIL"},
	{TOKEN_HEADER_HOMEPAGE, "HEADER_HOMEPAGE"},
	{TOKEN_HEADER_URL, "HEADER_URL"},
	{TOKEN_HEADER_DATE, "HEADER_DATE"},
	{TOKEN_HEADER_COMMENT, "HEADER_COMMENT"},
	{TOKEN_CLRMAMEPRO_HEADER, "CLRMAMEPRO_HEADER"},
	{TOKEN_CLRMAMEPRO_FORCEMERGING, "CLRMAMEPRO_FORCEMERGING"},
	{TOKEN_CLRMAMEPRO_FORCEPACKING, "CLRMAMEPRO_FORCEPACKING"},
	{TOKEN_CLRMAMEPRO_FORCENODUMP, "CLRMAMEPRO_FORCENODUMP"},
	{TOKEN_ROMCENTER_PLUGIN, "ROMCENTER_PLUGIN"},
	{TOKEN_ROMCENTER_SPLIT, "ROMCENTER_SPLIT"},
	{TOKEN_ROMCENTER_MERGE, "ROMCENTER_MERGE"},
	{TOKEN_ROMCENTER_ROMMODE, "TOKEN_ROMCENTER_ROMMODE"},
	{TOKEN_ROMCENTER_BIOSMODE, "TOKEN_ROMCENTER_BIOSMODE"},
	{TOKEN_ROMCENTER_SAMPLEMODE, "TOKEN_ROMCENTER_SAMPLEMODE"},
	{TOKEN_ROMCENTER_LOCKROMMODE, "TOKEN_ROMCENTER_LOCKROMMODE"},
	{TOKEN_ROMCENTER_LOCKBIOSMODE, "TOKEN_ROMCENTER_LOCKBIOSMODE"},
	{TOKEN_ROMCENTER_LOCKSAMPLEMODE, "TOKEN_ROMCENTER_LOCKSAMPLEMODE"},
	{TOKEN_COMMENT_TEXT, "COMMENT_TEXT"},
	{TOKEN_RELEASE_NAME, "RELEASE_NAME"},
	{TOKEN_RELEASE_REGION, "RELEASE_REGION"},
	{TOKEN_RELEASE_LANGUAGE, "RELEASE_LANGUAGE"},
	{TOKEN_RELEASE_DATE, "RELEASE_DATE"},
	{TOKEN_RELEASE_DEFAULT, "RELEASE_DEFAULT"},
	{TOKEN_BIOSSET_NAME, "BIOSSET_NAME"},
	{TOKEN_BIOSSET_DESCRIPTION, "BIOSSET_DESCRIPTION"},
	{TOKEN_BIOSSET_DEFAULT, "BIOSSET_DEFAULT"},
	{TOKEN_ROM_NAME, "ROM_NAME"},
	{TOKEN_ROM_BIOS, "ROM_BIOS"},
	{TOKEN_ROM_SIZE, "ROM_SIZE"},
	{TOKEN_ROM_SIZE_HEX, "ROM_SIZE_HEX"},
	{TOKEN_ROM_CRC, "ROM_CRC"},
	{TOKEN_ROM_MD5, "ROM_MD5"},
	{TOKEN_ROM_SHA1, "ROM_SHA1"},
	{TOKEN_ROM_MERGE, "ROM_MERGE"},
	{TOKEN_ROM_REGION, "ROM_REGION"},
	{TOKEN_ROM_OFFSET, "ROM_OFFSET"},
	{TOKEN_ROM_STATUS, "ROM_STATUS"},
	{TOKEN_ROM_DISPOSE, "ROM_DISPOSE"},
	{TOKEN_ROM_SOUNDONLY, "ROM_SOUNDONLY"},
	{TOKEN_DISK_NAME, "DISK_NAME"},
	{TOKEN_DISK_MD5, "DISK_MD5"},
	{TOKEN_DISK_SHA1, "DISK_SHA1"},
	{TOKEN_DISK_MERGE, "DISK_MERGE"},
	{TOKEN_DISK_REGION, "DISK_REGION"},
	{TOKEN_DISK_INDEX, "DISK_INDEX"},
	{TOKEN_DISK_STATUS, "DISK_STATUS"},
	{TOKEN_SAMPLE_NAME, "SAMPLE_NAME"},
	{TOKEN_CHIP_NAME, "CHIP_NAME"},
	{TOKEN_CHIP_TYPE, "CHIP_TYPE"},
	{TOKEN_CHIP_SOUNDONLY, "CHIP_SOUNDONLY"},
	{TOKEN_CHIP_CLOCK, "CHIP_CLOCK"},
	{TOKEN_VIDEO_SCREEN, "VIDEO_SCREEN"},
	{TOKEN_VIDEO_ORIENTATION, "VIDEO_ORIENTATION"},
	{TOKEN_VIDEO_WIDTH, "VIDEO_WIDTH"},
	{TOKEN_VIDEO_HEIGHT, "VIDEO_HEIGHT"},
	{TOKEN_VIDEO_ASPECTX, "VIDEO_ASPECTX"},
	{TOKEN_VIDEO_ASPECTY, "VIDEO_ASPECTY"},
	{TOKEN_VIDEO_REFRESH, "VIDEO_REFRESH"},
	{TOKEN_DISPLAY_TYPE, "DISPLAY_TYPE"},
	{TOKEN_DISPLAY_ROTATE, "DISPLAY_ROTATE"},
	{TOKEN_DISPLAY_FLIPX, "DISPLAY_FLIPX"},
	{TOKEN_DISPLAY_WIDTH, "DISPLAY_WIDTH"},
	{TOKEN_DISPLAY_HEIGHT, "DISPLAY_HEIGHT"},
	{TOKEN_DISPLAY_REFRESH, "VIDEO_REFRESH"},
	{TOKEN_SOUND_CHANNELS, "SOUND_CHANNELS"},
	{TOKEN_INPUT_SERVICE, "INPUT_SERVICE"},
	{TOKEN_INPUT_TILT, "INPUT_TILT"},
	{TOKEN_INPUT_PLAYERS, "INPUT_PLAYERS"},
	{TOKEN_INPUT_CONTROL, "INPUT_CONTROL"},
	{TOKEN_INPUT_BUTTONS, "INPUT_BUTTONS"},
	{TOKEN_INPUT_COINS, "INPUT_COINS"},
	{TOKEN_INPUT_DIPSWITCHES, "INPUT_DIPSWITCHES"},
	{TOKEN_CONTROL_TYPE, "TOKEN_CONTROL_TYPE"},
	{TOKEN_CONTROL_MINIMUM, "TOKEN_CONTROL_MINIMUM"},
	{TOKEN_CONTROL_MAXIMUM, "TOKEN_CONTROL_MAXIMUM"},
	{TOKEN_CONTROL_SENSITIVITY, "TOKEN_CONTROL_SENSITIVITY"},
	{TOKEN_CONTROL_KEYDELTA, "TOKEN_CONTROL_KEYDELTA"},
	{TOKEN_CONTROL_REVERSE, "TOKEN_CONTROL_REVERSE"},
	{TOKEN_DIPSWITCH_NAME, "DIPSWITCH_NAME"},
	{TOKEN_DIPVALUE_NAME, "DIPVALUE_NAME"},
	{TOKEN_DIPVALUE_DEFAULT, "DIPVALUE_DEFAULT"},
	{TOKEN_DRIVER_STATUS, "DRIVER_STATUS"},
	{TOKEN_DRIVER_EMULATION, "DRIVER_EMULATION"},
	{TOKEN_DRIVER_COLOR, "DRIVER_COLOR"},
	{TOKEN_DRIVER_SOUND, "DRIVER_SOUND"},
	{TOKEN_DRIVER_GRAPHIC, "DRIVER_GRAPHIC"},
	{TOKEN_DRIVER_COCKTAIL, "DRIVER_COCKTAIL"},
	{TOKEN_DRIVER_PROTECTION, "DRIVER_PROTECTION"},
	{TOKEN_DRIVER_SAVESTATE, "DRIVER_SAVESTATE"},
	{TOKEN_DRIVER_PALETTESIZE, "DRIVER_PALETTESIZE"},
	{TOKEN_DRIVER_COLORDEEP, "DRIVER_COLORDEEP"},
	{TOKEN_DRIVER_CREDITS, "DRIVER_CREDITS"},
	{TOKEN_DEVICE_NAME, "DEVICE_NAME"},
	{TOKEN_DEVICE_TYPE, "DEVICE_TYPE"},
	{TOKEN_DEVICE_TAG, "DEVICE_TAG"},
	{TOKEN_DEVICE_MANDATORY, "DEVICE_MANDATORY"},
	{TOKEN_EXTENSION_NAME, "EXTENSION_NAME"},
	{TOKEN_ARCHIVE_NAME, "ARCHIVE_NAME"},
	{TOKEN_RAMOPTION_SIZE, "RAMOPTION_SIZE"},
	{TOKEN_RAMOPTION_DEFAULT, "RAMOPTION_DEFAULT"},
};
