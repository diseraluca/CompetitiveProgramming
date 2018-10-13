! Copyright 2018 Luca Di Sera
!        Contact: disera.luca@gmail.com
!            https://github.com/diseraluca
!            https://www.linkedin.com/in/luca-di-sera-200023167
!
! This code is licensed under the MIT License. 
! More informations can be found in the LICENSE file in the root folder of this repository
!
! Solution to: https://www.hackerrank.com/challenges/jumping-on-the-clouds/problem

USING: sequences io kernel splitting math.parser math ;
IN: HackerRank.Jumping_On_The_Clouds.Jumping_On_The_Clouds.Factor.Jumping_On_The_Clouds

CONSTANT: safe-cloud 0

: gather-input ( -- seq )
    readln drop readln " " split [ string>number ] map ;

: ?third= ( seq elt -- ? )
    swap 2 swap ?nth = ; 

: max-jump-length ( seq -- seq n )
    dup safe-cloud ?third= 2 1 ? ;

: jump-by ( seq n -- seq )
    short tail ;

: final-cloud? ( seq -- seq ? )
    dup [ empty? ] [ length 1 = ] bi or ;

: increment-jump-count ( n seq -- n seq )
   [ 1 + ] dip ;

: jump-ahead ( n seq -- n seq )
    max-jump-length jump-by  increment-jump-count final-cloud? [ jump-ahead ] unless ;

: solve ( -- )
    0 gather-input jump-ahead drop number>string print ;

MAIN: solve