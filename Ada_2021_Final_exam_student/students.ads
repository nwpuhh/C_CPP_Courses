--
-- This actor describes all procedures / functions corresponding to Students
--

package Students is

    -- return the number of all students
    function Nb_students return Integer ;

    -- return the name of student by given index
    function Name(student: Integer) return String ;

    -- return the description of student by given index
    function Description(student : Integer) return String ;

    -- an article type for storing different scores of a studentS
    type T_Scores is record
        Math     : Integer ;
        Ada      : Integer ;
        Optique  : Integer ;
        Physique : Integer ;
        Chemical : Integer ;
        Bilology : Integer ;
        FLE      : Integer ;
    end record ;
    
    -- return the scores of each student
    function Scores (student : Integer) return T_Scores ;


end Students;