! Copyright 2018 Luca Di Sera
!        Contact: disera.luca@gmail.com
!            https://github.com/diseraluca
!            https://www.linkedin.com/in/luca-di-sera-200023167
!
! This code is licensed under the MIT License. 
! More informations can be found in the LICENSE file in the root folder of this repository
!
! Solution to: https://www.hackerrank.com/challenges/ctci-array-left-rotation/problem

USING: sequences kernel math.ranges io splitting math.parser ;
IN: HackerRank.Arrays_Left_Rotation.Factor.Arrays_Left_Rotation

: rotate-left-once ( seq -- seq )
    [ 1 tail ] [ 1 head ] bi append ;

: rotate-left ( seq n -- seq )
    [1,b] [ drop rotate-left-once ] each ;

: read-rotation-count ( -- n )
    readln " " split last string>number ;

: read-array ( -- seq )
    readln " " split [ string>number ] map ;

: gather-input ( -- seq n )
    read-rotation-count read-array swap ;

: print-result ( seq -- )
    [ number>string ] map " " join write ;

: solve ( -- )
    gather-input rotate-left print-result ;

MAIN: solve