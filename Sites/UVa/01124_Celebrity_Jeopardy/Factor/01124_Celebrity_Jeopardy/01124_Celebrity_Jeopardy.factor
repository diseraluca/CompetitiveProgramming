! Copyright 2018 Luca Di Sera
!        Contact: disera.luca@gmail.com
!            https://github.com/diseraluca
!            https://www.linkedin.com/in/luca-di-sera-200023167
!
! This code is licensed under the MIT License. 
! More informations can be found in the LICENSE file in the root folder of this repository
!
! Solution to: https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3565

USING: io kernel ;
IN: UVa.01124_Celebrity_Jeopardy.Factor.01124_Celebrity_Jeopardy

: solve ( -- )
    [ readln dup ] [ print ] while drop ;

MAIN: solve