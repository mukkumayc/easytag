/* EasyTAG - tag editor for audio files
 * Copyright (C) 2013  David King <amigadave@amigadave.com>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation; either version 2 of the License, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc., 51
 * Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#ifndef ET_APPLICATION_WINDOW_H_
#define ET_APPLICATION_WINDOW_H_

#include <gtk/gtk.h>

G_BEGIN_DECLS

#include "et_core.h"

#define ET_TYPE_APPLICATION_WINDOW (et_application_window_get_type ())
#define ET_APPLICATION_WINDOW(object) (G_TYPE_CHECK_INSTANCE_CAST ((object), ET_TYPE_APPLICATION_WINDOW, EtApplicationWindow))

typedef struct _EtApplicationWindow EtApplicationWindow;
typedef struct _EtApplicationWindowClass EtApplicationWindowClass;
typedef struct _EtApplicationWindowPrivate EtApplicationWindowPrivate;

struct _EtApplicationWindow
{
    /*< private >*/
    GtkApplicationWindow parent_instance;
    EtApplicationWindowPrivate *priv;
};

struct _EtApplicationWindowClass
{
    /*< private >*/
    GtkApplicationWindowClass parent_class;
};

GType et_application_window_get_type (void);
EtApplicationWindow *et_application_window_new (GtkApplication *application);
void et_application_window_tag_area_set_sensitive (EtApplicationWindow *self, gboolean sensitive);
void et_application_window_file_area_set_sensitive (EtApplicationWindow *self, gboolean sensitive);
void et_application_window_tag_area_display_controls (EtApplicationWindow *self, ET_File *ETFile);
GtkWidget * et_application_window_get_log_area (EtApplicationWindow *self);
GtkWidget * et_application_window_get_playlist_dialog (EtApplicationWindow *self);
void et_application_window_show_playlist_dialog (GtkAction *action, gpointer user_data);
GtkWidget * et_application_window_get_load_files_dialog (EtApplicationWindow *self);
void et_application_window_show_load_files_dialog (GtkAction *action, gpointer user_data);
GtkWidget * et_application_window_get_search_dialog (EtApplicationWindow *self);
void et_application_window_show_search_dialog (GtkAction *action, gpointer user_data);
GtkWidget * et_application_window_get_preferences_dialog (EtApplicationWindow *self);
void et_application_window_show_preferences_dialog (GtkAction *action, gpointer user_data);
void et_application_window_show_preferences_dialog_scanner (GtkAction *action, gpointer user_data);
GtkWidget * et_application_window_get_cddb_dialog (EtApplicationWindow *self);
void et_application_window_show_cddb_dialog (GtkAction *action, gpointer user_data);
void et_application_window_search_cddb_for_selection (GtkAction *action, gpointer user_data);
void et_application_window_browser_collapse (GtkAction *action, gpointer user_data);
void et_application_window_browser_reload (GtkAction *action, gpointer user_data);
void et_application_window_browser_toggle_display_mode (EtApplicationWindow *self);
void et_application_window_browser_set_sensitive (EtApplicationWindow *self, gboolean sensitive);
void et_application_window_browser_clear (EtApplicationWindow *self);
void et_application_window_browser_clear_album_model (EtApplicationWindow *self);
void et_application_window_browser_clear_artist_model (EtApplicationWindow *self);
void et_application_window_go_home (GtkAction *action, gpointer user_data);
void et_application_window_go_desktop (GtkAction *action, gpointer user_data);
void et_application_window_go_documents (GtkAction *action, gpointer user_data);
void et_application_window_go_download (GtkAction *action, gpointer user_data);
void et_application_window_go_music (GtkAction *action, gpointer user_data);
void et_application_window_go_parent (GtkAction *action, gpointer user_data);
void et_application_window_run_player_for_album_list (GtkAction *action, gpointer user_data);
void et_application_window_run_player_for_artist_list (GtkAction *action, gpointer user_data);
void et_application_window_run_player_for_selection (GtkAction *action, gpointer user_data);
void et_application_window_reload_directory (GtkAction *action, gpointer user_data);
void et_application_window_select_dir (EtApplicationWindow *self, const gchar *path);
void et_application_window_load_default_dir (GtkAction *action, gpointer user_data);
void et_application_window_set_current_path_default (GtkAction *action, gpointer user_data);
const gchar * et_application_window_get_current_path (EtApplicationWindow *self);
void et_application_window_show_open_directory_with_dialog (GtkAction *action, gpointer user_data);
void et_application_window_show_open_files_with_dialog (GtkAction *action, gpointer user_data);
void et_application_window_show_rename_directory_dialog (GtkAction *action, gpointer user_data);
GtkWidget * et_application_window_get_scan_dialog (EtApplicationWindow *self);
void et_application_window_show_scan_dialog (GtkAction *action, gpointer user_data);
void et_application_window_scan_selected_files (GtkAction *action, gpointer user_data);
void et_on_action_select_scan_mode (GtkRadioAction *action, GtkRadioAction *current, gpointer user_data);
void et_on_action_select_browser_mode (GtkRadioAction *action, GtkRadioAction *current, gpointer user_data);
void et_application_window_select_all (GtkAction *action, gpointer user_data);
void et_application_window_browser_entry_set_text (EtApplicationWindow *self, const gchar *text);
void et_application_window_browser_label_set_text (EtApplicationWindow *self, const gchar *text);
ET_File * et_application_window_browser_get_et_file_from_path (EtApplicationWindow *self, GtkTreePath *path);
ET_File * et_application_window_browser_get_et_file_from_iter (EtApplicationWindow *self, GtkTreeIter *iter);
GtkTreeSelection * et_application_window_browser_get_selection (EtApplicationWindow *self);
GtkTreeViewColumn *et_application_window_browser_get_column_for_column_id (EtApplicationWindow *self, gint column_id);
GtkSortType et_application_window_browser_get_sort_order_for_column_id (EtApplicationWindow *self, gint column_id);
void et_application_window_browser_select_file_by_iter_string (EtApplicationWindow *self, const gchar *iter_string, gboolean select);
void et_application_window_browser_select_file_by_et_file (EtApplicationWindow *self, ET_File *file, gboolean select);
GtkTreePath * et_application_window_browser_select_file_by_et_file2 (EtApplicationWindow *self, ET_File *file, gboolean select, GtkTreePath *start_path);
ET_File * et_application_window_browser_select_file_by_dlm (EtApplicationWindow *self, const gchar *string, gboolean select);
void et_application_window_browser_unselect_all (EtApplicationWindow *self);
void et_application_window_browser_refresh_list (EtApplicationWindow *self);
void et_application_window_browser_refresh_file_in_list (EtApplicationWindow *self, ET_File *file);
void et_application_window_browser_refresh_sort (EtApplicationWindow *self);
void et_application_window_unselect_all (GtkAction *action, gpointer user_data);
void et_application_window_invert_selection (GtkAction *action, gpointer user_data);
void et_application_window_select_prev_file (GtkAction *action, gpointer user_data);
void et_application_window_select_next_file (GtkAction *action, gpointer user_data);
void et_application_window_select_first_file (GtkAction *action, gpointer user_data);
void et_application_window_select_last_file (GtkAction *action, gpointer user_data);
void et_application_window_delete_selected_files (GtkAction *action, gpointer user_data);
void et_application_window_remove_selected_tags (GtkAction *action, gpointer user_data);
void et_application_window_undo_selected_files (GtkAction *action, gpointer user_data);
void et_application_window_redo_selected_files (GtkAction *action, gpointer user_data);
void et_application_window_hide_log_area (EtApplicationWindow *self);
void et_application_window_show_log_area (EtApplicationWindow *self);

G_END_DECLS

#endif /* !ET_APPLICATION_WINDOW_H_ */