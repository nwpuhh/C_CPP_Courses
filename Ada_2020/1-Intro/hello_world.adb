with Ada.Text_IO;
--use Ada.Text_IO;

procedure hello_world is
    package Txt renames Ada.Text_IO;
begin
    Txt.Put_Line("Hello World");
end hello_world;