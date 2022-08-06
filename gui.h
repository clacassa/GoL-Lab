#ifndef GUI_H_INCLUDED
#define GUI_H_INCLUDED

#include <gtkmm.h>

struct Frame{
    double xMin, xMax, yMin, yMax;
    double asp, height, width;
};

void set_default_frame();
void set_dark_theme_on();

struct Point
{
	double x;
	double y;
};

class MyArea : public Gtk::DrawingArea {
public:
    MyArea();
    virtual ~MyArea();
    void clear();
    void draw();
    void setFrame(Frame x);
    void adjustFrame();
    void refresh();
protected:
    bool on_draw(const Cairo::RefPtr<Cairo::Context>& cr) override;
    void draw_frame(const Cairo::RefPtr<Cairo::Context>& cr);
private:
    Frame frame;
    Point p1, p2;
    bool empty;
};

//===========================================

class SimulationWindow : public Gtk::Window {
public:
    SimulationWindow(std::string __filename);
    void file_error_dialog();
    void set_compliant_theme();
protected:
    void zoom_frame();

    void on_button_open_clicked();
    void on_button_save_clicked();
    void on_button_saveas_clicked();
    void on_button_test_clicked();

    void on_button_zoom_in_clicked();
    void on_button_zoom_out_clicked();
    void on_button_reset_zoom_clicked();
    void on_button_increase_size_clicked();
    void on_button_decrease_size_clicked();
    void on_button_help_clicked();
    void on_button_about_clicked();

    void on_button_quit_clicked();
    void on_button_start_clicked();
    void on_button_step_clicked();
    void on_button_clear_clicked();
    void on_button_reset_clicked();
    void on_button_random_clicked();
    void on_button_gosper_clicked();
    void on_button_max_clicked();

    void on_checkbutton_dark_checked();
    void on_checkbutton_grid_checked();
    void on_dontshowagain_checked();

    void on_event_add_timer();
    void on_event_delete_timer();

    void on_leftarrow_pressed();
    void on_rightarrow_pressed();
    void on_uparrow_pressed();
    void on_downarrow_pressed();

    bool on_idle();
    bool on_timeout();
    bool on_key_press_event(GdkEventKey * key_event);
    bool on_button_press_event(GdkEventButton * event);

    void error_dialog_open(std::string error_message);

    MyArea m_Area;
    double frame_surface;

    Gtk::MenuBar m_MenuBar;
    Gtk::MenuItem fileMi;
    Gtk::MenuItem viewMi;
    Gtk::MenuItem toolsMi;
    Gtk::MenuItem m_helpMi;
    Gtk::Menu m_FileMenu;
    Gtk::Menu m_ViewMenu;
    Gtk::Menu m_ToolsMenu;
    Gtk::Menu m_HelpMenu;
    Gtk::MenuItem openMi;
    Gtk::MenuItem saveMi;
    Gtk::MenuItem saveasMi;
    Gtk::MenuItem quitMi;
    Gtk::MenuItem zoominMi;
    Gtk::MenuItem zoomoutMi;
    Gtk::MenuItem resetzoomMi;
    Gtk::CheckMenuItem showgridMi;
    Gtk::CheckMenuItem darkmode;
    Gtk::MenuItem experimentMi;
    Gtk::MenuItem simsizeMi;
    Gtk::Menu m_SimsizeMenu;
    Gtk::MenuItem incrsizeMi;
    Gtk::MenuItem decrsizeMi;
    Gtk::MenuItem helpMi;
    Gtk::MenuItem aboutMi;
    Gtk::SeparatorMenuItem file_sepMi;
    Gtk::SeparatorMenuItem view_sepMi;

    Gtk::Separator m_Separator;
    Gtk::Separator m_Sep;

    Gtk::Box m_SuperBox;
    Gtk::Box m_HeaderBox, m_Box, m_GuiBox, m_GraphicBox, m_ButtonBox;
    Gtk::Box m_Box_General, m_Appearance_Box;
    Gtk::Frame m_Frame_myarea,  m_Frame_General, m_Frame_Theme;
    Gtk::Frame m_Frame_Speed;
    Gtk::Button m_Button_Start, m_Button_Step, m_Button_Reset, m_Button_Clear, m_Button_Random;
    Gtk::ToggleButton m_Button_Canon, m_Button_Max;
    Gtk::Scale m_Scale;
    Gtk::Label m_Label_Info, m_Label_Test, m_Label_Theme, m_LabelSize, m_LabelZoom, m_LabelCoordinates;

    Gtk::Statusbar m_StatusBar;

    bool timer_added;
    bool disconnect;
    bool experiment;
    int timeout_value;
    std::string x, y;
    std::string filename;
};

#endif