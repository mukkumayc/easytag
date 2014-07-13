/* bar.h - 2000/05/05 */
/*
 *  EasyTAG - Tag editor for MP3 and Ogg Vorbis files
 *  Copyright (C) 2000-2003  Jerome Couderc <easytag@gmail.com>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */


#ifndef __BAR_H__
#define __BAR_H__

/***************
 * Declaration *
 ***************/
GtkWidget      *MenuBar;
GtkWidget      *ProgressBar;
GtkUIManager   *UIManager;
GtkActionGroup *ActionGroup;

#define MENU_FILE_SORT_TAG      "SortTagMenu"
#define MENU_FILE_SORT_PROP     "SortPropMenu"
#define MENU_SORT_TAG_PATH "ViewMenu/SortTagMenu"
#define MENU_SORT_PROP_PATH "ViewMenu/SortPropMenu"

#define POPUP_FILE              "FilePopup"
#define POPUP_DIR               "DirPopup"
#define POPUP_SUBMENU_SCANNER   "ScannerSubpopup"
#define POPUP_DIR_RUN_AUDIO     "DirPopupRunAudio"
#define POPUP_LOG               "LogPopup"

#define AM_SCAN_FILES "ScanFiles"
#define AM_OPEN_OPTIONS_WINDOW      "Preferences"
#define AM_CDDB_SEARCH_FILE         "CDDBSearchFile"

#define AM_ARTIST_RUN_AUDIO_PLAYER  "ArtistRunAudio"
#define AM_ARTIST_OPEN_FILE_WITH    "ArtistOpenFile"
#define AM_ALBUM_RUN_AUDIO_PLAYER   "AlbumRunAudio"
#define AM_ALBUM_OPEN_FILE_WITH     "AlbumOpenFile"

#define AM_LOG_CLEAN                "CleanLog"

#define AM_STOP                     "Stop"

#define AM_SORT_ASCENDING_FILENAME          "SortFilenameAsc"
#define AM_SORT_DESCENDING_FILENAME         "SortFilenameDesc"
#define AM_SORT_ASCENDING_CREATION_DATE     "SortDateAsc"
#define AM_SORT_DESCENDING_CREATION_DATE    "SortDateDesc"
#define AM_SORT_ASCENDING_TRACK_NUMBER      "SortTrackNumAsc"
#define AM_SORT_DESCENDING_TRACK_NUMBER     "SortTrackNumDesc"
#define AM_SORT_ASCENDING_TITLE             "SortTitleAsc"
#define AM_SORT_DESCENDING_TITLE            "SortTitleDesc"
#define AM_SORT_ASCENDING_ARTIST            "SortArtistAsc"
#define AM_SORT_DESCENDING_ARTIST           "SortArtistDesc"
#define AM_SORT_ASCENDING_ALBUM_ARTIST      "SortAlbumArtistAsc"
#define AM_SORT_DESCENDING_ALBUM_ARTIST     "SortAlbumArtistDesc"
#define AM_SORT_ASCENDING_ALBUM             "SortAlbumAsc"
#define AM_SORT_DESCENDING_ALBUM            "SortAlbumDesc"
#define AM_SORT_ASCENDING_YEAR              "SortYearAsc"
#define AM_SORT_DESCENDING_YEAR             "SortYearDesc"
#define AM_SORT_ASCENDING_GENRE             "SortGenreAsc"
#define AM_SORT_DESCENDING_GENRE            "SortGenreDesc"
#define AM_SORT_ASCENDING_COMMENT           "SortCommentAsc"
#define AM_SORT_DESCENDING_COMMENT          "SortCommentDesc"
#define AM_SORT_ASCENDING_COMPOSER          "SortComposerAsc"
#define AM_SORT_DESCENDING_COMPOSER         "SortComposerDesc"
#define AM_SORT_ASCENDING_ORIG_ARTIST       "SortOrigArtistAsc"
#define AM_SORT_DESCENDING_ORIG_ARTIST      "SortOrigArtistDesc"
#define AM_SORT_ASCENDING_COPYRIGHT         "SortCopyrightAsc"
#define AM_SORT_DESCENDING_COPYRIGHT        "SortCopyrightDesc"
#define AM_SORT_ASCENDING_URL               "SortUrlAsc"
#define AM_SORT_DESCENDING_URL              "SortUrlDesc"
#define AM_SORT_ASCENDING_ENCODED_BY        "SortEncodedByAsc"
#define AM_SORT_DESCENDING_ENCODED_BY       "SortEncodedByDesc"
#define AM_SORT_ASCENDING_FILE_TYPE         "SortTypeAsc"
#define AM_SORT_DESCENDING_FILE_TYPE        "SortTypeDesc"
#define AM_SORT_ASCENDING_FILE_SIZE         "SortSizeAsc"
#define AM_SORT_DESCENDING_FILE_SIZE        "SortSizeDesc"
#define AM_SORT_ASCENDING_FILE_DURATION     "SortDurationAsc"
#define AM_SORT_DESCENDING_FILE_DURATION    "SortDurationDesc"
#define AM_SORT_ASCENDING_FILE_BITRATE      "SortBitrateAsc"
#define AM_SORT_DESCENDING_FILE_BITRATE     "SortBitrateDesc"
#define AM_SORT_ASCENDING_FILE_SAMPLERATE   "SortSamplerateAsc"
#define AM_SORT_DESCENDING_FILE_SAMPLERATE  "SortSamplerateDesc"

typedef struct _Action_Pair Action_Pair;
struct _Action_Pair {
    const gchar *action;
    GQuark quark;
};

/**************
 * Prototypes *
 **************/

void Create_UI (GtkWindow *window, GtkWidget **menubar, GtkWidget **toolbar);
GtkWidget *Create_Status_Bar   (void);
void Statusbar_Message (const gchar *message, gboolean with_timer);
GtkWidget *Create_Progress_Bar (void);

#endif /* __BAR_H__ */
