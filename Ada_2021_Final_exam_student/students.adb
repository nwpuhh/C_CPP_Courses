with Ada.Text_IO;

package body Students is 

    package Txt renames Ada.Text_IO ;

    Nb_Appels : Integer := 0;
    Max_Appels : constant Integer := 10000 ;

    procedure Compte_Appel is
        Loop_Infinit : exception ;
    begin   
        Nb_Appels := Nb_Appels + 1 ;
        if Nb_Appels > Max_Appels then
            raise Loop_Infinit with "The loop is infinite!!" ;
        end if;
    end Compte_Appel ;


    -- define the type of student
    type T_Student is record
        Name : access String ;
        Description : access String ;
        Scores : T_Scores;
    end record ;

    type T_Objects is array(Integer range 1..8) of T_Student ;

    -- define the information of students
    Objects : T_Objects := 
    (
        (new String'("HaoKai Lin"), new String'("Hard Working Guy!"), (18, 16, 15, 15, 14, 14, 14)),
        (new String'("JuXin Chen"), new String'("Intelligent and Hard Working!"), (18, 18, 19, 19, 18, 17, 15)),
        (new String'("JiaNi Cai"), new String'("The only girl!"), (15, 18, 15, 14, 16, 17, 17)),
        (new String'("GuanQi Chen"), new String'("Naught child!"), (14, 13, 14, 13, 15, 13, 14)),
        (new String'("JiaLiang Bao"), new String'("Clever Guy!"), (16, 16, 15, 17, 16, 16, 16)),
        (new String'("MingFu Sun"), new String'("Kawayi Parfait Accent!"), (15, 13, 15, 15, 16, 15, 13)),
        (new String'("MingYang Liu"), new String'("Need be Patient!"), (14, 12, 13, 14, 15, 15, 13)), 
        (new String'("GuoDong Xiong"), new String'("Need more efforts!"), (15, 12, 14, 15, 14, 14, 14))    
    );
    
    function Nb_Objects return Integer is
    begin
        Compte_Appel ;
        return Objects'Length ;
    end Nb_Objects;

    function Nb_students return Integer renames Nb_Objects ;

    procedure Check_Range(No: Integer) is 
    begin
        Compte_Appel ;
        if No not in Objects'Range then
            Txt.Put_Line("Error: " & Integer'Image(No) & " is out of range!!") ;
        end if;
    end Check_Range ;

    function Name(Student : Integer) return String is
    begin
        Check_Range(Student);
        return " " & Objects(Student).Name.all & " ";
    end Name; 

    function Description (Student : Integer) return String is
    begin
        Check_Range(Student);
        return " " & Objects(Student).Description.all & " ";
    end Description ;

    function Scores (Student : Integer) return T_Scores is
    begin
        Check_Range(Student) ;
        return Objects(Student).Scores ;      
    end Scores ;

end Students ;