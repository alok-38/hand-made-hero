#include <gtk/gtk.h>
#include <stdlib.h>
#include <ctype.h>

static void on_check_clicked(GtkButton *button, gpointer user_data) {
    GtkEntry *entry = GTK_ENTRY(user_data);
    const gchar *input = gtk_entry_get_text(entry);

    char *endptr;
    long number = strtol(input, &endptr, 10);

    // Input validation
    if (*endptr != '\0') {
        gtk_entry_set_text(entry, "");
        GtkWidget *dialog = gtk_message_dialog_new(NULL,
            GTK_DIALOG_MODAL, GTK_MESSAGE_ERROR, GTK_BUTTONS_OK,
            "Invalid input! Please enter a valid integer.");
        gtk_dialog_run(GTK_DIALOG(dialog));
        gtk_widget_destroy(dialog);
        return;
    }

    // Build result message
    gchar result[256];
    if (number == 0) {
        snprintf(result, sizeof(result), "The number is zero.");
    } else {
        const char *sign = number > 0 ? "positive" : "negative";
        const char *parity = (number % 2 == 0) ? "even" : "odd";
        snprintf(result, sizeof(result), "The number is %s and %s.", sign, parity);
    }

    GtkWidget *dialog = gtk_message_dialog_new(NULL,
        GTK_DIALOG_MODAL, GTK_MESSAGE_INFO, GTK_BUTTONS_OK,
        "%s", result);
    gtk_dialog_run(GTK_DIALOG(dialog));
    gtk_widget_destroy(dialog);
}

int main(int argc, char *argv[]) {
    gtk_init(&argc, &argv);

    // Window setup
    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Number Checker");
    gtk_window_set_default_size(GTK_WINDOW(window), 300, 100);
    gtk_container_set_border_width(GTK_CONTAINER(window), 10);

    // Layout
    GtkWidget *box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 8);
    gtk_container_add(GTK_CONTAINER(window), box);

    // Entry widget
    GtkWidget *entry = gtk_entry_new();
    gtk_entry_set_placeholder_text(GTK_ENTRY(entry), "Enter an integer");
    gtk_box_pack_start(GTK_BOX(box), entry, FALSE, FALSE, 0);

    // Button
    GtkWidget *button = gtk_button_new_with_label("Check Number");
    gtk_box_pack_start(GTK_BOX(box), button, FALSE, FALSE, 0);

    // Connect button click
    g_signal_connect(button, "clicked", G_CALLBACK(on_check_clicked), entry);

    // Exit on window close
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    // Show all widgets
    gtk_widget_show_all(window);
    gtk_main();

    return 0;
}
