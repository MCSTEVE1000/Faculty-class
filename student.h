#include <string>
class student {
private:
    std::string first_name;
    std::string last_name;
    std::string id;
    std::string dob;
    float gpa;
    int start_year;
    int completed_credit;
    char program;

public:

    void set_first_name(std::string first_name);
    std::string get_first_name();
    void set_last_name(std::string last_name);
    std::string get_last_name();
    void set_id(std::string id);
    std::string get_id();
    void set_dob(std::string dob);
    std::string get_dob();
    void set_gpa(float gpa);
    float get_gpa();
    void set_start_year(int start_year);
    int get_start_year();
    void set_completed_credit(int completed_credit);
    int get_completed_credit();
    void set_program(char program);
    char get_program();

   
    student() : first_name(first_name), last_name(last_name), id(id), dob(dob), gpa(gpa), start_year(start_year), completed_credit(completed_credit), program(program) {}

    int complete_program();

    std::string student_status();

    void print_std_info();

  
    std::string compare_gpa(student other);

};
