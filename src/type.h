/* --- This include file is used by every module in DatLib --- */

#ifndef _DATLIB_TYPE_H_
#define _DATLIB_TYPE_H_


/* --- Standard includes --- */

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>


/* --- DatLib Includes --- */

#include "macro.h"


/* --- Comment Structures --- */

struct comment
{
	char *text;

	/* --- Fields that are calculated by DatLib */

	struct game *game;

	uint8_t comment_flags;
	uint8_t comment_warnings;
	uint8_t comment_fixes;
};


/* --- Releases --- */

struct release
{
	/* --- Fields that appear in data files */

	char *name;
	char *region;
	char *language;
	char *date;
	char *_default;

	/* --- Fields that are calculated by DatLib */

	struct game *game;

	uint8_t release_flags;
	uint8_t release_warnings;
	uint8_t release_fixes;
};


/* --- BIOS Set Structures --- */

struct biosset
{
	/* --- Fields that appear in data files */

	char *name;
	char *description;
	char *_default;

	/* --- Fields that are calculated by DatLib */

	struct game *game;

	uint8_t biosset_flags;
	uint8_t biosset_warnings;
	uint8_t biosset_fixes;
};


/* --- ROM Structures --- */

struct rom
{
	/* --- Fields that appear in data files */

	char *name;
	char *bios;
	uint64_t size;
	uint32_t crc;
	char *md5;
	char *sha1;
	char *merge;
	char *region;
	uint32_t offset;
	char *status;
	char *dispose;
	char *soundonly;

	/* --- Fields that are calculated by DatLib */

	struct game *game;

	uint32_t rom_flags;
	uint32_t rom_warnings;
	uint32_t rom_fixes;

	/* --- Fields that are specific to external tools */

	uint32_t match;
};

struct rom_idx
{
	struct rom *rom;
};


/* --- Disk Structures --- */

struct disk
{
	/* --- Fields that appear in data files */

	char *name;
	uint64_t size;
	char *md5;
	char *sha1;
	char *merge;
	char *region;
	uint32_t index;
	char *status;

	/* --- Fields that are calculated by DatLib */

	struct game *game;

	uint32_t crc;

	uint16_t disk_flags;
	uint16_t disk_warnings;
	uint16_t disk_fixes;

	/* --- Fields that are specific to external tools */

	uint32_t match;
};

struct disk_idx
{
	struct disk *disk;
};


/* --- Sample Structures --- */

struct sample
{
	/* --- Fields that appear in data files */

	char *name;

	/* --- Fields that are calculated by DatLib */

	struct game *game;

	char *merge;

	uint8_t sample_flags;
	uint8_t sample_warnings;
	uint8_t sample_fixes;

	/* --- Fields that are specific to external tools */

	uint32_t match;
};

struct sample_idx
{
	struct sample *sample;
};


/* --- Chip Structures --- */

struct chip
{
	/* --- Fields that appear in data files */

	char *name;
	char *type;
	char *soundonly;
	uint32_t clock;

	/* --- Fields that are calculated by DatLib */

	struct game *game;

	uint8_t chip_flags;
	uint8_t chip_warnings;
	uint8_t chip_fixes;
};


/* --- Video Structures --- */

struct video
{
	/* --- Fields that appear in data files */

	char *screen;
	char *orientation;
	uint16_t width;
	uint16_t height;
	uint16_t aspectx;
	uint16_t aspecty;
	double refresh;

	/* --- Fields that are calculated by DatLib */

	struct game *game;

	uint8_t video_flags;
	uint8_t video_warnings;
	uint8_t video_fixes;
};


/* --- Display Structures --- */

struct display
{
	/* --- Fields that appear in data files */

	char *type;
	uint16_t rotate;
	char *flipx;
	uint16_t width;
	uint16_t height;
	double refresh;

	/* --- Fields that are calculated by DatLib */

	struct game *game;

	uint8_t display_flags;
	uint8_t display_warnings;
	uint8_t display_fixes;
};


/* --- Sound Structures --- */

struct sound
{
	/* --- Fields that appear in data files */

	uint8_t channels;

	/* --- Fields that are calculated by DatLib */

	struct game *game;

	uint8_t sound_flags;
	uint8_t sound_warnings;
	uint8_t sound_fixes;
};


/* --- Control Structures --- */

struct control
{
	/* --- Fields that appear in data files */

	char *type;
	int32_t minimum;
	int32_t maximum;
	uint8_t sensitivity;
	uint8_t keydelta;
	char *reverse;

	/* --- Fields that are calculated by DatLib */

	struct input *input;

	uint8_t control_flags;
	uint8_t control_warnings;
	uint8_t control_fixes;
};


/* --- Input Structures --- */

struct input
{
	/* --- Fields that appear in data files */

	char *service;
	char *tilt;
	uint8_t players;
	char *control;
	uint8_t buttons;
	uint8_t coins;
	uint8_t dipswitches;

	/* --- Fields that are calculated by DatLib */

	struct game *game;

	struct control *controls;

	uint32_t num_controls;

	uint8_t input_flags;
	uint8_t input_warnings;
	uint8_t input_fixes;
};


/* --- Dipswitch Structures --- */

struct dipvalue
{
	/* --- Fields that appear in data files */

	char *name;
	char *_default;

	/* --- Fields that are calculated by DatLib */

	struct dipswitch *dipswitch;

	uint8_t dipvalue_flags;
	uint8_t dipvalue_warnings;
	uint8_t dipvalue_fixes;
};

struct dipswitch
{
	/* --- Fields that appear in data files */

	char *name;

	/* --- Fields that are calculated by DatLib */

	struct game *game;

	struct dipvalue *dipvalues;

	uint32_t num_dipvalues;

	uint8_t dipswitch_flags;
	uint8_t dipswitch_warnings;
	uint8_t dipswitch_fixes;
};


/* --- Driver Structures --- */

struct driver
{
	/* --- Fields that appear in data files */

	char *status;
	char *emulation;
	char *color;
	char *sound;
	char *graphic;
	char *cocktail;
	char *protection;
	char *savestate;
	uint32_t palettesize;
	uint8_t colordeep;
	char *credits;

	/* --- Fields that are calculated by DatLib */

	struct game *game;

	uint16_t driver_flags;
	uint16_t driver_warnings;
	uint16_t driver_fixes;
};


/* --- MESS Structures --- */

struct extension
{
	/* --- Fields that appear in data files */

	char *name;

	/* --- Fields that are calculated by DatLib */

	struct device *device;

	uint8_t extension_flags;
	uint8_t extension_warnings;
	uint8_t extension_fixes;
};

struct device
{
	/* --- Fields that appear in data files */

	char *name;
	char *type;
	char *tag;
	char *mandatory;

	/* --- Fields that are calculated by DatLib */

	struct game *game;

	struct extension *extensions;

	uint32_t num_extensions;

	uint8_t device_flags;
	uint8_t device_warnings;
	uint8_t device_fixes;
};


/* --- Archive Structures --- */

struct archive
{
	/* --- Fields that appear in data files */

	char *name;

	/* --- Fields that are calculated by DatLib */

	struct game *game;

	uint8_t archive_flags;
	uint8_t archive_warnings;
	uint8_t archive_fixes;
};


/* --- RAM Option Structures --- */

struct ramoption
{
	/* --- Fields that appear in data files */

	uint64_t size;
	char *_default;

	/* --- Fields that are calculated by DatLib */

	struct game *game;

	uint8_t ramoption_flags;
	uint8_t ramoption_warnings;
	uint8_t ramoption_fixes;
};


/* --- Game Structures --- */

struct game
{
	/* --- Fields that appear in data files */

	char *name;
	char *sourcefile;
	char *cloneof;
	char *romof;
	char *sampleof;
	char *description;
	char *year;
	char *manufacturer;
	char *history;
	char *rebuildto;
	char *board;

	/* --- Fields that are calculated by DatLib */

	struct game *game_cloneof;
	struct game *game_romof;
	struct game *game_sampleof;

	struct comment *comments;

	struct release *releases;

	struct biosset *biossets;

	struct rom *roms;
	struct rom_idx *rom_name_idx;
	struct rom_idx *rom_crc_idx;

	struct disk *disks;
	struct disk_idx *disk_name_idx;
	struct disk_idx *disk_crc_idx;

	struct sample *samples;
	struct sample_idx *sample_name_idx;

	struct chip *chips;

	struct video *videos;

	struct display *displays;

	struct sound *sounds;

	struct input *inputs;
	struct control *controls;

	struct dipswitch *dipswitches;
	struct dipvalue *dipvalues;

	struct driver *drivers;

	struct device *devices;
	struct extension *extensions;

	struct archive *archives;

	struct ramoption *ramoptions;

	uint32_t num_comments;
	uint32_t num_releases;
	uint32_t num_biossets;
	uint32_t num_roms;
	uint32_t num_disks;
	uint32_t num_samples;
	uint32_t num_chips;
	uint32_t num_videos;
	uint32_t num_displays;
	uint32_t num_sounds;
	uint32_t num_inputs;
	uint32_t num_controls;
	uint32_t num_dipswitches;
	uint32_t num_dipvalues;
	uint32_t num_drivers;
	uint32_t num_devices;
	uint32_t num_extensions;
	uint32_t num_archives;
	uint32_t num_ramoptions;

	uint64_t size;
	uint32_t crc;

	uint32_t num_clones;

	uint32_t game_flags;

	uint8_t comment_flags;
	uint8_t release_flags;
	uint8_t biosset_flags;
	uint32_t rom_flags;
	uint16_t disk_flags;
	uint8_t sample_flags;
	uint8_t chip_flags;
	uint8_t video_flags;
	uint8_t display_flags;
	uint8_t sound_flags;
	uint8_t input_flags;
	uint8_t control_flags;
	uint8_t dipswitch_flags;
	uint8_t dipvalue_flags;
	uint16_t driver_flags;
	uint8_t device_flags;
	uint8_t extension_flags;
	uint8_t archive_flags;
	uint8_t ramoption_flags;

	uint32_t game_warnings;

	uint8_t comment_warnings;
	uint8_t release_warnings;
	uint8_t biosset_warnings;
	uint32_t rom_warnings;
	uint16_t disk_warnings;
	uint8_t sample_warnings;
	uint8_t chip_warnings;
	uint8_t video_warnings;
	uint8_t display_warnings;
	uint8_t sound_warnings;
	uint8_t input_warnings;
	uint8_t control_warnings;
	uint8_t dipswitch_warnings;
	uint8_t dipvalue_warnings;
	uint16_t driver_warnings;
	uint8_t device_warnings;
	uint8_t extension_warnings;
	uint8_t archive_warnings;
	uint8_t ramoption_warnings;

	uint32_t game_fixes;

	uint8_t comment_fixes;
	uint8_t release_fixes;
	uint8_t biosset_fixes;
	uint32_t rom_fixes;
	uint16_t disk_fixes;
	uint8_t sample_fixes;
	uint8_t chip_fixes;
	uint8_t video_fixes;
	uint8_t display_fixes;
	uint8_t sound_fixes;
	uint8_t input_fixes;
	uint8_t control_fixes;
	uint8_t dipswitch_fixes;
	uint8_t dipvalue_fixes;
	uint16_t driver_fixes;
	uint8_t device_fixes;
	uint8_t extension_fixes;
	uint8_t archive_fixes;
	uint8_t ramoption_fixes;

	/* --- Fields that are specific to external tools */

	uint32_t flags;
	uint32_t match;
	double score;
};

struct game_idx
{
	struct game *game;
};


/* --- ZIP Structures --- */

struct game_zip_rom
{
	/* --- Fields that are calculated by DatLib */

	struct game_zip *game_zip;

	struct rom *rom;

	/* --- Fields that are specific to external tools */

	uint32_t flags;
};

struct game_zip_disk
{
	/* --- Fields that are calculated by DatLib */

	struct game_zip *game_zip;

	struct disk *disk;

	/* --- Fields that are specific to external tools */

	uint32_t flags;
};

struct game_zip_sample
{
	/* --- Fields that are calculated by DatLib */

	struct game_zip *game_zip;

	struct sample *sample;

	/* --- Fields that are specific to external tools */

	uint32_t flags;
};

struct game_zip
{
	/* --- Fields that are calculated by DatLib */

	struct game *game;

	struct game_zip_rom *game_zip_roms;
	struct game_zip_disk *game_zip_disks;
	struct game_zip_sample *game_zip_samples;

	uint32_t num_game_zip_roms;
	uint32_t num_game_zip_disks;
	uint32_t num_game_zip_samples;

	/* --- Fields that are specific to external tools */

	uint32_t flags;
};

struct game_zip_idx
{
	struct game_zip *game_zip;
};


/* --- Header Structures --- */

struct emulator
{
	char *name;
	char *build;
	char *debug;
};

struct header
{
	char *name;           // DatUtil -R option
	char *description;    // DatUtil -F option
	char *category;       // DatUtil -C option
	char *version;        // DatUtil -V option
	char *date;           // DatUtil -T option
	char *author;         // DatUtil -A option
	char *email;          // DatUtil -E option
	char *homepage;       // DatUtil -H option
	char *url;            // DatUtil -U option
	char *comment;        // DatUtil -O option

	char auto_date[11];   // Automatic date

	/* --- Fields that are calculated by DatLib */

	uint16_t header_flags;
};

struct clrmamepro
{
	char *header;
	char *forcemerging;   // DatUtil -M option (none, split or full)
	char *forcepacking;   // DatUtil -P option (zip or unzip)
	char *forcenodump;    // DatUtil -N option (obsolete, required or ignore)

	/* --- Fields that are calculated by DatLib */

	uint8_t clrmamepro_flags;
};

struct romcenter
{
	char *version;        // Default is 2.50
	char *plugin;         // Default is arcade.dll
	char *split;          // DatUtil -M option (smart conversion).
	char *merge;          // DatUtil -M option (smart conversion).
	char *rommode;
	char *biosmode;
	char *samplemode;
	char *lockrommode;
	char *lockbiosmode;
	char *locksamplemode;
	
	/* --- Fields that are calculated by DatLib */

	uint16_t romcenter_flags;
};


/* --- Options --- */

struct st_idx
{
	char *st;

	uint16_t flags;
};

struct options
{
	char *fn;
	char *log_fn;
	struct dat *info;
	struct dat *incorporate;

	struct header header;
	struct clrmamepro clrmamepro;
	uint32_t options;

	char *game_selection;
	char *game_selection_buffer;
	struct st_idx *game_selections;
	uint32_t num_game_selections;

	char *sourcefile_selection;
	char *sourcefile_selection_buffer;
	struct st_idx *sourcefile_selections;
	uint32_t num_sourcefile_selections;

	char *substring_selection;
	char *substring_selection_buffer;
	struct st_idx *substring_selections;
	uint32_t num_substring_selections;

	uint8_t prune_roms;
	uint8_t prune_disks;
	uint8_t prune_samples;

	char *save_name;
	char *save_mode;
	char *save_format;
};


/* --- Dat Structure --- */

struct dat
{
	/* --- Fields that are used to load and save data files */

	char *name;

	struct options *options;

	struct datlib_driver *load;
	struct datlib_driver *save;

	char *log_name;
	FILE *log_file;

	FILE *out;

	char *buffer1_start;
	char *buffer1_end;
	uint32_t buffer1_size;
	char *buffer1_ptr;

	char *buffer2_start;
	char *buffer2_end;
	uint32_t buffer2_size;
	char *buffer2_ptr;

	uint32_t num_lines;

	char *token;
	uint32_t token_size;

	/* --- Fields that appear in data files */

	struct emulator emulator;

	struct header header;

	struct clrmamepro clrmamepro;

	struct romcenter romcenter;

	/* --- Fields that are calculated by DatLib */

	struct game *games;
	struct game_idx *game_name_idx;
	struct game_idx *game_description_idx;
	struct game_idx *game_crc_idx;
	struct game_idx *game_score_idx;

	struct comment *comments;

	struct release *releases;

	struct biosset *biossets;

	struct rom *roms;
	struct rom_idx *game_rom_name_idx;
	struct rom_idx *game_rom_crc_idx;
	struct rom_idx *rom_name_idx;
	struct rom_idx *rom_crc_idx;

	struct disk *disks;
	struct disk_idx *game_disk_name_idx;
	struct disk_idx *game_disk_crc_idx;
	struct disk_idx *disk_name_idx;
	struct disk_idx *disk_crc_idx;

	struct sample *samples;
	struct sample_idx *game_sample_name_idx;
	struct sample_idx *sample_name_idx;

	struct chip *chips;

	struct video *videos;

	struct display *displays;

	struct sound *sounds;

	struct input *inputs;
	struct control *controls;

	struct dipswitch *dipswitches;
	struct dipvalue *dipvalues;

	struct driver *drivers;

	struct device *devices;
	struct extension *extensions;

	struct archive *archives;

	struct ramoption *ramoptions;

	struct game_zip *game_zips;
	struct game_zip_idx *game_zip_name_idx;
	struct game_zip_rom *game_zip_roms;
	struct game_zip_disk *game_zip_disks;
	struct game_zip_sample *game_zip_samples;

	uint32_t num_comments;
	uint32_t num_releases;
	uint32_t num_biossets;
	uint32_t num_games, num_resources, num_machines;
	uint32_t num_roms, num_resource_roms, num_machine_roms;
	uint32_t num_disks, num_resource_disks, num_machine_disks;
	uint32_t num_samples, num_resource_samples, num_machine_samples;
	uint32_t num_chips;
	uint32_t num_videos;
	uint32_t num_displays;
	uint32_t num_sounds;
	uint32_t num_inputs;
	uint32_t num_controls;
	uint32_t num_dipswitches;
	uint32_t num_dipvalues;
	uint32_t num_drivers;
	uint32_t num_devices;
	uint32_t num_extensions;
	uint32_t num_archives;
	uint32_t num_ramoptions;

	uint32_t num_game_zips;
	uint32_t num_game_zip_roms;
	uint32_t num_game_zip_disks;
	uint32_t num_game_zip_samples;

	uint32_t num_parents, num_clones, num_others;

	uint16_t dat_flags;

	uint8_t emulator_flags;
	uint16_t header_flags;
	uint8_t clrmamepro_flags;
	uint16_t romcenter_flags;
	uint32_t game_flags;
	uint8_t comment_flags;
	uint8_t release_flags;
	uint8_t biosset_flags;
	uint32_t rom_flags;
	uint16_t disk_flags;
	uint8_t sample_flags;
	uint8_t chip_flags;
	uint8_t video_flags;
	uint8_t display_flags;
	uint8_t sound_flags;
	uint8_t input_flags;
	uint8_t control_flags;
	uint8_t dipswitch_flags;
	uint8_t dipvalue_flags;
	uint16_t driver_flags;
	uint8_t device_flags;
	uint8_t extension_flags;
	uint8_t archive_flags;
	uint8_t ramoption_flags;

	uint8_t game_selection_warnings;
	uint8_t sourcefile_selection_warnings;
	uint8_t substring_selection_warnings;

	uint8_t emulator_warnings;
	uint16_t header_warnings;
	uint8_t clrmamepro_warnings;
	uint16_t romcenter_warnings;
	uint32_t game_warnings;
	uint8_t comment_warnings;
	uint8_t release_warnings;
	uint8_t biosset_warnings;
	uint32_t rom_warnings;
	uint16_t disk_warnings;
	uint8_t sample_warnings;
	uint8_t chip_warnings;
	uint8_t video_warnings;
	uint8_t display_warnings;
	uint8_t sound_warnings;
	uint8_t input_warnings;
	uint8_t control_warnings;
	uint8_t dipswitch_warnings;
	uint8_t dipvalue_warnings;
	uint16_t driver_warnings;
	uint8_t device_warnings;
	uint8_t extension_warnings;
	uint8_t archive_warnings;
	uint8_t ramoption_warnings;

	uint8_t emulator_fixes;
	uint16_t header_fixes;
	uint8_t clrmamepro_fixes;
	uint16_t romcenter_fixes;
	uint32_t game_fixes;
	uint8_t comment_fixes;
	uint8_t release_fixes;
	uint8_t biosset_fixes;
	uint32_t rom_fixes;
	uint16_t disk_fixes;
	uint8_t sample_fixes;
	uint8_t chip_fixes;
	uint8_t video_fixes;
	uint8_t display_fixes;
	uint8_t sound_fixes;
	uint8_t input_fixes;
	uint8_t control_fixes;
	uint8_t dipswitch_fixes;
	uint8_t dipvalue_fixes;
	uint16_t driver_fixes;
	uint8_t device_fixes;
	uint8_t extension_fixes;
	uint8_t archive_fixes;
	uint8_t ramoption_fixes;

	uint8_t emulator_saved;
	uint16_t header_saved;
	uint8_t clrmamepro_saved;
	uint16_t romcenter_saved;
	uint32_t game_saved;
	uint8_t comment_saved;
	uint8_t release_saved;
	uint8_t biosset_saved;
	uint32_t rom_saved;
	uint16_t disk_saved;
	uint8_t sample_saved;
	uint8_t chip_saved;
	uint8_t video_saved;
	uint8_t display_saved;
	uint8_t sound_saved;
	uint8_t input_saved;
	uint8_t control_saved;
	uint8_t dipswitch_saved;
	uint8_t dipvalue_saved;
	uint16_t driver_saved;
	uint8_t device_saved;
	uint8_t extension_saved;
	uint8_t archive_saved;
	uint8_t ramoption_saved;
};


/* --- Ini File Structure --- */

struct ini_entry
{
	char section[MAX_STRING_LENGTH+1];
	char param[MAX_STRING_LENGTH+1];
	char value[MAX_STRING_LENGTH+1];
};


/* --- Options for the loader/cleanser --- */

#define OPTION_LOAD_QUIETLY		0x00000001	// ROMInfo and ROMBChk load datafiles quietly
#define OPTION_SHOW_SUMMARY		0x00000002	// Several tools show the datafile summary

#define OPTION_VERBOSE_LOGGING		0x00000004	// DatUtil -v option
#define OPTION_SHOW_DEBUG_INFO		0x00000008	// DatUtil -d option

#define OPTION_FIX_MERGING_OFF		0x00000010	// DatUtil -x option
#define OPTION_REMOVE_DUPLICATES_OFF	0x00000020	// DatUtil -d option
#define OPTION_LOWER_CASE		0x00000040	// DatUtil -l option
#define OPTION_SORT_GAMES_BY_PARENT	0x00000080	// DatUtil -s option

#define OPTION_GAME_SELECTION		0x00000100	// DatUtil -g option
#define OPTION_CLONE_SELECTION		0x00000200	// DatUtil -c option
#define OPTION_SOURCEFILE_SELECTION	0x00000400	// DatUtil -G option
#define OPTION_SUBSTRING_SELECTION	0x00000800	// DatUtil -S option
#define OPTION_INVERT_SELECTION		0x00001000	// DatUtil -! option

#define OPTION_EXTENDED_CHECKSUMS	0x00002000	// DatUtil -x option
#define OPTION_SHA1_CHECKSUMS		0x00004000	// DatUtil default
#define OPTION_MD5_CHECKSUMS		0x00008000	// DatUtil -m option

#define OPTION_REMOVE_CLONES		0x00010000	// DatUtil -r option
#define OPTION_KEEP_FULL_DETAILS	0x00020000	// DatUtil -k option
#define OPTION_NEBULA_JUKEBOX		0x00040000	// DatUtil -j option
#define OPTION_ALWAYS_QUOTE		0x00080000	// DatUtil -q option

#define	OPTION_DAT_FULL_MERGING		0x00100000	// MAMEDiff -[mM] options
#define	OPTION_DAT_SPLIT_MERGING	0x00200000	// MAMEDiff -[sS] options
#define	OPTION_DAT_NO_MERGING		0x00400000	// MAMEDiff -[nN] options
#define	OPTION_NON_SEPERATED_BIOS_ROMS	0x00800000	// MAMEDiff -b option

#define	OPTION_OBJECT_TYPE_ROM		0x01000000	// MAMEDiff -o rom option
#define	OPTION_OBJECT_TYPE_DISK		0x02000000	// MAMEDiff -o disk option
#define	OPTION_OBJECT_TYPE_SAMPLE	0x04000000	// MAMEDiff -o sample option
#define	OPTION_INCLUDE_NODUMPS_IN_ZIPS	0x08000000	// MAMEDiff -z option

#define	OPTION_REDUCE_ZIP_STRUCTURES	0x10000000	// MAMEDiff -[dT] options

#define	OPTION_NO_INSPECT_FILES		0x20000000	// DatUtil -n


/* --- Datafile Flags (header information takes priority over command line options) --- */

#define	FLAG_DAT_FULL_MERGING		0x0001
#define	FLAG_DAT_SPLIT_MERGING		0x0002
#define	FLAG_DAT_NO_MERGING		0x0004

#define	FLAG_DAT_NODUMP_REQUIRED	0x0010
#define	FLAG_DAT_NODUMP_OBSOLETE	0x0020


/* --- Selection Flags --- */

#define	FLAG_BAD_GAME_SELECTION		0x01
#define	FLAG_BAD_SOURCEFILE_SELECTION	0x01
#define	FLAG_BAD_SUBSTRING_SELECTION	0x01


/* --- String Index Flags --- */

#define	FLAG_STRING_INDEX_USED		0x0001


/* ---- Header Flags --- */

#define FLAG_EMULATOR_NAME		0x01
#define FLAG_EMULATOR_BUILD		0x02
#define FLAG_EMULATOR_DEBUG		0x04

#define FLAG_HEADER_NAME		0x0001
#define FLAG_HEADER_DESCRIPTION		0x0002
#define FLAG_HEADER_CATEGORY		0x0004
#define FLAG_HEADER_VERSION		0x0008
#define FLAG_HEADER_AUTHOR		0x0010
#define FLAG_HEADER_EMAIL		0x0020
#define FLAG_HEADER_HOMEPAGE		0x0040
#define FLAG_HEADER_URL			0x0080
#define FLAG_HEADER_DATE		0x0100
#define FLAG_HEADER_COMMENT		0x0200

#define FLAG_CLRMAMEPRO_HEADER		0x01
#define FLAG_CLRMAMEPRO_FORCEMERGING	0x02
#define FLAG_CLRMAMEPRO_FORCEPACKING	0x04
#define FLAG_CLRMAMEPRO_FORCENODUMP	0x08

#define FLAG_ROMCENTER_VERSION		0x0001
#define FLAG_ROMCENTER_PLUGIN		0x0002
#define FLAG_ROMCENTER_SPLIT		0x0004
#define FLAG_ROMCENTER_MERGE		0x0008
#define FLAG_ROMCENTER_ROMMODE		0x0010
#define FLAG_ROMCENTER_BIOSMODE		0x0020
#define FLAG_ROMCENTER_SAMPLEMODE	0x0040
#define FLAG_ROMCENTER_LOCKROMMODE	0x0080
#define FLAG_ROMCENTER_LOCKBIOSMODE	0x0100
#define FLAG_ROMCENTER_LOCKSAMPLEMODE	0x0200


/* --- Game Flags --- */

#define	FLAG_GAME_NAME			0x00000001
#define	FLAG_RESOURCE_NAME		0x00000002
#define	FLAG_MACHINE_NAME		0x00000004
#define FLAG_GAME_SOURCEFILE		0x00000008
#define FLAG_GAME_CLONEOF		0x00000010
#define FLAG_GAME_ROMOF			0x00000020
#define FLAG_GAME_SAMPLEOF		0x00000040
#define FLAG_GAME_DESCRIPTION		0x00000080
#define FLAG_GAME_YEAR			0x00000100
#define FLAG_GAME_MANUFACTURER		0x00000200
#define FLAG_GAME_HISTORY		0x00000400
#define FLAG_GAME_REBUILDTO		0x00000800
#define FLAG_GAME_BOARD			0x00001000

#define FLAG_GAME_CLONEOFCLONE		0x00010000
#define FLAG_GAME_DUPLICATE_NAME	0x00020000
#define FLAG_GAME_DUPLICATE_DESCRIPTION	0x00040000
#define FLAG_GAME_DUPLICATE_CRC		0x00080000

#define FLAG_GAME_PRUNED_ROMS  		0x00100000
#define FLAG_GAME_PRUNED_DISKS 		0x00200000
#define FLAG_GAME_PRUNED_SAMPLES	0x00400000
#define FLAG_GAME_INCORPORATED		0x00800000


/* --- Comment Flags --- */

#define FLAG_COMMENT_TEXT		0x01


/* --- Release Flags --- */

#define FLAG_RELEASE_NAME		0x01
#define FLAG_RELEASE_REGION		0x02
#define FLAG_RELEASE_LANGUAGE		0x04
#define FLAG_RELEASE_DATE		0x08
#define FLAG_RELEASE_DEFAULT		0x10


/* --- BIOS Set Flags --- */

#define FLAG_BIOSSET_NAME		0x01
#define FLAG_BIOSSET_DESCRIPTION	0x02
#define FLAG_BIOSSET_DEFAULT		0x04


/* --- ROM Flags --- */

#define FLAG_ROM_NAME			0x00000001
#define FLAG_ROM_BIOS			0x00000002
#define FLAG_ROM_SIZE			0x00000004
#define FLAG_ROM_CRC			0x00000008
#define FLAG_ROM_MD5			0x00000010
#define FLAG_ROM_SHA1			0x00000020
#define FLAG_ROM_MERGE			0x00000040
#define FLAG_ROM_REGION			0x00000080
#define FLAG_ROM_OFFSET			0x00000100
#define FLAG_ROM_STATUS			0x00000200
#define FLAG_ROM_DISPOSE		0x00000400
#define FLAG_ROM_SOUNDONLY		0x00000800

#define FLAG_ROM_DUPLICATE		0x00001000
#define FLAG_ROM_SIZE_CONFLICT		0x00002000
#define FLAG_ROM_CRC_CONFLICT		0x00004000
#define FLAG_ROM_SHA1_MD5_CONFLICT	0x00008000
#define FLAG_ROM_INCORPORATED		0x00010000


/* --- Disk Flags --- */

#define FLAG_DISK_NAME			0x0001
#define FLAG_DISK_MD5			0x0002
#define FLAG_DISK_SHA1			0x0004
#define FLAG_DISK_MERGE			0x0008
#define FLAG_DISK_REGION		0x0010
#define FLAG_DISK_INDEX			0x0020
#define FLAG_DISK_STATUS		0x0040

#define FLAG_DISK_DUPLICATE		0x0800
#define FLAG_DISK_SIZE_CONFLICT		0x1000
#define FLAG_DISK_CRC_CONFLICT		0x2000
#define FLAG_DISK_SHA1_MD5_CONFLICT	0x4000
#define FLAG_DISK_INCORPORATED		0x8000


/* --- Sample Flags --- */

#define FLAG_SAMPLE_NAME		0x01

#define FLAG_SAMPLE_DUPLICATE		0x02
#define FLAG_SAMPLE_INCORPORATED	0x04


/* --- Chip Flags --- */

#define FLAG_CHIP_NAME			0x01
#define FLAG_CHIP_TYPE			0x02
#define FLAG_CHIP_SOUNDONLY		0x04
#define FLAG_CHIP_CLOCK			0x08


/* --- Video Flags --- */

#define FLAG_VIDEO_SCREEN		0x01
#define FLAG_VIDEO_ORIENTATION		0x02
#define FLAG_VIDEO_WIDTH		0x04
#define FLAG_VIDEO_HEIGHT		0x08
#define FLAG_VIDEO_ASPECTX		0x10
#define FLAG_VIDEO_ASPECTY		0x20
#define FLAG_VIDEO_REFRESH		0x40


/* --- Display Flags --- */

#define FLAG_DISPLAY_TYPE		0x01
#define FLAG_DISPLAY_ROTATE		0x02
#define FLAG_DISPLAY_FLIPX		0x04
#define FLAG_DISPLAY_WIDTH		0x08
#define FLAG_DISPLAY_HEIGHT		0x10
#define FLAG_DISPLAY_REFRESH		0x20


/* --- Sound Flags --- */

#define FLAG_SOUND_CHANNELS		0x01


/* --- Input Flags --- */

#define FLAG_INPUT_SERVICE		0x01
#define FLAG_INPUT_TILT			0x02
#define FLAG_INPUT_PLAYERS		0x04
#define FLAG_INPUT_CONTROL		0x08
#define FLAG_INPUT_BUTTONS		0x10
#define FLAG_INPUT_COINS		0x20
#define FLAG_INPUT_DIPSWITCHES		0x40


/* --- Control Flags --- */

#define FLAG_CONTROL_TYPE		0x01
#define FLAG_CONTROL_MINIMUM		0x02
#define FLAG_CONTROL_MAXIMUM		0x04
#define FLAG_CONTROL_SENSITIVITY	0x08
#define FLAG_CONTROL_KEYDELTA		0x10
#define FLAG_CONTROL_REVERSE		0x20


/* --- Dipswitch Flags --- */

#define FLAG_DIPSWITCH_NAME		0x01


/* --- Dipvalue Flags --- */

#define FLAG_DIPVALUE_NAME		0x01
#define FLAG_DIPVALUE_DEFAULT		0x02


/* --- Driver Flags --- */

#define FLAG_DRIVER_STATUS		0x0001
#define FLAG_DRIVER_EMULATION		0x0002
#define FLAG_DRIVER_COLOR		0x0004
#define FLAG_DRIVER_SOUND		0x0008
#define FLAG_DRIVER_GRAPHIC		0x0010
#define FLAG_DRIVER_COCKTAIL		0x0020
#define FLAG_DRIVER_PROTECTION		0x0040
#define FLAG_DRIVER_SAVESTATE		0x0080
#define FLAG_DRIVER_PALETTESIZE		0x0180
#define FLAG_DRIVER_COLORDEEP		0x0200
#define FLAG_DRIVER_CREDITS		0x0400


/* --- Device Flags --- */

#define FLAG_DEVICE_NAME		0x01
#define FLAG_DEVICE_TYPE		0x02
#define FLAG_DEVICE_TAG			0x04
#define FLAG_DEVICE_MANDATORY		0x08


/* --- Extension Flags --- */

#define FLAG_EXTENSION_NAME		0x01


/* --- Archive Flags --- */

#define FLAG_ARCHIVE_NAME		0x01


/* --- RAM Option Flags --- */

#define FLAG_RAMOPTION_SIZE		0x01
#define FLAG_RAMOPTION_DEFAULT		0x02


#endif /* _DATLIB_TYPE_H_ */
