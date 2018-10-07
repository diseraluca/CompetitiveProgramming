! Copyright 2018 Luca Di Sera
!		Contact: disera.luca@gmail.com
!				 https://github.com/diseraluca
!				 https://www.linkedin.com/in/luca-di-sera-200023167
!
! This code is licensed under the MIT License. 
! More informations can be found in the LICENSE file in the root folder of this repository
!
! Solution to: https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=4&page=show_problem&problem=208

USING: syntax sequences kernel io splitting ;
IN: UVa.00272_TEX_Quotes.Factor.00272_TEX_Quotes

CONSTANT: quote-mapping { "``" "''" } 

: switch-quote ( mapping -- mapping )
    reverse ;

: print-quote ( mapping -- mapping )
    dup first write ;

: gather-input ( -- seq\f )
    readln ;

: prepare-input ( str -- seq )
    "\"" split ;

: process-input ( mapping seq -- mapping )
    [ [ print-quote switch-quote ] [ write ] if-empty ] each ;

: solve ( -- )
    quote-mapping [ gather-input dup ] [ prepare-input process-input ] while 2drop ;

MAIN: solve