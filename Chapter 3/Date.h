class Date{
    public:
        explicit Date(int Month, int Day, int Year){
            year = Year;
            day = Day;
            if(Month<1 || Month > 12){
                month= 1;
            }
            else{
                month = Month;
            }
        }

        void setMonth(int Month){
            if(Month<1 || Month > 12){
                month= 1;
            }
            else{
                month = Month;
            }
        }
        int getMonth() const {
            return month;
        }

        void setDay(int Day){
            day = Day;
        }
        int getDay() const {
            return day;
        }

        void setYear(int Year){
            year = Year;
        }
        int getYear() const {
            return year;
        }

        void displayDate(){
            std::cout << month <<'/' << day <<'/' <<year << std::endl;
        }
    private:
        int month;
        int day;
        int year;
};